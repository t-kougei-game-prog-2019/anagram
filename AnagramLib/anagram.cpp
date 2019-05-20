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
	int i = 0,j = 0;
	int stl1 = 0;

	//文字数が同じか確かめる
	while (str1[i] != '\0') {
		i++;
	}

	stl1 = i;
	i = 0;

	while (str2[i] != '\0') {
		i++;
	}

	
	if (stl1 == i) {
		for ( j = 0; j < stl1; j++) {
			for (int q = 0; q < i; q++) {
				if (str1[j] == str2[q]) {
					break;
				}
				if (q == i) {
					return false;
				}
			}
		}
		if (j == stl1) {
			return true;
		}
	}
	else if(stl1 != i){
		return false;
	}

}
