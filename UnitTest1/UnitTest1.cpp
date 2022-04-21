#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\vladt\source\repos\pr1.3\pr1.3\Rational.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rational r1;
			r1.Init(15, 3);
			Rational r2;
			r2.Init(2, 1);
			Assert::AreEqual(div(r1, r2).geta(), 5);
		}
	};
}
