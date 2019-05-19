#include "stdafx.h"
#include "anagram.h"


Anagram::Anagram()
{
}

Anagram::~Anagram()
{
}


//文字列は半角50文字までです。'\0'は終端として処理されます。' 'は無視されます。
bool Anagram::is_anagram(const char *str1, const char *str2)
{
	char str1_copy[50] = {'\0',}, str2_copy[50] = { '\0', };
	int str_length = 0, brank1 = 0, brank2 = 0;

	//'\0'を末尾に持たないようなデータが入力されても、無限ループを起こさない様に…
	for (int i = 0;i<(sizeof(str1_copy)/sizeof(char));i++)
	{
		while (str1[i + brank1] == ' '&&brank1 < 50)
		{
			brank1++;
		}
		while (str2[i + brank2] == ' '&&brank2 < 50)
		{
			brank2++;
		}

		str1_copy[i] = str1[i+brank1];
		str2_copy[i] = str2[i+brank2];

		if (str1_copy[i] != '\0'&&str2_copy[i] != '\0')
		{
			continue;
		}
		else if (str1_copy[i] == '\0'&&str2_copy[i] == '\0')
		{
			str_length = i + 1;
			break;
		}
		else
		{
			return false;//文字数があってなければアナグラムになるはずがない
		}
	}

	for (int i = 0;i<str_length;i++)
	{
		for (int j = 0;j < str_length;j++)
		{
			if (str1_copy[i] == str2_copy[j])
			{
				str2_copy[j] = ' ';
				break;
			}
			else if (j == str_length - 1)
			{
				return false;//同じ文字がないならアナグラムではない
			}
		}
	}

	return true;
}
