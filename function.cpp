#include"function.h"

void nhanVien::setName(string n) {
	name = n;
}
void nhanVien::setDay(unsigned int d) {
	day = d;
}
void nhanVien::setMaSo() {
	maSo = to_string(day) + name;
}
void nhanVien::setChucDanh() {
	if (day < 365)
		chucDanh = "Nhan vien";
	else if (day >= 365 && day < 730)
		chucDanh = "Quan ly";
	else if (day >= 730 && day < 1460)
		chucDanh = "Truong phong";
	else
		chucDanh = "Truong ban quan ly";
}
void nhanVien::setHeSo() {
	if (chucDanh == "Nhan vien")
		heSo = 1.0;
	else if (chucDanh == "Quan ly")
		heSo = 1.5;
	else if (chucDanh == "Truong phong")
		heSo = 2.25;
	else
		heSo = 4.0;
}
string nhanVien::getName() {
	return name;
}
unsigned int nhanVien::getDay() {
	return day;
}
string nhanVien::getMaSo() {
	return maSo;
}
string nhanVien::getChucDanh() {
	return chucDanh;
}
float nhanVien::getHeSo() {
	return heSo;
}
nhanVien::nhanVien() {
	name = "";
	day = 0;
	maSo = "";
	chucDanh = "";
	heSo = 0.0;
}
nhanVien::nhanVien(string n, unsigned int d, string m, string c, float h) {
	name = n;
	day = d;
	maSo = m;
	chucDanh = c;
	heSo = h;
}
nhanVien::nhanVien(string n, unsigned int d) {
	name = n;
	day = d;
	setMaSo();
	setChucDanh();
	setHeSo();
}
nhanVien::nhanVien(const nhanVien& a) {
	chucDanh = a.chucDanh;
	heSo = a.heSo;
	day = a.day;
	name = "";
	maSo = "";
}
nhanVien::~nhanVien() {
}
istream& operator>>(istream& in, nhanVien& temp) {
	cout << "Nhap ten: ";
	getline(in, temp.name);
	cout << "Nhap so ngay lam viec: ";
	in >> temp.day;
	temp.setMaSo();
	temp.setChucDanh();
	temp.setHeSo();
	return in;
}
ostream& operator<<(ostream& out, nhanVien& temp) {
	out << "Ten: " << temp.name << endl;
	out << "So ngay lam viec: " << temp.day << endl;
	out << "Ma so: " << temp.maSo << endl;
	out << "Chuc danh: " << temp.chucDanh << endl;
	out << "He so luong: " << temp.heSo << endl;
	return out;
}