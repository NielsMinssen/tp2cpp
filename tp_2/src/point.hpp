#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>
#include <tgmath.h>

class Cartesien;
class Polaire;


class Point
{
    private:
    double x;
    double y;

        
    public:
        virtual void afficher(std::ostream&) const{};
        virtual void convertir(Polaire&) const =0;
        virtual void convertir(Cartesien&) const=0;

};

std::ostream& operator << (std::ostream& o, const Point& point);

#endif