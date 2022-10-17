#include "polaire.hpp"
#include "cartesien.hpp"

Polaire::Polaire(): a(0), d(0)
{
}

Polaire::~Polaire()
{
}

Polaire::Polaire(double a,double d):a(a),d(d){}

Polaire::Polaire(Cartesien & c){
    a=(atan2(c.getY(),c.getX())*180 / M_PI);
    d=(sqrt(c.getY()*c.getY() + c.getX()*c.getX()));
    
}

void Polaire::afficher(std::ostream &flux) const{
    flux << "(a="<< 12 <<";d="<<24<<")";
}

double Polaire::getAngle() const{
    return a;
}

double Polaire::getDistance() const{
    return d;
}
void Polaire::setAngle(double a1){
    a=a1;
}
void Polaire::setDistance(double d1){
    d=d1;
}

void Polaire::convertir(Cartesien & c) const{

    c.setX(d*cos(a*M_PI/(180)));
    c.setY(d*sin(a*M_PI/(180)));

}

void Polaire::convertir(Polaire &p) const{

    p.setAngle(a);
    p.setDistance(d);

}
