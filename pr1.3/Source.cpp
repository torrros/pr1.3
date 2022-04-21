#include "Rational.h"
#include <iostream>

using namespace std;

Rational makerat(int a,int b)
{
	Rational r;
	r.Init(a, b);
	return r;
	
}
int main()
{

	Rational r1;
	r1.Read();
	cout << endl;
	Rational r2 = r1;
	Rational r3 = makerat(4, 5);

	r2.Display();
	r3.Display();
	cout << endl;
	Rational r5 = r3;
	Rational r4 = r1;
	Rational r6 = r1.div(r1);
	
	r6 = r1.div(r3);
	cout << r1.geta() << "/" << r4.getb() << " : " << r3.geta() << "/" << r3.getb() << " = " << r6.geta() << "/" << r6.getb() << endl;
	cout << r2.geta() << "/" << r2.getb() << " = " << r3.geta() << "/" << r3.getb() << " - " << r2.equal(r3) << endl;
	cout << r4.geta() << "/" << r4.getb() << " > " << r5.geta() << "/" << r5.getb() << " - " << r4.great(r5) << endl;
	cout << r4.geta() << "/" << r4.getb() << " < " << r5.geta() << "/" << r5.getb() << " - " << r4.less(r5) << endl;


}