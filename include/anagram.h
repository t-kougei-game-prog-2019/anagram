#ifndef ANAGRAM_H
#define ANAGRAM_H


class Anagram
{
public:
	Anagram();
	~Anagram();

	static bool is_anagram(const char *str1, const char *str2) 
	{
		bool match = true;
		for(int i = 0; i < 256; i++)
		{
			if (str1[i] == '\0' || str2[i] == '\0') 
			{
				break;
			}
			if (str1[i] != str2[i])
			{
				match = false;
				break;
			}
		}
		return match;
	}
};

#endif // ANAGRAM_H
