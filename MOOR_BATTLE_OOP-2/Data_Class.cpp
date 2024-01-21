#include "Data_Class.h"
#include<iostream>
#include<Windows.h>
#include <conio.h>

void DataInput::gotoxy(int x, int y)
{
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console, CursorPosition);
	
}
