#pragma once
#include <iostream>
#include <string>

class ClassA
{
public:
	/// �����o�ϐ�---------
	
	// ID
	int ID;

	// ���O
	std::string name;

	// �j���ǂ���
	bool male;


	/// �����o�֐�--------
	
	// �R���X�g���N�^
	ClassA();

	// �f�X�g���N�^
	~ClassA();

	// �����\���݂̂��s���֐�
	void Draw();

	// ���O��ς��Ă���\�����s���֐�(�I�[�o�[���[�h
	void Draw(std::string changeName);

	// �S�Ă����������Ă���\�����s���֐�
	void Draw(int ID, std::string name, bool male);
};

