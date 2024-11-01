#pragma once
#ifndef PhanSo_H
#define PhanSo_H

class PhanSo {
	int* tuso;
	int* mauso;

	int gcd(int, int) const;
public:
	PhanSo();
	PhanSo(int);
	PhanSo(int, int);
	PhanSo(const PhanSo&);
	int getTuSo() const;
	void setTuSo(int);
	int getMauSo() const;
	void setMauSo(int);

	void plus(const PhanSo&);
	void minus(const PhanSo&);
	void multiply(const PhanSo&);
	void division(const PhanSo&);

	void reduce() const;
	void input();
	void print() const;

	~PhanSo();
};

#endif