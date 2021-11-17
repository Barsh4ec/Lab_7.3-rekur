#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_7.3 rekur/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int k = 5;
			int n = 6;
			int** a = new int* [k];
			for (int i = 0; i < k; i++)
				a[i] = new int[n];
			int s = Zero(a, k, 1, 0, 0);
			Assert::AreEqual(s, 0);
		}
	};
}
