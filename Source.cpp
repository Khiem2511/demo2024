#include <iostream>

using namespace std;
int tong(int a, int b) {
return a+b;
}
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	int a,b;
	cout <<"nhap a";
	cin >>a;
	cout <<"nhap b";
	cin >>b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	if (KTSNT(a) == true)
		cout << a << " la so nguyen to!";
	else
		cout << a << " khong la so nguyen to!";

	system("pause");
	return 0;
}

bool KTSNT(int a)
{
	if (a < 2)
		return false;
	for (int i = 2; i <= a / 2; i++)
		if (a % i == 0)
			return false;
	return true;
}