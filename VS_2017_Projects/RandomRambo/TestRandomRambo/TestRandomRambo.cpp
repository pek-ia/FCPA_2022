#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestRandomRambo
{
	TEST_CLASS(TestRandomRambo)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            Assert(true == is_prime(29));
		}
	};
}
