#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b){
	return a - b;
}
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	int a,b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	cout<<"Hieu la "<<hieu(a,b)<<endl;
	if (sohoanthien(a)) {
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
	for (int i = 2; i * i <= a; ++i) {
		if (a % i == 0) {
			sum += i;
			if (i != a / i) {  
				sum += a / i;
			}
		}
	}
	return sum;
}