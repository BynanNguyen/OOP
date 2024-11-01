#include "PhanSo.h"
#include <iostream>
using namespace std;

int main() {
	//Default constructor
	PhanSo a;
	cout << "Phan so a mac dinh:\n";
	a.print();

	//Constructor with 1 parameter
	PhanSo b(5);
	cout << "\nPhan so b voi 1 tham so:\n";
	b.print();

	//Constructor with 2 parameters
	PhanSo c(12, 24);
	cout << "\nPhan so c voi 2 tham so:\n";
	c.print();

	//Copy constructor
	PhanSo d(c);
	cout << "\nPhan so d sao chep tu phan so c:\n";
	d.print();

	//Getter and setter
	d.setTuSo(7);
	d.setMauSo(8);
	cout << "\nPhan so d sau khi su dung setter :\n";
	d.print();
	cout << "Getter tu so: " << d.getTuSo() << ", Getter mau so: " << d.getMauSo() << endl;

	PhanSo sumFrac = c;
	sumFrac.plus(b);
	cout << "\nKet qua phan so c cong phan so b :\n";
	sumFrac.print();

	PhanSo diffFrac = c;
	diffFrac.minus(b);
	cout << "\nKet qua phan so c tru phan so b:\n";
	diffFrac.print();

	PhanSo prodFrac = c;
	prodFrac.multiply(b);
	cout << "\nKet qua phan so c nhan phan so b:\n";
	prodFrac.print();

	PhanSo quotFrac = c;
	quotFrac.division(b);
	cout << "\nKet qua phan so c chia phan so b:\n";
	quotFrac.print();

	PhanSo inputFrac;
	cout << endl;
	inputFrac.input();
	cout << "\nPhan so vua nhap:\n";
	inputFrac.print();

	return 0;
}