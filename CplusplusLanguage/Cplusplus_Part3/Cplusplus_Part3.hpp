#pragma once
#include <iostream>		// C++�W���̃C���N���[�h�t�@�C��


namespace A
{
	int a = 4;
	void PrintFun()
	{
		std::cout << a << "���O���A��PrintFun�ł��B" << std::endl;
	}
}



namespace B
{
	int a = 1;
	void PrintFun()
	{
		std::cout << a << "���O���B��PrintFun�ł��B" << std::endl;
	}
}



namespace C
{
	int a = 2;
	void PrintFun()
	{
		std::cout << C::a << "���O���C��PrintFun�ł��B" << std::endl;
	}

	namespace D
	{
		int a = 3;
		void PrintFun()
		{
			std::cout << a << "���O���C�̖��O���D��PrintFun�ł��B" << std::endl;
		}
	}

	namespace
	{
		int a = 2;
		void PrintFun()
		{
			std::cout << a << "���O���C�̋󖼑O��Ԃ�PrintFun�ł��B" << std::endl;
		}
	}
}
