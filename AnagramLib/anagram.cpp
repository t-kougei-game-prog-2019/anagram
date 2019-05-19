#include "stdafx.h"
#include "anagram.h"
#include <malloc.h>
#include <stdio.h>

Anagram::Anagram()
{
}

Anagram::~Anagram()
{
}


bool Anagram::is_anagram(const char *str1, const char *str2)
{
	//�ǉ����邺
	int str1Count = 0;
	int str2Count = 0;
	int minCount = 0;

	bool isAnagram = false;
	bool *isStr1, *isStr2;

	//���������J�E���g����
	for (int i = 0; str1[i] != '\0'; i++)str1Count++;
	for (int i = 0; str2[i] != '\0'; i++)str2Count++;

	isStr1 = (bool*)malloc(str1Count);
	isStr2 = (bool*)malloc(str2Count);
	for (int i = 0; i < str1Count; i++) isStr1[i] = false;
	for (int i = 0; i < str2Count; i++) isStr2[i] = false;

	//�������m����v���Ă��邩�ǂ����𒲂ׂ�
	for (int i = 0; str1[i] != '\0'; i++) {
		for (int j = 0; str2[j] != '\0'; j++)
		{
			if (str1[i] == str2[j]) {

				//��x��v�������̂͏��O����
				if (!isStr1[j] && !isStr2[i]) {
					printf("[str1]�����F%c�@�ԖځF%d", str1[i], i);
					printf("[str2]�����F%c�@�ԖځF%d", str2[j], j);
					printf("\n");
					minCount++;
					isStr1[j] = true;
					isStr2[i] = true;
				}
			}
		}
	}

	//�������ƈ�v���Ă��鐔�������Ă���ꍇtrue��Ԃ�
	if (str1Count == str2Count) {
		if (minCount == str2Count)isAnagram = true;
	}
	free(isStr1);
	free(isStr2);


	if (isAnagram) {
		printf("true\n\n");
		return true;
	}
	else {
		printf("false\n\n");
		return false;
	}
	
}
