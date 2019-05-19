#include "stdafx.h"
#include "CppUnitTest.h"
#include "anagram.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(Anagram::is_anagram("A", "A"), true);
		}
		TEST_METHOD(TestMethod2)
		{
			Assert::AreEqual(Anagram::is_anagram("BBB", "BBB"), true);
		}
		TEST_METHOD(TestMethod3)
		{
			Assert::AreEqual(Anagram::is_anagram("ABC", "BCA"), true);
		}
		TEST_METHOD(TestMethod4)
		{
			Assert::AreEqual(Anagram::is_anagram("CAD", "ADD"), false);
		}
		TEST_METHOD(TestMethod5)
		{
			Assert::AreEqual(Anagram::is_anagram("CAT", "AAAAAA"), false);
		}
		TEST_METHOD(TestMethod6)
		{
			Assert::AreEqual(Anagram::is_anagram("CAF", "ADE"), false);
		}

	};
}