#include <iostream>
using namespace std;

class Fraction
{
friend ostream& operator<<(ostream& flux, const Fraction& fraction);

public:
	Fraction(int numerateur = 0, int denominateur = 1);
	
	int obtenirNumerateur() const;
	int obtenirDenominateur() const;
	double obtenirReel() const;

	Fraction operator+(const Fraction& autreFraction) const;
	Fraction operator+(const int& entier) const;

private:
	int numerateur_;
	int denominateur_;
};