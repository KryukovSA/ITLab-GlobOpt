#pragma once

#include <iostream>

using namespace std;
struct Trial
{
	double x;
	double z;
	int k=1;
};
Trial checkInfo(double a_, double b_, int MaxTrial_, double eps_, double m_);//a � b ������� �������
double func(double x);//����� �������