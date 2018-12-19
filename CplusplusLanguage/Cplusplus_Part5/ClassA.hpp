#pragma once
#include <iostream>
#include <string>

class ClassA
{
public:
	/// メンバ変数---------
	
	// ID
	int ID;

	// 名前
	std::string name;

	// 男かどうか
	bool male;


	/// メンバ関数--------
	
	// コンストラクタ
	ClassA();

	// デストラクタ
	~ClassA();

	// ただ表示のみを行う関数
	void Draw();

	// 名前を変えてから表示を行う関数(オーバーロード
	void Draw(std::string changeName);

	// 全てを書き換えてから表示を行う関数
	void Draw(int ID, std::string name, bool male);
};

