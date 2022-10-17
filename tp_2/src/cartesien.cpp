#include "cartesien.hpp"
#include "polaire.hpp"

double Cartesien::getX() const{
    return x;
}

void Cartesien::setX(double x1)
{x=x1;}

 double Cartesien::getY() const{
    return y;
}

void Cartesien::setY(double y1)
{y=y1;}

void Cartesien::afficher(std::ostream & flux) const{
    flux << "(x="<< x <<";y="<<y<<")";
}

Cartesien::Cartesien():x(0),y(0){}
Cartesien::~Cartesien(){}
Cartesien::Cartesien(double x, double y):x(x),y(y){

}

Cartesien::Cartesien(Polaire &p){
    x=p.getDistance()*cos(p.getAngle()*M_PI/(180));
    y=p.getDistance()*sin(p.getAngle()*M_PI/(180));
}

void Cartesien::convertir(Polaire &p) const{

    p.setAngle(atan2(y,x)*180 / M_PI);
    p.setDistance(sqrt(y*y + x*x));

}

void Cartesien::convertir(Cartesien & c) const{

    c.setX(x);
    c.setY(y);

}

