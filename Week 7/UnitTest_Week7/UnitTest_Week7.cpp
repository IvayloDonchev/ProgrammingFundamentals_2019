#include "pch.h"
#include "CppUnitTest.h"
#include "../Week 7/functions.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestWeek7
{
	TEST_CLASS(UnitTestWeek7)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double result = fact(10);
			double expected = 3628800.0;
			Assert::AreEqual(expected, result, 0.0001, nullptr, nullptr);
		}
		TEST_METHOD(TestMethod2)
		{
			double result = fact(5);
			double expected = 120.0;
			Assert::AreEqual(expected, result, 0.0001, nullptr, nullptr);
		}
		TEST_METHOD(TestMethod3)
		{
			double result = fact(0);
			double expected = 1.0;
			Assert::AreEqual(expected, result, 0.0001, nullptr, nullptr);
		}
		TEST_METHOD(TestMethod4)
		{
			double result = fact(1);
			double expected = 1.0;
			Assert::AreEqual(expected, result, 0.0001, nullptr, nullptr);
		}
	};
}
