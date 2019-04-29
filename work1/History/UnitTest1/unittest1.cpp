#include "stdafx.h"
#include "CppUnitTest.h"
#include "../History/History.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Count)
		{
			History A;
			A.AddRecord(2, 2, "10", "10");
			Assert::AreEqual(1, A.Count());
		}

		TEST_METHOD(Add0)
		{
			History A;
			//A.AddRecord(2, 2, "10", "10");
			Assert::AreEqual(0, A.Count());
		}
		TEST_METHOD(Add2)
		{
			History A;
			A.AddRecord(2, 2, "10", "10");
			A.AddRecord(2, 2, "10", "10");
			Assert::AreEqual(2, A.Count());
		}
		TEST_METHOD(Add3)
		{
			History A;
			for(int i = 0; i < 100; ++i)
				A.AddRecord(2, 2, "10", "10");
			Assert::AreEqual(100, A.Count());
		}
		TEST_METHOD(Clear)
		{
			History A;
			for (int i = 0; i < 100; ++i)
				A.AddRecord(2, 2, "10", "10");
			A.Clear();
			Assert::AreEqual(0, A.Count());
		}
		TEST_METHOD(At0)
		{
			History A;
			Assert::IsTrue(Record().AreEq(A.at()));
		}
		TEST_METHOD(At2)
		{
			History A;
			A.AddRecord(2, 2, "10", "10");
			Assert::IsTrue(Record(2, 2, "10", "10").AreEq(A.at()));
		}
		TEST_METHOD(At3)
		{
			History A;
			for(int i = 0; i < 100; i++)
				A.AddRecord(2, 2, "10", "10");
			A.AddRecord(2, 3, "10", "2");
			for (int i = 0; i < 100; i++)
				A.AddRecord(2, 2, "10", "10");
			Assert::IsTrue(Record(2, 3, "10", "2").AreEq(A.at(100)));
		}
	};
}