#include <iostream>
using namespace std;

template <typename T>
class Vecteur
{
public:
	Vecteur();
	Vecteur(int capacite);
	Vecteur(const Vecteur<T>& vecteur);
	~Vecteur();

	void ajouter(T element);
	void ajouter(T element, int indice);

	int taille();

	int nombreElements();

	T& operator[](int indice);
	Vecteur<T>& operator=(const Vecteur<T>& vecteur);

private:
	int capacite_;
	int nElements_;
	T* elements_;
};