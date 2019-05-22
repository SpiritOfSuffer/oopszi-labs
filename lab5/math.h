#pragma once
#include<math.h>
class Rational
{
public:
	Rational() :nominator(0), denominator(1) {}

	Rational(const int &number) : nominator(number), denominator(1) {}

	Rational(const int &nominayor, const int &denominator) : nominator(nominator), denominator(denominator) {}


	friend Rational operator+(const Rational &A, const Rational &B);
	friend Rational operator-(const Rational &A, const Rational &B);


	const long int &GetNominator() const { return nominator; }

	const long int &GetDenominator() const { return denominator; }

	static long int GetGcd(const long int &a, const long int &b)
	{
		long int a1 = abs(a);
		long int b1 = abs(b);

		while (true)
		{

			a1 = a1 % b1;
			if (a1 == 0)
			{
				return b1;
			}

			b1 = b1 % a1;
			if (b1 == 0)
			{
				return a1;
			}
		}
	}
}