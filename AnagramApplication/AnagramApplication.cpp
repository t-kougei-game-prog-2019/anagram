// AnagramApplication.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include "pch.h"
#include "anagram.h"

int main()
{
	const char *str1 = "CAT";
	const char *str2 = "A";
	int i = 0,j = 0;
	int stl1 = 0;

	//bool b = Anagram::is_anagram(str1, str2);

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

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー
