#pragma once
#include<iostream>
#include <string>
using namespace std;
class nhanVien
{
	string name;
	unsigned int day;
	string maSo;
	string chucDanh;
	float heSo;
public:
	nhanVien();
	nhanVien(string name, unsigned int day, string maSo, string chucDanh, float heSo);
	nhanVien(string name, unsigned int day);
	nhanVien(const nhanVien&);
	~nhanVien();
	void setName(string);
	void setDay(unsigned int);
	void setMaSo();
	void setChucDanh();
	void setHeSo();
	string getName();
	unsigned int getDay();
	string getMaSo();
	string getChucDanh();
	float getHeSo();
	friend istream& operator>>(istream& in, nhanVien& temp);
	friend ostream& operator<<(ostream& out, nhanVien& temp);
};
istream& operator>>(istream& in, nhanVien& temp);
ostream& operator<<(ostream& out, nhanVien& temp);