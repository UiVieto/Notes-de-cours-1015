#include "Vecteur.hpp"

template<typename T>
Vecteur<T>::Vecteur() {
	capacite_ = 0;
	nElements_ = 0;
	elements_ = {};
}

template<typename T>
Vecteur<T>::Vecteur(int capacite) {
	capacite_ = capacite;
	nElements_ = 0;
	elements_ = new T[capacite];
}

template<typename T>
Vecteur<T>::Vecteur(const Vecteur& vecteur) {
	capacite_ = vecteur.capacite_;
	nElements_ = vecteur.nElements_;
	elements_ = new T[vecteur.capacite_];

	for (int i = 0; i < vecteur.nElements_; i++)
		elements_[i] = vecteur.elements_[i];
}

template<typename T>
Vecteur<T>::~Vecteur() {
	delete[] elements_;
}

template<typename T>
void Vecteur<T>::ajouter(T element) 
{
	if (capacite_ <= nElements_) {
		int nouvelleCapacite = (capacite_ == 0) ? capacite_ = 1 : capacite_ * 2;
		T* nouveauxElements = new T[nouvelleCapacite];
		
		for (int i = 0; i < nElements_; i++)
			nouveauxElements[i] = elements_[i];

		delete[] elements_;

		elements_ = nouveauxElements;
		capacite_ = nouvelleCapacite;
	}

	elements_[nElements_++] = element;
}

template<typename T>
void Vecteur<T>::ajouter(T element, int indice)
{
	if (capacite_ <= nElements_) {
		int nouvelleCapacite = capacite_ * 2;
		T* nouveauxElements = new T[nouvelleCapacite];
		delete[] elements_;

		elements_ = nouveauxElements;
		capacite_ = nouvelleCapacite;
	}

	elements_[indice] = element;
	nElements_++;
}

template<typename T>
int Vecteur<T>::taille() {
	return capacite_;
}

template<typename T>
int Vecteur<T>::nombreElements() {
	return nElements_;
}

template<typename T>
Vecteur<T>& Vecteur<T>::operator=(const Vecteur<T>& vecteur) {
	delete[] this->elements_;

	capacite_ = vecteur.capacite_;
	nElements_ = vecteur.nElements_;
	elements_ = new T[vecteur.capacite_];

	for (int i = 0; i < vecteur.nElements_; i++)
		elements_[i] = vecteur.elements_[i];

	return *this;
}

template<typename T>
T& Vecteur<T>::operator[](int indice) {
	return elements_[indice];
}

