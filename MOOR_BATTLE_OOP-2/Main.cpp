#include<iostream>
#include<Windows.h>
#include <conio.h>
#include"Data_Class.h"


#define SCREEN_WIDTH 100
#define SCREEN_HEIGHT 30

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition = {};

int main() {
	setlocale(LC_ALL, "Russian");
	
	COORD maxWindow = { SCREEN_WIDTH,SCREEN_HEIGHT }; //GetLargestConsoleWindowSize(out_handle);  размер самого большого возможного консольного окна
	SMALL_RECT srctWindow = { 0, 0, maxWindow.X - 1, maxWindow.Y - 1 };
	SMALL_RECT minWindow = { 0, 0,0, 0 };
	SetConsoleWindowInfo(console, true, &minWindow);
	SetConsoleScreenBufferSize(console, maxWindow);
	SetConsoleWindowInfo(console, true, &srctWindow);

	/*Player player_1(8, 7);
	Player player_2(42,7);*/

	







	//_getch();
	return 0;
}