#include "Menu.h"
#include<iostream>
#include <conio.h>

void Menu::inputData()
{
	system("cls");
	gotoxy(10, 5); std::cout << " -------------------------- ";
	gotoxy(10, 6);  std::cout << " |        Player 1         | ";
	gotoxy(10, 7);  std::cout << " --------------------------";
	gotoxy(10, 9);  std::cout << "    расстановка кораблей   ";
	gotoxy(10, 10); std::cout << "1. Автоматическая";
	gotoxy(10, 11); std::cout << "2. Ручная";
	gotoxy(10, 13);  std::cout << "Select option: ";
	char ch = _getche();

	if (ch == '1')
		PRK1 = false;
	else
		if (ch == '2')
			PRK1 = true;
	system("cls");
	gotoxy(10, 5); std::cout << " -------------------------- ";
	gotoxy(10, 6);  std::cout << " |        Player 2         | ";
	gotoxy(10, 7);  std::cout << " --------------------------";
	gotoxy(10, 9);  std::cout << "    Выбор противника   ";
	gotoxy(10, 10); std::cout << "1. Компьютер";
	gotoxy(10, 11); std::cout << "2. Игрок";
	gotoxy(10, 13);  std::cout << "Select option: ";
	ch = _getche();

	if (ch == '1')
		PRK2 = false, InCoord2 = false;
	else
		if (ch == '2') {
			gotoxy(10, 9);  std::cout << "    расстановка кораблей   ";
			gotoxy(10, 10); std::cout << "1. Автоматическая";
			gotoxy(10, 11); std::cout << "2. Ручная";
			ch = _getche();
			if (ch == '1')
				PRK2 = false;
			else
				if (ch == '2')
					PRK2 = true;
		}
	system("cls");
}
