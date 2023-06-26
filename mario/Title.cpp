#include "Title.h"
#include "DxLib.h"
#include"Padinput.h"
#include"Gamemain.h"
TITLE::TITLE()
{
	titleimage = LoadGraph("1-1image/title.png");

}

TITLE::~TITLE()
{

}

AbstractScene* TITLE::Update()
{
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_A)) {
		return new GAMEMAIN();
	}
	return this;
}

void TITLE::Draw() const
{
	DrawString(0, 0, "title", 0xffffff, TRUE);
	DrawGraph(0, 0, titleimage, 0);
}

