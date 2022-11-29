#include "D4.h"

D4::D4(int d4, int d3, int d2, int d1, int b2, int b1):D3(d3,d2,d1,b2,b1)
{
	this->d4 = d4;
}

void D4::show_D4()
{
	cout << "class D4:" << endl;
	show_D3();
	cout << "show_D4()" << endl
		<< "D4::d4 = " << d4 << endl << endl;
}
