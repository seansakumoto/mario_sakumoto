#include "DxLib.h"
#include "SceneManager.h"
#include"Title.h"
#include"Padinput.h"
/***********************************************
 * �v���O�����̊J�n
 ***********************************************/
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{

	double dNextTime = GetNowCount();

	SetMainWindowText("Super mario bros");

	ChangeWindowMode(TRUE);		// �E�B���h�E���[�h�ŋN��

	SetAlwaysRunFlag(true);		//��ɃA�N�e�B�u�ɂ���

	//SetGraphMode(1280, 720, 32);	//��ʃT�C�Y�̐ݒ�

	if (DxLib_Init() == -1) return -1;	// DX���C�u�����̏���������

	SetDrawScreen(DX_SCREEN_BACK);	// �`����ʂ𗠂ɂ���

	SceneManager* sceneMng;

	try
	{
		sceneMng = new SceneManager((AbstractScene*)new TITLE());
	}
	catch (const char* err)
	{
		FILE* fp = NULL;

		DATEDATA data;

		GetDateTime(&data);
		//�t�@�C���I�[�v��
		fopen_s(&fp, "ErrLog.txt", "a");
		//�G���[�f�[�^�̏�������
		fprintf_s(fp, "%02d�N %02d�� %02d�� %02d�� %02d�� %02d�b : %s������܂���B\n", data.Year, data.Mon, data.Day, data.Hour, data.Min, data.Sec, err);

		return 0;
	}

	// �Q�[�����[�v
	while ((ProcessMessage() == 0) && (sceneMng->Update() != nullptr))
	{

		ClearDrawScreen();		// ��ʂ̏�����
		PAD_INPUT::UpdateKey();
		sceneMng->Draw();

		ScreenFlip();			// ����ʂ̓��e��\��ʂɔ��f

		//�t���[�����[�g�̐ݒ�
		dNextTime += 1.0 / 60.0 * 1000.0;

		if (dNextTime > GetNowCount())
		{
			WaitTimer(static_cast<int>(dNextTime) - GetNowCount());
		}
		else { dNextTime = GetNowCount(); }		//�␳
	}

	return 0;
}