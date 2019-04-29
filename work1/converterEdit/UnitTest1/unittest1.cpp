#include "stdafx.h"
#include "CppUnitTest.h"
#include "../converterEdit/Editor.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(AddDigit0)
		{
			Editor A;
			A.AddDigit(0);
			Assert::AreEqual(A.getNumber(), string("0"));
			// TODO: Разместите здесь код своего теста
		}
		TEST_METHOD(AddDigit1)
		{
			Editor A;
			A.AddDigit(15);
			Assert::AreEqual(A.getNumber(), string("F"));
			// TODO: Разместите здесь код своего теста
		}
		TEST_METHOD(AddDigit2)
		{
			Editor A;
			A.AddDigit(2);
			A.AddDigit(3);
			Assert::AreEqual(A.getNumber(), string("23"));
			// TODO: Разместите здесь код своего теста
		}
		TEST_METHOD(AddDigit3)
		{
			Editor A;
			A.AddDigit(-1);
			Assert::AreEqual(A.getNumber(), string(""));
			// TODO: Разместите здесь код своего теста
		}
		TEST_METHOD(AddZero0)
		{
			Editor A;
			A.AddZero();
			Assert::AreEqual(A.getNumber(), string("0"));
			// TODO: Разместите здесь код своего теста
		}
		TEST_METHOD(AddZero1)
		{
			Editor A;
			A.AddZero();
			A.AddDelim();
			A.AddZero();
			Assert::AreEqual(A.getNumber(), string("0.0"));
			// TODO: Разместите здесь код своего теста
		}
		TEST_METHOD(AddZero2)
		{
			Editor A;
			A.AddDigit(1);
			A.AddZero();
			Assert::AreEqual(A.getNumber(), string("10"));
			// TODO: Разместите здесь код своего теста
		}
		TEST_METHOD(AddDelim0)
		{
			Editor A;
			A.AddDigit(1);
			A.AddDelim();
			A.AddDelim();
			A.AddDelim();
			Assert::AreEqual(A.getNumber(), string("1."));
			// TODO: Разместите здесь код своего теста
		}
		TEST_METHOD(AddDelim1)
		{
			Editor A;
			A.AddDigit(1);
			A.AddDelim();
			A.AddDigit(1);
			Assert::AreEqual(A.getNumber(), string("1.1"));
			// TODO: Разместите здесь код своего теста
		}
		TEST_METHOD(BS)
		{
			Editor A;
			A.AddDigit(1);
			A.AddDelim();
			A.AddDigit(1);
			Assert::AreEqual(A.getNumber(), string("1.1"));
			A.Bs();
			Assert::AreEqual(A.getNumber(), string("1."));
			A.Bs();
			Assert::AreEqual(A.getNumber(), string("1"));
			A.Bs();
			Assert::AreEqual(A.getNumber(), string(""));
			A.Bs();
			Assert::AreEqual(A.getNumber(), string(""));
			// TODO: Разместите здесь код своего теста
		}
		TEST_METHOD(Acc0)
		{
			Editor A;
			A.AddDigit(1);
			//A.AddDelim();
			//A.AddDigit(1);
			Assert::AreEqual(A.Acc(), 0);
			// TODO: Разместите здесь код своего теста

		}
		TEST_METHOD(Acc1)
		{
			Editor A;
			A.AddDigit(1);
			A.AddDelim();
			A.AddDigit(1);
			Assert::AreEqual(A.Acc(), 1);
			// TODO: Разместите здесь код своего теста
		}
		TEST_METHOD(Acc2)
		{
			Editor A;
			A.AddDigit(1);
			A.AddDelim();
			//A.AddZero();
			Assert::AreEqual(A.Acc(), 0);
			// TODO: Разместите здесь код своего теста
		}
	};
}