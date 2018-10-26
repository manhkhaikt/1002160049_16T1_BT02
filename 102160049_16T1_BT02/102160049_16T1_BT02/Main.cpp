#include<iostream>
#include"MyString.h"
using namespace std;

int main() {
	MyString a;
	MyString b;
	MyString c;
	MyString d, e("abc");
	MyString f;
	bool n=0;

	cout << "nhap chuoi a: " << endl;
	cin >> a;
	cout << "nhap chuoi b: " << endl;
	cin >> b;
	cout << "chuoi nhan duoc: ";
	cout << "a = " << a << endl << "b = " << b << endl;
	c = e;
	c = (a + b);
	cout << "gan c = a + b :\nc = " << c << endl;

	d = e;
	cout << "gan chuoi d = \"abc\"" << d << endl;

	cout << "gan f = a: " << endl;
	f = a;
	cout<<"chuoi f = "<<f<<endl;

	cout << "Nhap 2 chuoi de so sanh:" << endl;
	MyString str1, str2;
	cout << "nhap chuoi 1: "; cin >> str1;
	cout << "nhap chuoi 2: "; cin >> str2;

	cout << "1. so sanh hon >"
		<< "\n2. so sanh bang =="
		<< "\n3. so sanh kem >"
		<< "\n4. so sanh lon hon bang >="
		<< "\n5. so sanh be hon bang <="
		<< "\nnhap lua chon: " << endl;
	int count;
	cin >> count;
	switch (count)
	{
	case 1:
		n = str1 > str2;
		cout << "1 la true 2 la false: " << n << endl;
		break;
	case 2:
		n = str1 == str2;
		cout << "1 la true 2 la false: " << n << endl;
		break;
	case 3:
		n = str1 < str2;
		cout << "1 la true 2 la false: " << n << endl;
		break;
	case 4:
		n = str1 >= str2;
		cout << "1 la true 2 la false: " << n << endl;
		break;
	case 5:
		n = str1 <= str2;
		cout << "1 la true 2 la false: " << n << endl;
		break;
	default:
		break;
	}

	cout << endl;

	system("pause");
	return 0;
}