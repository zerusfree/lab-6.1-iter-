#include "pch.h"
#include "CppUnitTest.h"
#include "../6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61iter
{
	TEST_CLASS(UnitTest61iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int p;
			const int k = 4;
			int z[k] = { -22, 11, 11 };
			p = Sum(z, k);
			Assert::AreEqual(p, 0);

		}
	};
}
