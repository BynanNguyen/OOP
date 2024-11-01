#include "PhanSo.h"
#include <iostream>
using namespace std;

//find Greatest Common Divisor
int PhanSo::gcd(int a, int b) const {
	while (b != 0) {
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

//Reduce fraction
void PhanSo::reduce() const {
	int gcdValue = gcd(*tuso, *mauso);
	*tuso /= gcdValue;
	*mauso /= gcdValue;

	if (*mauso < 0) {
		*tuso = -(*tuso);
		*mauso = -(*mauso);
	}
}

//Default constructor
PhanSo::PhanSo() {
	tuso = new int;
	mauso = new int;
	*tuso = 0;
	*mauso = 1;
}

//Constructor with 1 parameter
PhanSo::PhanSo(int tu) {
	tuso = new int;
	mauso = new int;
	*tuso = tu;
	*mauso = 1;
}

//Constructor with 2 parameters
PhanSo::PhanSo(int tu, int mau) {
	tuso = new int;
	mauso = new  int;
	if (mau < 0) {
		*tuso = -tu;
		*mauso = -mau;
	}
	else {
		*tuso = tu;
		*mauso = mau;
	}
}

//Copy constructor
PhanSo::PhanSo(const PhanSo& ps) {
	tuso = new int;
	mauso = new int;
	*tuso = *ps.tuso;
	*mauso = *ps.mauso;
}

//Getter for tuso
int PhanSo::getTuSo() const {
	return *tuso;
}

//Setter for tuso
void PhanSo::setTuSo(int tu) {
	*this->tuso = tu;
}

//Getter for mauso
int PhanSo::getMauSo() const {
	return *mauso;
}

//Setter for mauso
void PhanSo::setMauSo(int mau) {
	*this->mauso = mau;
}

void PhanSo::plus(const PhanSo& ps) {
	*tuso = (*tuso) * (*ps.mauso) + (*mauso) * (*ps.tuso);
	*mauso = (*mauso) * (*ps.mauso);
}

void PhanSo::minus(const PhanSo& ps) {
	*tuso = (*tuso) * (*ps.mauso) - (*mauso) * (*ps.tuso);
	*mauso = (*mauso) * (*ps.mauso);
}
void PhanSo::multiply(const PhanSo& ps) {
	*tuso = (*tuso) * (*ps.tuso);
	*mauso = (*mauso) * (*ps.mauso);
}

void PhanSo::division(const PhanSo& ps) {
	*tuso = (*tuso) * (*ps.mauso);
	*mauso = (*mauso) * (*ps.tuso);
}

void PhanSo::input() {
	int tu, mau;
	cout << "Nhap tu so: ";
	cin >> tu;
	cout << "Nhap mau so: ";
	cin >> mau;
	*tuso = tu;
	*mauso = mau;
}

void PhanSo::print() const {
	reduce();
	cout << "Xuat theo dang tu so / mau so: " << *tuso << "/" << *mauso << endl;
	cout << "Xuat theo dinh dang so thap phan: " << (double)*tuso/ *mauso << endl;
}

PhanSo::~PhanSo() {
	delete tuso;
	delete mauso;
}