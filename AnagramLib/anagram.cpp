#include "stdafx.h"
#include "anagram.h"


Anagram::Anagram()
{
}

Anagram::~Anagram()
{
}


//������͔��p50�����܂łł��B'\0'�͏I�[�Ƃ��ď�������܂��B' '�͖�������܂��B
bool Anagram::is_anagram(const char *str1, const char *str2)
{
	char str1_copy[50] = {'\0',}, str2_copy[50] = { '\0', };
	int str_length = 0, brank1 = 0, brank2 = 0;

	//'\0'�𖖔��Ɏ����Ȃ��悤�ȃf�[�^�����͂���Ă��A�������[�v���N�����Ȃ��l�Ɂc
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
			return false;//�������������ĂȂ���΃A�i�O�����ɂȂ�͂����Ȃ�
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
				return false;//�����������Ȃ��Ȃ�A�i�O�����ł͂Ȃ�
			}
		}
	}

	return true;
}
