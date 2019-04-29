#include "stdafx.h"
#include "CppUnitTest.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(DO1)
		{
			converter_p1_10 A;
			// TODO: Разместите здесь код своего теста
			Assert::AreEqual(A.DO(10, 2, 0), string("1010"));
		}
		TEST_METHOD(DO2)
		{
			converter_p1_10 A;
			// TODO: Разместите здесь код своего теста
			Assert::AreEqual(A.DO(-10, 2, 0), string("-1010"));
		}
		TEST_METHOD(DO3)
		{
			converter_p1_10 A;
			// TODO: Разместите здесь код своего теста
			Assert::AreEqual(A.DO(10.5, 2, 1), string("1010.1"));
		}
		TEST_METHOD(DO4)
		{
			converter_p1_10 A;
			// TODO: Разместите здесь код своего теста
			Assert::AreEqual(A.DO(15, 16, 0), string("F"));
		}
		TEST_METHOD(DO5)
		{
			converter_p1_10 A;
			// TODO: Разместите здесь код своего теста
			Assert::AreEqual(A.DO(-15.5, 16, 1), string("-F.8"));
		}
		TEST_METHOD(int_to_char1)
		{
			converter_p1_10 A;
			// TODO: Разместите здесь код своего теста
			Assert::AreEqual(A.int_to_char(15), 'F');
		}
		TEST_METHOD(int_to_char2)
		{
			converter_p1_10 A;
			// TODO: Разместите здесь код своего теста
			Assert::AreEqual(A.int_to_char(1), '1');
		}
		TEST_METHOD(int_to_char0)
		{
			converter_p1_10 A;
			// TODO: Разместите здесь код своего теста
			Assert::AreEqual(A.int_to_char(-15), (char)'0');
		}
		TEST_METHOD(fit_to_P1)
		{
			converter_p1_10 A;
			// TODO: Разместите здесь код своего теста
			Assert::AreEqual(A.fit_to_P(0.5,2,1), string("0.1"));
		}
		TEST_METHOD(fit_to_P2)
		{
			converter_p1_10 A;
			// TODO: Разместите здесь код своего теста
			Assert::AreEqual(A.fit_to_P(-0.5, 2, 1), string("-0.1"));
		}
		TEST_METHOD(fit_to_P0)
		{
			converter_p1_10 A;
			// TODO: Разместите здесь код своего теста
			Assert::AreEqual(A.fit_to_P(1.5, 2, 1), string());
		}
		TEST_METHOD(int_to_P0)
		{
			converter_p1_10 A;
			// TODO: Разместите здесь код своего теста
			Assert::AreEqual(A.int_to_P(1.5, 2), string("1"));
		}
		TEST_METHOD(int_to_P1)
		{
			converter_p1_10 A;
			// TODO: Разместите здесь код своего теста
			Assert::AreEqual(A.int_to_P(10, 2), string("1010"));
		}
		TEST_METHOD(int_to_P2)
		{
			converter_p1_10 A;
			// TODO: Разместите здесь код своего теста
			Assert::AreEqual(A.int_to_P(-11, 16), string("-B"));
		}
	};
}