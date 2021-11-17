#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.5/Lab_5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int level = 0;
			Assert::AreEqual(Q(10, 10, level), 42);
		}
	};
}
