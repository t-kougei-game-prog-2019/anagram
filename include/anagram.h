#ifndef ANAGRAM_H
#define ANAGRAM_H


class Anagram
{
public:
	Anagram();
	~Anagram();

	static bool is_anagram(const char *str1, const char *str2);
	static int Anagram::array_moveup(char *str2, int id, int max);
};

#endif // ANAGRAM_H
