#include<iostream>
#include<math.h>
#include "metodLoman.h"
//#include <string> 
using namespace std;
int main()
{
	Trial temp;
	setlocale(LC_ALL, "Russian");


	int MaxTrial;//���-�� ����(��� �����)
	cout << "������� ���������� ����"  << "\n";
	cin >> MaxTrial;
	double a, b;
	cout << "������� ���������� �� � �� b" << "\n";
	cin >> a >> b;
	double Epsilon;
	cout << "������� ��������" << "\n";
	cin >> Epsilon;
	double M;
	cout << "������� ��������" << "\n";
	cin >> M;

	temp = checkInfo( a,  b,  MaxTrial, Epsilon, M);

	cout << " (x =  " << temp.x << " ; y = " << temp.z << " ) " <<  "\n";
	cout << "���������� ���������    " << temp.k << "\n";
	
	system("pause");
	return 0;
	

}