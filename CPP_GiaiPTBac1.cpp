#include <iostream>
using namespace std;
int main() {
	cout << "Giai phuong trinh bac 1: ax + b = 0";
	cout << "\nNhap a:";
	int a;
	cin >> a;
	int b;
	cout << "Nhap b:";
	cin >> b;
	double x;
	if (a == 0) {
		if (b == 0) {
			cout << "Phuong trinh dung voi moi x";
		}
		else {
			cout << "Phuong trinh vo nghiem";
		}
	}
	else {
		cout << "x= -b/a";
	}
	return 0;
}