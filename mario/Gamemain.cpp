#include "Gamemain.h"
#include "DxLib.h"
#include"Padinput.h"
GAMEMAIN::GAMEMAIN()
{


}

GAMEMAIN::~GAMEMAIN()
{

}

AbstractScene* GAMEMAIN::Update()
{


	return this;
}

void GAMEMAIN::Draw() const
{
	DrawString(0, 0, "Gamemain", 0xffffff, TRUE);
}

