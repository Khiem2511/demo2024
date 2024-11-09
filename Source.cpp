#include <iostream>

using namespace std;
int tong(int a, int b) {
return a+b;
}
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
bool is_Prime(int a) {
	if (a <= 1) return false;
	if (n <= 3) return true;
	if (n % 2 == 0 || n % 3 == 0)
		return false;
	for (int i = 5; i * i <= n; i+=6) {
		if (n % i == 0 || n % (i + 2) == 0)
			return false;
	}
	return true;
}
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
	bool is_prime = is_Prime(a);
	if (is_prime)
		cout << "La so nguyen to" << endl;
	else
		cout << "Khong la so nguyen to" << endl;

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