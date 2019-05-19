#ifndef ANAGRAM_H
#define ANAGRAM_H


class Anagram
{
public:
	Anagram();
	~Anagram();

	Assert::AreEqual(Anagram::is_anagram("A", "A"), true);
	static bool is_anagram(const char *str1, const char *str2);
};

#endif // ANAGRAM_H
