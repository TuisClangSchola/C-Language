// Part5: �I�[�o�[���[�h

#include "ClassA.hpp"
#include <iostream>


// �v���O�����R�[�h�̑�{
int main()
{
	/*
	����̓I�[�o�[���[�h�ɂ��Đ������܂��B
	*/

	/*
	�N���X�̐����͕ʂ̃t�@�C��cpp/hpp�ɂč쐬�����̂ŁA��������L�q������
	�����ł̎��s�̎d�������Ă��������B
	*/

	// �N���X�̐���
	ClassA* p_a = new ClassA();


	/// �o��--------------------------
	p_a->Draw();

	std::cout << std::endl;

	p_a->Draw("tarou");

	std::cout << std::endl;

	p_a->Draw(100, "mike", false);


	// ���
	delete p_a;


	/*
	�I�[�o�[���[�h�Ƃ͊ȒP�Ɍ����΁A�����̈قȂ铯�����������֐��̂��Ƃł��B

	���p���l�Ƃ��Ă͈������قȂ邾���œ����֐����𗘗p�ł��邱�Ƃł��B
	*/

	return 0;	// ����I��
}