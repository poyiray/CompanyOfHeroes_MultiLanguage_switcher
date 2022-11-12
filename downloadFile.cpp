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
			cout << "无法将文件下载至 Engine\\Archives\\Engine.sga" << endl;
		}
	}
	Engine.close();

	fstream MainChinese;
	MainChinese.open(mainChinese_PATH, ios::in);
	if (!MainChinese.is_open())
	{
		if (!S_OK == URLDownloadToFile(NULL, mainChinese_URL, mainChinese_PATH, 0, NULL))
		{
			cout << "无法将文件下载至 Engine\\Archives\\EngineChineseTrad.sga" << endl;
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
			cout << "简体中文汉化下载成功" << endl;
		}
		else
		{
			cout << "简体中文汉化下载失败" << endl;
		}
	}
	else
	{
		cout << "简体中文汉化已经存在" << endl;
	}
	sChinese.close();


	fstream tChinese;
	tChinese.open(tChinese_PATH, ios::in);
	if (!tChinese.is_open())
	{
		_mkdir("CoH\\Engine\\Locale\\tChinese");

		if (S_OK == URLDownloadToFile(NULL, tChinese_URL, tChinese_PATH, 0, NULL))
		{
			cout << "繁体中文汉化下载成功" << endl;
		}
		else
		{
			cout << "繁体中文汉化下载失败" << endl;
		}
	}
	else
	{
		cout << "繁体中文汉化已经存在" << endl;
	}
	tChinese.close();


	fstream English;
	English.open(English_PATH, ios::in);
	if (!English.is_open())
	{
		_mkdir("CoH\\Engine\\Locale\\English");

		if (S_OK == URLDownloadToFile(NULL, English_URL, English_PATH, 0, NULL))
		{
			cout << "英文补丁下载成功" << endl;
		}
		else
		{
			cout << "英文补丁下载失败" << endl;
		}
	}
	else 
	{
		cout << "英文汉化已经存在" << endl;
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
		cout << "\n\n成功切换至简体中文" << endl;
	}
	else
	{
		cout << "\n\n切换失败" << endl;
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
		cout << "\n\n成功切换至繁体中文" << endl;
	}
	else
	{
		cout << "\n\n切换失败" << endl;
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

	cout << "\n\n成功切换至英文" << endl;

	system("pause");
}

void Download::menu()
{
	cout << "**************************************************************" << endl;
	cout << "******************** 英雄连多语言转换工具 ********************" << endl;
	cout << "*************** 使用本补需要被存放在游戏目录下 ***************" << endl;
	cout << "* 如果是第一次使用会自动安装语言补丁(简体中文,繁体中文,英文) *" << endl;
	cout << "******* 安装速度将取决于你的网速, 有时候需要多等待一会 *******" << endl;
	cout << "******* 汉化资源原链接全部来自onedrive, 以及loveray.tk *******" << endl;
	cout << "*********************** 作者: Ray Chen ***********************" << endl;
	cout << "**************************************************************" << endl << endl;

	cout << "输入 1 切换至简体中文" << endl;
	cout << "输入 2 切换至繁体中文" << endl;
	cout << "输入 3 切换至英文" << endl;
}
