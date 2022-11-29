#pragma once
#include<iostream>
#include"B1.h"
#include"B2.h"
using namespace std;
class D1 :public B1, public B2
{
private:
	int d1;
public:
	D1(int d1,int b1,int b2);
	~D1() {};
	void show_D1();
};

