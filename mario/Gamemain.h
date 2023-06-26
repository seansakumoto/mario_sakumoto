#pragma once
#include"AbstractScene.h"
class GAMEMAIN :
	public AbstractScene
{


public:

	//コンストラクタ
	GAMEMAIN();
	//デストラクタ
	~GAMEMAIN();

	//描画以外の更新を実行
	AbstractScene* Update() override;

	//描画に関することを実装
	void Draw() const override;

private:

};

