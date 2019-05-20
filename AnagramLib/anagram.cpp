#include "stdafx.h"
#include "anagram.h"


Anagram::Anagram()
{
}

Anagram::~Anagram()
{
}


bool Anagram::is_anagram(const char *str1, const char *str2)
{
	int str1num, str2num;
	str1num = sizeof(str1) / sizeof(char);
	str2num = sizeof(str2) / sizeof(char);
	char *copystr2 = str2;
	int copystr2num = str2num;
	
	if(str1num != str2num) return false; //文字数が違う時点で強制終了
	
	for(int i = 0; i < str1num; i++){
		for(int j = 0; j < copystr2num; j++){
			if(str1[i] == copystr2[j]){
				copystr2num += array_moveup(copystr2, j, copystr2num); //一致した要素を消して前に詰める
				break;
			}
			if(j == str2num - 1){
				return false; //str1の一要素がstr2のどれとも一致しなければ強制終了
			}
		}
	}
	
	if(copystr2num == 0) return true; //全部消せた(一致)場合、それはアナグラムである
	
	return false; //何らかの例外が発生した場合
}

int Anagram::array_moveup(char *str2, int id, int max)
{
	for(int i = id; i <= max; i++){
		str2[id] = str2[id + 1];
	}
	return -1;
}
