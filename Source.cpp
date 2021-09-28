/*Cho mảng các số nguyên n phần tử được nhập từ bàn phím (mảng này được cấp phát động và quản lý thông qua con trỏ arr), 
bạn hãy viết chương trình tính tổng của các phần tử trong mảng và hiển thị ra màn hình:*/
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += a[i];
	}
	cout << sum;
	delete[] a;
	return 0;
}