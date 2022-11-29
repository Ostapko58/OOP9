#include "D3.h"

D3::D3(int d3, int d2, int d1, int b2, int b1) : D2(d2), D1(d1,b1,b2)
{
	this->d3 = d3;
}

void D3::show_D3()
{
	cout << "class D3:" << endl;
	show_D1();
	show_D2();
	cout << "show_D3()" << endl
		<< "D3::d3 = " << d3 << endl << endl;
}
