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

    int a;

    cout << "Nhập một số nguyên dương: ";
    cin >> a;

    if (isPerfectNumber(num)) {
        cout << a << " là số hoàn thiện." << endl;
    }
    else {
        cout << a << " không phải là số hoàn thiện." << endl;
    }

	system("pause");
	return 0;
}
int sohoanthien(int a) {
    int sum = 1;  
    for (int i = 2; i * i <= n; ++i) {
        if (a % i == 0) {
            sum += i;
            if (i != a / i) {
                sum += a / i;
            }
        }
    }
    return sum;
}

bool ktraSohoanthien(int a) {
    if (a <= 1) return false;  
    return sumOfDivisors(n) == a;
}