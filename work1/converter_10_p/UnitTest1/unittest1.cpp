#include "stdafx.h"
#include "CppUnitTest.h"
#include "../converter_10_p/converter_10_p2.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(dval0)
		{
			converter_10_p2 A;
			Assert::AreEqual(A.dval("0.0", 16), 0.0);
			// TODO: Разместите здесь код своего теста
		}
		TEST_METHOD(dval1)
		{
			converter_10_p2 A;
			Assert::AreEqual(A.dval("1010.01", 2), 10.25);
			// TODO: Разместите здесь код своего теста
		}
		TEST_METHOD(dval2)
		{
			converter_10_p2 A;
			Assert::AreEqual(A.dval("A5.E", 16), 165.875);
			// TODO: Разместите здесь код своего теста
		}
		TEST_METHOD(dval3)
		{
			converter_10_p2 A;
			Assert::AreEqual(A.dval("-1010.01", 2), -10.25);
			// TODO: Разместите здесь код своего теста
		}

	};
}