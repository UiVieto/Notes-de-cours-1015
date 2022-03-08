#include "Employee.h"
#include <string>
using namespace std;

Employee::Employee() {
	nom_ = "Inconnu"s;
	salaire_ = 0;
}

Employee::Employee(const string& nom, double salaire) {
	nom_ = nom;
	salaire_ = salaire;
}

double Employee::obtenirSalaire() const {
	return salaire_;
}

const string& Employee::obtenirNom() const {
	return nom_;
}

void Employee::definirSalaire(double salaire) {
	if (salaire > salaire_)
		salaire_ = salaire;
}
