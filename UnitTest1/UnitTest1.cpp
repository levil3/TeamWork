#include "pch.h"
#include "CppUnitTest.h"
#include "../BaseProblem//cal.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(cal(2, 0, 1),1);
		}
		TEST_METHOD(TestMethod2)
		{
			Assert::AreEqual(cal(2, 1, 0), 1);
		}
		TEST_METHOD(TestMethod3)
		{
			Assert::AreEqual(cal(1, 1, 0), 0);
		}
		TEST_METHOD(TestMethod4)
		{
			Assert::AreEqual(cal(1, 1, 2), 3);
		}
		TEST_METHOD(TestMethod5)
		{
			Assert::AreEqual(cal(2, 1, 0), 1);
		}
	};
}
