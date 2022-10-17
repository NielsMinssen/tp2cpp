#include "point.hpp"



std::ostream& operator << (std::ostream& o, const Point& point){
    point.afficher(o);
    return o;
}




