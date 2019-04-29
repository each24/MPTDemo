#include "stdafx.h"
#include "CppUnitTest.h"
#include "../ADTControl/Control.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Construct)
		{
			Control A;
			Assert::AreEqual(A.getPin(), 10);
			Assert::AreEqual(A.getPout(), 16);
			Assert::IsFalse(A.getSt());
			Assert::AreEqual(A.ed->getNumber(), string());
			Assert::AreEqual(A.his->Count(), 0);
			// TODO: Разместите здесь код своего теста
		}

		TEST_METHOD(DoCommand0)
		{
			Control A;
			A.ed->AddDigit(15);
			Assert::AreEqual(A.DoCommand(19),(string)"15");
			Assert::AreEqual(A.getPin(), 10);
			Assert::AreEqual(A.getPout(), 16);
			Assert::IsTrue(A.getSt());
			Assert::AreEqual(A.ed->getNumber(), (string)"F");
			Assert::AreEqual(A.his->Count(), 1);
			// TODO: Разместите здесь код своего теста
		}
	};
}