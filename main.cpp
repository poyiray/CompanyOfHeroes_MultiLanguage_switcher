#include"downloadFIle.h"

int main() {
	
	int choice = 0;

	while (1)
	{
		Download download;
		
		download.menu();

		cin >> choice;
		switch (choice)
		{
		case 1:
			download.Copy_sChinese();
			break;
		case 2:
			download.Copy_tChinese();
			break;
		case 3:
			download.English();
			break;
		default:
			exit(0);
			break;
		}
		system("cls");
	}

	system("pause");
	return 0;
}