#include <iostream>
#include <string>
#include <vector>
#include "Data.hpp"

int main()
{
	Data d1(1,1,2016);
	
	for(int i = 0; i < 367;i++)
	{
		d1.printData();
		d1.avancarDia();
	}

	Data * d2 = new Data(0,0,2005);

	for(int i = 0; i < 366;i++)
	{
		d2->printData();
		d2->avancarDia();
	}

	delete d2;
}
