#pragma once
#pragma once
#include"AbstractScene.h"
class TITLE :
	public AbstractScene
{


public:

	//コンストラクタ
	TITLE();
	//デストラクタ
	~TITLE();

	//描画以外の更新を実行
	AbstractScene* Update() override;

	//描画に関することを実装
	void Draw() const override;

private:

	int titleimage;
};

