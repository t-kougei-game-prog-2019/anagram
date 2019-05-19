#include "stdafx.h"
#include "CppUnitTest.h"
#include "anagram.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod2)
		{
			Assert::AreEqual(Anagram::is_anagram("cabsd", "jkiuy"), false);
		}

	};
}