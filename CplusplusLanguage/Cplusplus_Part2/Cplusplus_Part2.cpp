// Part2: string

#include <iostream>		// C++�W���̃C���N���[�h�t�@�C��
#include <string>		// ����g��������C���N���[�h


// �v���O�����R�[�h�̑�{
int main()
{
	/*
	�����string�̎g������������܂��B
	string�Ƃ͂킩��₷��������char[]���֗��ɂȂ������̂ł��B
	*/
	
	// �ǂ����������Ƃ��ł��邩�͍\�������Ċo���Ă��������B

	std::string str = "";										// ������

	str = "����AAAAA";											// ���g�ݒ�(A��5��)

	std::cout << str << std::endl;								// �o��


	std::cout << str.c_str() << std::endl;						// char�^�Ƃ��ďo��

	str.operator=("����AAAAA");									// ���g�Đݒ�(A��5��)

	std::cout << str << std::endl;								// �o��


	std::cout << str.size() << std::endl;						// �������o��


	std::cout << str.length() << std::endl;						// �������o��


	str.append("�ǉ�");											// ������ǉ�

	std::cout << str << std::endl;								// �o��


	str.operator+=("�ǉ�");										// ������ǉ�

	std::cout << str << std::endl;								// �o��


	str.erase(str.begin(), str.begin() + 2);					// �ŏ�����2�T�C�Y�폜

	std::cout << str << std::endl;								// �o��


	str.erase(str.end() - 2, str.end());						// �I��肩��2�T�C�Y�폜

	std::cout << str << std::endl;								// �o��


	std::cout << str.find("A") << std::endl;					// �u�́v�̈ʒu��(�O����)�T������


	std::cout << str.find_first_of("A") << std::endl;			// �u�́v�̈ʒu��O����T������


	std::cout << str.find_last_of("A") << std::endl;			// �uA�v�̈ʒu����납��T��


	str.clear();												// �S�폜


	std::cout << str << "�폜���ꂽ���牽���o�Ȃ���" << std::endl;		// �o��


	return 0;	// ����I��
}