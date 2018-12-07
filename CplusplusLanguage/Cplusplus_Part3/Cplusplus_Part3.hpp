#pragma once
#include <iostream>		// C++標準のインクルードファイル


namespace A
{
	int a = 4;
	void PrintFun()
	{
		std::cout << a << "名前空間AのPrintFunです。" << std::endl;
	}
}



namespace B
{
	int a = 1;
	void PrintFun()
	{
		std::cout << a << "名前空間BのPrintFunです。" << std::endl;
	}
}



namespace C
{
	int a = 2;
	void PrintFun()
	{
		std::cout << C::a << "名前空間CのPrintFunです。" << std::endl;
	}

	namespace D
	{
		int a = 3;
		void PrintFun()
		{
			std::cout << a << "名前空間Cの名前空間DのPrintFunです。" << std::endl;
		}
	}

	namespace
	{
		int a = 2;
		void PrintFun()
		{
			std::cout << a << "名前空間Cの空名前空間のPrintFunです。" << std::endl;
		}
	}
}
