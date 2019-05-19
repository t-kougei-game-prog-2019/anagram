// AnagramApplication.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include "pch.h"
#include "anagram.h"

//using namespace UnitTest1;

int main()
{
	const char *str1 = "CAT";
	const char *str2 = "A";

	const char *str3 = "BBB";
	const char *str4 = "BBB";

	const char *str5 = "ABC";
	const char *str6 = "BCA";

	const char *str7 = "CAD";
	const char *str8 = "ADD";

	const char *str9 = "CAT";
	const char *str10 = "AAAAAAA";

	const char *str11 = "CAF";
	const char *str12 = "ADE";




	bool b1 = Anagram::is_anagram(str1, str2);
	bool b2 = Anagram::is_anagram(str3, str4);
	bool b3 = Anagram::is_anagram(str5, str6);
	bool b4 = Anagram::is_anagram(str7, str8);
	bool b5 = Anagram::is_anagram(str9, str10);
	bool b6 = Anagram::is_anagram(str11, str12);
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー
