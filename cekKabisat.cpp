#include <iostream>
#include <stdio.h>
using namespace std;

//fungsi kabisat
int apaKabisat(int &tahun) {
	if (tahun %4 == 0 && isdigit(tahun)) {
		cout << "Tahun " << tahun << " adalah tahun kabisat.\n";
	} else if (tahun %4 == 1 && isdigit(tahun)) {
		cout << "Tahun " << tahun << " bukan tahun kabisat.\n";
	} else {
		cout << "inputan salah! tahun tidak diketahui.\n";
	}
	return tahun;
}

void namaProgram() {
	cout << "===============================\n";
	cout << "==   Program Tahun Kabisat   ==\n";
	cout << "===============================\n";
}

int main() {
	int tahun;

	namaProgram();
	cout << "Masukkan tahun        : "; cin >> tahun;

	try {
		if(!cin >> tahun) {
			throw tahun;
		}
	} catch (int error) {
		cout << "error : masukkan tahun/angka saja!\n";
	}

	cout << "Tahun yang dimasukkan : " << tahun << endl;
	cout << "===============================\n";

	apaKabisat(tahun); //panggil fungsi apaKabisat;

	return 0;
}