#pragma once 
class Rational
{
	int a;
	int b;

private:
	//void Reduce();
public:
	void seta(double a);
	void setb(double b);

	int geta() const;
	int getb() const;

	void Display() const;
	void Read();
	void Init(double a, double b);

	double value() const;
	
	Rational div(const Rational& r);
	bool equal(const Rational& r);
	bool great(const Rational& r);
	bool less(const Rational& r);
	
};