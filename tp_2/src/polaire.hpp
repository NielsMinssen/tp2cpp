#ifndef HPP__POLAIRE
#define HPP__POLAIRE

#include <iostream>
#include "point.hpp"

class Cartesien;

class Polaire : public Point{
private:
    double a;
    double d;

public:
    Polaire();
    Polaire(double a,double d);
    Polaire(Cartesien&);
    ~Polaire();
    void afficher(std::ostream&) const override;
    double getAngle() const;
    double getDistance() const;
    void setAngle(double a1);
    void setDistance(double d1);
    void convertir(Cartesien &) const override;
    void convertir(Polaire &) const override;

};


#endif