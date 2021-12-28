#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "MyString.h"

MyString::MyString(int s) : len(0), bufSize(s) 
{
	buf = new char[s + 1];
	buf[0] = '\0';
}

MyString::MyString() : len(0), bufSize(0)	// ������
{
	buf = new char[1];
	buf[0] = '\0';
}

MyString::MyString(const char* str)			// ������
{
	len = bufSize = strlen(str);			// ���ڿ� ����
	buf = new char[len + 1];				// ���ڿ� ������� �Ҵ�
	strcpy(buf, str);						// ���ڿ� ����
}

// ���� ������
MyString::MyString(const MyString& mstr) : len(mstr.len), bufSize(mstr.len)
{
	buf = new char[len + 1];
	strcpy(buf, mstr.buf);
}

// �̵� ������
MyString::MyString(MyString&& mstr) : len(mstr.len), bufSize(mstr.bufSize), buf(mstr.buf)
{
	mstr.buf = nullptr;
}

MyString::~MyString()						// �Ҹ���
{
	delete[] buf;
}

int MyString::length() const				// ���ڿ� ���� ��ȯ �޼ҵ�
{
	return len;
}

// ���� ������
MyString& MyString::operator=(const MyString& mstr)
{
	if (bufSize < mstr.len)			// ���ڿ� ������ �ʿ䷮���� ������
	{
		delete[] buf;				// ���� ���� ��ȯ
		len = bufSize = mstr.len;	// ���ο� ���ڿ��� ����
		buf = new char[len + 1];	// ���ο� ���� �Ҵ�
	}
	else							// �׷��� ������
		len = mstr.len;				// ���ڿ��� ���̸� ����
	strcpy(buf, mstr.buf);
	return *this;
}

// �̵� ������
MyString& MyString::operator=(MyString&& mstr)
{
	delete[] buf;
	len = mstr.len;
	bufSize = mstr.bufSize;
	buf = mstr.buf;
	mstr.buf = nullptr;
	return *this;
}

// ���ڿ� ���� ������
MyString MyString::operator+(const MyString& mstr) const
{
	MyString tmstr(len + mstr.len);
	strcpy(tmstr.buf, buf);
	strcpy(tmstr.buf + len, mstr.buf);
	return tmstr;
}

MyString& MyString::operator+=(const MyString& mstr)
{
	if (bufSize < len + mstr.len)
	{
		bufSize = len += mstr.len;
		char* tbuf = new char[len + 1];
		strcpy(tbuf, buf);
		delete[] buf;
		buf = tbuf;
	}
	strcat(buf, mstr.buf);
	return *this;
}

// ���迬���� ==
bool MyString::operator==(const MyString& mstr) const
{
	return !strcmp(buf, mstr.buf);
}

// ���迬���� >
bool MyString::operator>(const MyString& mstr) const
{
	return strcmp(buf, mstr.buf) > 0;
}

// ���迬���� <
bool MyString::operator<(const MyString& mstr) const
{
	return strcmp(buf, mstr.buf) < 0;
}

char& MyString::operator[](int i)
{
	return buf[i];
}

char MyString::operator[](int i) const
{
	return buf[i];
}