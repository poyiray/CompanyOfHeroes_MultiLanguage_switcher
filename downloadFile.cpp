#include "downloadFIle.h"

void Download::Download_file()
{
	fstream check_ChineseTrad;
	check_ChineseTrad.open(NewFile_Path, ios::in);
	if (!check_ChineseTrad.is_open())
	{
		_mkdir("CoH\\Engine\\Locale\\ChineseTrad");
	}
	check_ChineseTrad.close();

	fstream Engine;
	Engine.open(Engine_PATH, ios::in);
	if (!Engine.is_open())
	{
		if (!S_OK == URLDownloadToFile(NULL, Engine_URL, Engine_PATH, 0, NULL))
		{
			cout << "�޷����ļ������� Engine\\Archives\\Engine.sga" << endl;
		}
	}
	Engine.close();

	fstream MainChinese;
	MainChinese.open(mainChinese_PATH, ios::in);
	if (!MainChinese.is_open())
	{
		if (!S_OK == URLDownloadToFile(NULL, mainChinese_URL, mainChinese_PATH, 0, NULL))
		{
			cout << "�޷����ļ������� Engine\\Archives\\EngineChineseTrad.sga" << endl;
		}
	}
	MainChinese.close();

	fstream sChinese;
	sChinese.open(sChinese_PATH, ios::in);
	if (!sChinese.is_open())
	{
		_mkdir("CoH\\Engine\\Locale\\SimpleChinese");

		if (S_OK == URLDownloadToFile(NULL, sChinese_URL, sChinese_PATH, 0, NULL))
		{
			cout << "�������ĺ������سɹ�" << endl;
		}
		else
		{
			cout << "�������ĺ�������ʧ��" << endl;
		}
	}
	else
	{
		cout << "�������ĺ����Ѿ�����" << endl;
	}
	sChinese.close();


	fstream tChinese;
	tChinese.open(tChinese_PATH, ios::in);
	if (!tChinese.is_open())
	{
		_mkdir("CoH\\Engine\\Locale\\tChinese");

		if (S_OK == URLDownloadToFile(NULL, tChinese_URL, tChinese_PATH, 0, NULL))
		{
			cout << "�������ĺ������سɹ�" << endl;
		}
		else
		{
			cout << "�������ĺ�������ʧ��" << endl;
		}
	}
	else
	{
		cout << "�������ĺ����Ѿ�����" << endl;
	}
	tChinese.close();


	fstream English;
	English.open(English_PATH, ios::in);
	if (!English.is_open())
	{
		_mkdir("CoH\\Engine\\Locale\\English");

		if (S_OK == URLDownloadToFile(NULL, English_URL, English_PATH, 0, NULL))
		{
			cout << "Ӣ�Ĳ������سɹ�" << endl;
		}
		else
		{
			cout << "Ӣ�Ĳ�������ʧ��" << endl;
		}
	}
	else 
	{
		cout << "Ӣ�ĺ����Ѿ�����" << endl;
	}
	English.close();

	system("pause");
	system("cls");
}

void Download::Chinese_ini()
{
	ofstream file;

	file.open("Locale.ini", ios::out);

	file << "[locale]\nlang=ChineseTrad";

	file.close();
}

void Download::Copy_sChinese()
{
	Download_file();
	menu();
	Chinese_ini();

	if (CopyFile(sChinese_PATH, NewFile_Path, false))
	{
		cout << "\n\n�ɹ��л�����������" << endl;
	}
	else
	{
		cout << "\n\n�л�ʧ��" << endl;
	}

	system("pause");
}

void Download::Copy_tChinese()
{
	Download_file();
	menu();
	Chinese_ini();

	if (CopyFile(tChinese_PATH, NewFile_Path, false))
	{
		cout << "\n\n�ɹ��л�����������" << endl;
	}
	else
	{
		cout << "\n\n�л�ʧ��" << endl;
	}

	system("pause");
}

void Download::English()
{
	Download_file();
	menu();
	ofstream edit;
	edit.open("Locale.ini", ios::out);
	edit << "[locale]\nlang=English";
	edit.close();

	cout << "\n\n�ɹ��л���Ӣ��" << endl;

	system("pause");
}

void Download::menu()
{
	cout << "**************************************************************" << endl;
	cout << "******************** Ӣ����������ת������ ********************" << endl;
	cout << "*************** ʹ�ñ�����Ҫ���������ϷĿ¼�� ***************" << endl;
	cout << "* ����ǵ�һ��ʹ�û��Զ���װ���Բ���(��������,��������,Ӣ��) *" << endl;
	cout << "******* ��װ�ٶȽ�ȡ�����������, ��ʱ����Ҫ��ȴ�һ�� *******" << endl;
	cout << "******* ������Դԭ����ȫ������onedrive, �Լ�loveray.tk *******" << endl;
	cout << "*********************** ����: Ray Chen ***********************" << endl;
	cout << "**************************************************************" << endl << endl;

	cout << "���� 1 �л�����������" << endl;
	cout << "���� 2 �л�����������" << endl;
	cout << "���� 3 �л���Ӣ��" << endl;
}
