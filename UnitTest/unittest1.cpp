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
			Assert::AreEqual(Anagram::is_anagram("Abcd", "Acdb"), true);
		}
		TEST_METHOD(TestMethod3)
		{
			Assert::AreEqual(Anagram::is_anagram("A A A A", "A   AA A"), true);
		}
		TEST_METHOD(TestMethod4)
		{
			Assert::AreEqual(Anagram::is_anagram("Abcds", "Assss"), false);
		}
		TEST_METHOD(TestMethod5)
		{
			Assert::AreEqual(Anagram::is_anagram("Abc\0a", "Abc\0s"), true);
		}
	};
}