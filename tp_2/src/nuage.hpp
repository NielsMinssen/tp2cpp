#pragma once
#include "cartesien.hpp"
#include "point.hpp"
#include "polaire.hpp"
#include <iterator>
#include <vector>

using std::vector;
template<class T>
class Nuage {

  vector<T> points;

  public:
	Nuage();
	size_t size() const;
	void ajouter(T p);
	typename std::vector<T>::const_iterator begin() const;
	typename std::vector<T>::const_iterator end() const;
	using const_iterator = typename std::vector<T >::const_iterator;
	Point &operator[](uint const index);
};

// struct BarycentreCartesien {
// 	Cartesien operator()(Nuage<T> const &nuage) const;
// };

// struct BarycentrePolaire {
// 	Polaire operator()(Nuage const &nuage) const;
// };

// Cartesien barycentre(Nuage const &nuage);


///////
template<class T>
Nuage<T>::Nuage() : points() {
}
template<class T>
size_t Nuage<T>::size() const {
	return points.size();
}

template<class T>
void Nuage<T>::ajouter(T p) {
	points.push_back(p);
}

template<class T>
typename std::vector<T>::const_iterator  Nuage<T>::begin() const {
	return points.begin();
}

template<class T>
typename std::vector<T>::const_iterator Nuage<T>::end(void) const {
	return points.end();
}

// Point &Nuage::operator[](uint const index) {
// 	return *points[index];
// }

template<class T>
T barycentre_v1(Nuage<T> N){
    

}

// Cartesien barycentre(Nuage const &nuage) {
// 	uint total = nuage.size();
// 	double x = 0;
// 	double y = 0;
// 	for (auto point : nuage) {
// 		Cartesien tmp = {};
// 		point->convertir(tmp);
// 		x += tmp.getX();
// 		y += tmp.getY();
// 	}

// 	return {x / total, y / total};
// }

// Cartesien BarycentreCartesien::operator()(Nuage const &nuage) const {
// 	return barycentre(nuage);
// }

// Polaire BarycentrePolaire::operator()(Nuage const &nuage) const {
// 	Polaire p = {};
// 	barycentre(nuage).convertir(p);
// 	return p;
// }


