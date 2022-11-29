#pragma once
#include<iostream>
#include"D1.h"
#include"D2.h"
class D3 : public D1, public D2
{
private:
	int d3;
public:
	D3(int d3,int d2,int d1,int b2,int b1);
	~D3() {};
	void show_D3();
};

