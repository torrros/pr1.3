
#include "Rational.h"
#include <iostream>

using namespace std;

void Rational::Display() const
{
	cout << a << "/" << b << "=" << value() << endl;
}

void Rational::Read()
{
	cout << "Enter a - "; cin >> a;
	cout << "Enter b - "; cin >> b;
}

void Rational::Init(double a, double b)
{
	seta(a);
	setb(b);
}


void Rational::seta(double a)
{
	this->a = a;
}

void Rational::setb(double b)
{
	this->b = b;
}

int Rational::geta() const
{
	return a;
}

int Rational::getb() const
{
	return b;
}

double Rational::value() const
{
	return  1. * a / b;
	
}

Rational Rational::div(const Rational& r)
{
	Rational result;
	result.a = a * r.b;
	result.b = b * r.a;
	return result;

}

bool Rational::equal(const Rational& r)
{
	
	if (a == r.a && b == r.b)
		return true;
	else
		return false;
}

bool Rational::great(const Rational& r)
{
	if (a * r.b > b * r.a)
		return true;
	else
		return false;
}	

bool Rational::less(const Rational& r)
{
	if (a * r.b < b * r.a)
		return true;
	else
		return false;
}

/*void Rational::Reduce()
{

	
}
*/