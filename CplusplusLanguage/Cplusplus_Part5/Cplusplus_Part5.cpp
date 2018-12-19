// Part5: オーバーロード

#include "ClassA.hpp"
#include <iostream>


// プログラムコードの大本
int main()
{
	/*
	今回はオーバーロードについて説明します。
	*/

	/*
	クラスの生成は別のファイルcpp/hppにて作成したので、そこから記述を見て
	ここでの実行の仕方を見てください。
	*/

	// クラスの生成
	ClassA* p_a = new ClassA();


	/// 出力--------------------------
	p_a->Draw();

	std::cout << std::endl;

	p_a->Draw("tarou");

	std::cout << std::endl;

	p_a->Draw(100, "mike", false);


	// 解放
	delete p_a;


	/*
	オーバーロードとは簡単に言えば、引数の異なる同名を持った関数のことです。

	利用価値としては引数が異なるだけで同じ関数名を利用できることです。
	*/

	return 0;	// 正常終了
}