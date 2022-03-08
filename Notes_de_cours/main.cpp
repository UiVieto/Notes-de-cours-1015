#include "Employee.h"
#include "Fraction.h"
#include "Vecteur.cpp"

#include <iostream>
#include <utility>
#include <functional>
using namespace std;

int main()
{
	cout << "------------------Classe Employee------------------"s << endl;
	cout << "Construction employee1: ";
	Employee employee1;
	cout << employee1.obtenirNom() << ", " << employee1.obtenirSalaire() << "$"s << endl;
	cout << "Construction employee2: ";
	Employee employee2("Marcel", 45000);
	cout << employee2.obtenirNom() << ", " << employee2.obtenirSalaire() << "$"s << endl;
	cout << "---------------------------------------------------"s << endl;
	cout << endl;

	cout << "-----------------------Tuples----------------------"s << endl;
	cout << "Construction de pair<int, double>: ";
	std::pair<int, double> b(1, 2.5);
	cout << b.first << " " << b.second << endl;
	cout << "Construction de tuple<int, double, string>: ";
	std::tuple<int, double, string> t(1, 2.0, "trois"s);
	cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;
	cout << "Operateurs supportes: ==, !=, <, >, <=, >=, <=>" << endl;
	cout << "Utilisable comme cle de map" << endl;
	cout << "---------------------------------------------------"s << endl;
	cout << endl;

	cout << "-----------------Classe Fraction-------------------"s << endl;
	cout << "Construction de fraction1: ";
	Fraction fraction1(2, 3);
	cout << fraction1 << endl;
	cout << "Construction de fraction2: ";
	Fraction fraction2(7, 17);
	cout << fraction2 << endl;
	cout << "Addition de fraction1 et de fraction2: ";
	Fraction fraction3 = fraction1 + fraction2;
	cout << fraction3 << endl;
	cout << "---------------------------------------------------"s << endl;
	cout << endl;

	cout << "------Surcharge de flux d'entree et de sortie------"s << endl;
	cout << fraction1 << " " << fraction2 << " " << fraction3 << " :Voir la classe Fraction" << endl;
	cout << "---------------------------------------------------"s << endl;
	cout << endl;

	cout << "-----------------Classe Vecteur--------------------"s << endl;
	cout << "Construction de vecteur1 (d'entier): ";
	Vecteur<int> vecteur1;
	cout << "taille: " << vecteur1.taille() << ", nombre elements: " << vecteur1.nombreElements() << endl;
	cout << "Ajouts de cinq 1 dans vecteur1: ";
	for (int i = 0; i < 5; i++)
		vecteur1.ajouter(1);
	cout << "taille: " << vecteur1.taille() << ", nombre elements: " << vecteur1.nombreElements() << endl;
	cout << "Construction du vecteur2" << endl;
	Vecteur<int> vecteur2 = vecteur1;
	cout << vecteur2.taille() << " " << vecteur2.nombreElements() << endl;
	cout << "---------------------------------------------------"s << endl;

	cout << "-----------------Fonctions lambdas-----------------"s << endl;
	cout << "---------------------------------------------------"s << endl;

	return 0;
}