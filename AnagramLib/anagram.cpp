#include "stdafx.h"
#include "anagram.h"


Anagram::Anagram()
{
	Assert::AreEqual(Anagram::is_anagram("A", "A"), true);
}

Anagram::~Anagram()
{
	Assert::AreEqual(Anagram::is_anagram("A", "A"), true);
}


bool Anagram::is_anagram(const char *str1, const char *str2)
{
	return false;
}
