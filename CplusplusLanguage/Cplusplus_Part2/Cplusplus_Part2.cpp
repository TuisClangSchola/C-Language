// Part2: string

#include <iostream>		// C++標準のインクルードファイル
#include <string>		// 今回使う文字列インクルード


// プログラムコードの大本
int main()
{
	/*
	今回はstringの使い方を説明します。
	stringとはわかりやすく言えばchar[]が便利になったものです。
	*/
	
	// どういったことができるかは構文を見て覚えてください。

	std::string str = "";										// 初期化

	str = "私がAAAAA";											// 中身設定(Aは5個)

	std::cout << str << std::endl;								// 出力


	std::cout << str.c_str() << std::endl;						// char型として出力

	str.operator=("私はAAAAA");									// 中身再設定(Aは5個)

	std::cout << str << std::endl;								// 出力


	std::cout << str.size() << std::endl;						// 文字数出力


	std::cout << str.length() << std::endl;						// 文字数出力


	str.append("追加");											// 文字列追加

	std::cout << str << std::endl;								// 出力


	str.operator+=("追加");										// 文字列追加

	std::cout << str << std::endl;								// 出力


	str.erase(str.begin(), str.begin() + 2);					// 最初から2サイズ削除

	std::cout << str << std::endl;								// 出力


	str.erase(str.end() - 2, str.end());						// 終わりから2サイズ削除

	std::cout << str << std::endl;								// 出力


	std::cout << str.find("A") << std::endl;					// 「は」の位置を(前から)探索する


	std::cout << str.find_first_of("A") << std::endl;			// 「は」の位置を前から探索する


	std::cout << str.find_last_of("A") << std::endl;			// 「A」の位置を後ろから探索


	str.clear();												// 全削除


	std::cout << str << "削除されたから何も出ないよ" << std::endl;		// 出力


	return 0;	// 正常終了
}