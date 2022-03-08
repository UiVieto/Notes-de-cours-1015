#include <string>
using namespace std;

class Employee
{
public:
	Employee();
	Employee(const string& nom, double salaire);
	~Employee() = default;

	double obtenirSalaire() const;

	const string& obtenirNom() const;

	void definirSalaire(double salaire);

private:
	string nom_;
	double salaire_;
};
