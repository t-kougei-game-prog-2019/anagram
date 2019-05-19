#include "stdafx.h"
#include "CppUnitTest.h"
#include "anagram.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest4)
	{
	public:

		TEST_METHOD(TestMethod4)
		{
			Assert::AreEqual(Anagram::is_anagram("say", "mknjioqw"),false);
		}

	};
}