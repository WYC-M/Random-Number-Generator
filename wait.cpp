# include <iostream>
# include <windows.h>

//����һ���İ��Ľ�����(

void wait(int waittime)//���ض���,waittimeΪִ�ж�������
{
	for (int i = 0; i < waittime; i++)
	{
		std::cout << "-";
		std::cout << "\b";
		Sleep(500);
		std::cout << "\\";
		std::cout << "\b";
		Sleep(500);
		std::cout << "|";
		std::cout << "\b";
		Sleep(500);
		std::cout << "/";
		std::cout << "\b";
		Sleep(500);
		std::cout << "-";
		std::cout << "\b";
		Sleep(500);
		std::cout << "\\";
		std::cout << "\b";
		Sleep(500);
		std::cout << "|";
		std::cout << "\b";
		Sleep(500);
		std::cout << "/";
		std::cout << "\b";
		Sleep(500);
	}
	std::cout << "\b";
	std::cout << " ";

	return;
}