#include<iostream>
#include"sdt.h"

using namespace std;
//��� ������� ���������
int main()
{
	int a, b;
	cout << "inpute first digit: ";
	cin >> a;
	cout << "inpute second digit: ";
	cin >> b;
	cout << "Result: " << a + b;
	cout << "\nYour digits: " << a << " and " << b;
	cout << "\nResult(minus): " << a - b;
	cout << "\nResult(*): " << a * b;
	cout << "\nResult(/): " << a / b;
}