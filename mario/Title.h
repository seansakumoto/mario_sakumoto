#pragma once
#pragma once
#include"AbstractScene.h"
class TITLE :
	public AbstractScene
{


public:

	//�R���X�g���N�^
	TITLE();
	//�f�X�g���N�^
	~TITLE();

	//�`��ȊO�̍X�V�����s
	AbstractScene* Update() override;

	//�`��Ɋւ��邱�Ƃ�����
	void Draw() const override;

private:

	int titleimage;
};

