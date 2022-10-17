#ifndef HPP__CARTESIEN
#define HPP__CARTESIEN


#include "point.hpp"
class Polaire;
class Cartesien : public Point{
    private:
        double x;
        double y;

    public:

    Cartesien();
    Cartesien(double x,double y);
    Cartesien(Polaire&p);
    ~Cartesien();

    double getX() const;
    void setX(double x1);

    double getY() const;
    void setY(double y1);

    virtual void afficher(std::ostream &) const;

    void convertir(Polaire &) const override;
    void convertir(Cartesien &) const override;


};

#endif