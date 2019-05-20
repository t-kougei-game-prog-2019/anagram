// AnagramApplication.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include "pch.h"
#include "anagram.h"

int main()
{
	const char *str1 = "CAT";
	const char *str2 = "A";

	bool b = Anagram::is_anagram(str1, str2);

}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー
