#pragma once
#include"Data_Class.h"

class Menu :public DataInput {
private:
	bool PRK1 = false;
	bool PRK2 = false;
	bool InCoord1 = true;
	bool InCoord2 = false;

public:

	void inputData();

};
