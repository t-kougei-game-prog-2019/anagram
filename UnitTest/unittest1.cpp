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
			Assert::AreEqual(Anagram::is_anagram("ABC", "ACB"), true); //普通のアナグラム
			Assert::AreEqual(Anagram::is_anagram("ABA", "AAB"), true); //1文字かぶりのアナグラム
			Assert::AreEqual(Anagram::is_anagram("AAA", "AAA"), true); //全かぶりのアナグラム
			
			Assert::AreEqual(Anagram::is_anagram("ABC", "A"), true); //文字数の異なる非アナグラム
			Assert::AreEqual(Anagram::is_anagram("ABC", "ABD"), true); //普通の非アナグラム
			Assert::AreEqual(Anagram::is_anagram("AC", "BB"), true); //ASCIIの数値の和が等しい非アナグラム
		}

	};
}
