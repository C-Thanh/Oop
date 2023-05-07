#include <iostream>
#include"function.h"

using namespace std;

int main() {
	nhanVien a;
	cin >> a;
	cout << "Thong tin nhan vien vua nhap:\n";
	cout << a;
	cout << "Chon phuong thuc tao lap:\n";
	cout << "1/ Tao lap voi 5 tham so:\n";
	cout << "2/ Tao lap voi 2 tham so:\n";
	cout << "3/ Sao chep thong tin vua nhap:\n";
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1: {
		string n, m, c;
		unsigned int d;
		float h;
		cout << "Nhap ten: ";
		cin.ignore();
		getline(cin, n);
		cout << "Nhap so ngay lam viec: ";
		cin >> d;
		cout << "Nhap ma so: ";
		cin >> m;
		cout << "Nhap chuc danh: ";
		cin.ignore();
		getline(cin, c);
		cout << "Nhap he so luong: ";
		cin >> h;
		nhanVien temp(n, d, m, c, h);
		cout << "Nhan vien vua nhap:\n";
		cout << a;
		break;
	}
	case 2: {
		string n;
		unsigned int d;
		cout << "Nhap ten: ";
		cin.ignore();
		getline(cin, n);
		cout << "Nhap so ngay lam viec: ";
		cin >> d;
		nhanVien temp(n, d);
		cout << "Nhan vien vua nhap:\n";
		cout << a;
		break;
	}
	case 3: {
		nhanVien temp(a);
		cout << "Thong tin vua sao chep:\n";
		cout << temp;
		break;
	}
	default:
		cout << "Lenh khong hop le!\n";
	}
}