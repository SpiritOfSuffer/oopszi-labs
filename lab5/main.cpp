#include<iostream>
#include"Rational.h"
#include<cstdlib>
using namespace std;

ostream &operator<<(ostream& stream, Rational const& fraction)
{
	Rational reduced = fraction.GetPresented();
	return stream << reduced.GetNominator() << "/" << reduced.GetDenominator();
}

int main(int, char**)
{
	setlocale(LC_ALL, "Russian");
	int long x;
	cout << "Vvedite x(dlay vixoda vvedite 0): "; cin >> x;

	while (x != 0)
	{
		cout << "y(x)=";
		cout << (Rational(x, 3) - Rational(1, 0.2 + x)); cout << "\n";
		cout << "Vvedite x(dlay vixoda vvedite 0): "; cin >> x;
	}
	system("pause");
	return 0;
}