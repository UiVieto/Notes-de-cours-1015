#include "Fraction.h"
#include <iostream>
using namespace std;

Fraction::Fraction(int numerateur, int denominateur) {
	numerateur_ = numerateur;
	denominateur_ = denominateur;
}

int Fraction::obtenirNumerateur() const {
	return numerateur_;
}

int Fraction::obtenirDenominateur() const {
	return denominateur_;
}

double Fraction::obtenirReel() const {
	return double(numerateur_) / double(denominateur_);
}

Fraction Fraction::operator+(const Fraction& autreFraction) const {
	return Fraction( numerateur_ * autreFraction.denominateur_ + autreFraction.numerateur_ * denominateur_,
			denominateur_ * autreFraction.denominateur_ );
}

Fraction Fraction::operator+(const int& entier) const {
	return Fraction(numerateur_ + entier * denominateur_, denominateur_);
}

ostream& operator<<(ostream& flux, const Fraction& fraction) {
	return flux << fraction.numerateur_ << "/" << fraction.denominateur_;
}