#pragma once
#include"AbstractScene.h"
class GAMEMAIN :
	public AbstractScene
{


public:

	//�R���X�g���N�^
	GAMEMAIN();
	//�f�X�g���N�^
	~GAMEMAIN();

	//�`��ȊO�̍X�V�����s
	AbstractScene* Update() override;

	//�`��Ɋւ��邱�Ƃ�����
	void Draw() const override;

private:

};

