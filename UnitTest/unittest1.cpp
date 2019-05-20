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
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(Anagram::is_anagram("B", "B"), true);
		}

		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(Anagram::is_anagram("C", "C"), true);
		}

		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(Anagram::is_anagram("D", "D"), true);
		}

		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(Anagram::is_anagram("E", "E"), true);
		}

		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(Anagram::is_anagram("F", "F"), true);
		}

	};
}
