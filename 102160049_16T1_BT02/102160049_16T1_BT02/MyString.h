#pragma once
#include<iostream>
#include<math.h>
using namespace  std;
class MyString
{
public:
	char* str;
	int length;
public:
	MyString();
	MyString(const char*);
	int strLen(const char*);
	void strCpy(char*, const char*);
	int size();
	void Show();
	friend istream & operator>>(istream& , MyString&);
	friend ostream & operator<<(ostream& , MyString&);
	MyString operator+ (const MyString&);
	MyString operator=(char*);
	bool operator==(const MyString);
	bool operator>=(const MyString);
	bool operator<=(const MyString);
	bool operator<(const MyString);
	bool operator>(const MyString);
	char& operator[](int i);

	~MyString();
};

