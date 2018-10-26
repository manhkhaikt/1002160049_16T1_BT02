#include<iostream>
#include "MyString.h"
using namespace std;


MyString::MyString()
{
	length = 0;
	this->str = new char[1];
	this->str = '\0';
}

MyString::MyString(const char* p)
{
	this->length = strLen(p);
	this->str = new char[length];
	MyString::strCpy(str, p);
}



int MyString::strLen(const char* A) {
	int n=0;
	while (A[n] != '\0')
	{
		n++;
	}
	return n;
}

void MyString::strCpy(char* A, const char* B)
{
	for (int i = 0; i < strLen(B); i++) {
		A[i] = B[i];
	}
}

int MyString::size()
{
	return this->length;
}

void MyString::Show()
{
	for (int i = 0; i < this->length; i++) {
		cout << this->str[i];
	}
	cout << endl;
}

MyString::~MyString()
{
}

istream & operator>>(istream & i, MyString & p)
{
	char *arr = new char[100];
	delete[] p.str;
	i.ignore(0);
	i.getline(arr, 100);
	p.length = p.strLen(arr);
	p.str = arr;
	return i;
}

ostream & operator<<(ostream & o, MyString & p)
{
	int n = 0;
	for (int i = 0; i < p.length; i++) {
		o << p.str[i];
	}
	o << endl;
	return o;
}

MyString MyString::operator+(const MyString & p)
{
	MyString a;
	a.length = length + p.length;
	char *arr = new char[a.length];
	for (int i = 0; i < length; i++)
	{
		arr[i] = str[i];
	}
	for (int j = length; j < a.length; j++)
	{
		arr[j] = p.str[j-length];
	}
	a.str = arr;
	return a;
}



bool MyString::operator==(MyString p)
{
	int count = 0;
	while (str[count] == p.str[count] && str[count] != '\0' && p.str[count] != '0')
	{
		count++;
	}
	if (str[count] == p.str[count] && strLen(str) == strLen(p.str)) {
		return true;
	}
	return false;
}

bool MyString::operator>=(const MyString p)
{
	int count = 0;
	while (str[count] == p.str[count] && str[count] != '\0' && p.str[count] != '0')
	{
		count++;
	}
	if (str[count] < p.str[count]) {
		return true;
	}
	else if (str[count] == p.str[count]&& strLen(str)==strLen(p.str))
	{
		return true;
	}
	else
		return false;
}bool MyString::operator<=(const MyString p)
{
	int count = 0;
	while (str[count] == p.str[count] && str[count] != '\0' && p.str[count] != '0')
	{
		count++;
	}
	if (str[count] > p.str[count]) {
		return true;
	}
	else if (str[count] == p.str[count]&& strLen(str)==strLen(p.str))
	{
		return true;
	}
	else
		return false;
}

bool MyString::operator>(const MyString p)
{
	int count = 0;
	while (str[count] == p.str[count] && str[count] != '\0' && p.str[count] != '0')
	{
		count++;
	}
	if (str[count] < p.str[count]) {
		return true;
	}
	else
		return false;

}

bool MyString::operator<(const MyString p)
{
	int count = 0;
	while (str[count] == p.str[count] && str[count] != '\0' && p.str[count] != '0')
	{
		count++;
	}
	if (str[count] > p.str[count]) {
		return true;
	}
	else
		return false;

}

char& MyString::operator[](int i)
{
	if (i >= length) {
		cout << "nhap qua do dai" << endl;
		system("pause");
		exit(0);
	}
	else
		return str[i];
}

MyString MyString::operator=(char* p)
{
	delete[] str;
	length = strLen(p);
	str = new char[strLen(p) + 1];
	strCpy(str, p);
	return str;
}
