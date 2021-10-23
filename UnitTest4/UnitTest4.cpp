#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Student\PR5.4\PR5.4\PR5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int K = 2, N = 4;
			int l;
			l = (K * K) + (N * N);
			Assert::AreEqual(l, 20);
		}
	};
}
