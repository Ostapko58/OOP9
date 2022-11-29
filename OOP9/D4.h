#pragma once
#include<iostream>
#include"D3.h"
using namespace std;
class D4 : public D3
{
private:
	int d4;
public:
	D4(int d4,int d3, int d2, int d1, int b2, int b1);
	~D4() {};
	void show_D4();
};

