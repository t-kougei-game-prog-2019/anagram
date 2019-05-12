#ifndef ANAGRAM_H
#define ANAGRAM_H


class Anagram
{
public:
	Anagram();
	~Anagram();

	static bool is_anagram(const char *str1, const char *str2);
};

#endif // ANAGRAM_H
