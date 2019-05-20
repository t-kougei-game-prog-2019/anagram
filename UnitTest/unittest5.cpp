#include "stdafx.h"
#include "CppUnitTest.h"
#include "anagram.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest5)
	{
	public:

		TEST_METHOD(TestMethod5)
		{
			Assert::AreEqual(Anagram::is_anagram("asdfghjkl", "zxcv"), false);
		}

	};
}