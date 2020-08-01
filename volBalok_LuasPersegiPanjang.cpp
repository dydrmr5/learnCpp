#include <iostream>
using namespace std;

//prototipe fungsi dengan reference
int volBalok(int &panjang, int &lebar, int &tinggi);
int luasPersegiPanjang(int &panjang, int &lebar);
void tampilMenu();
void tampilGaris();
void tampilAkhir();

int main() {
	int panjang, lebar, tinggi, hasil;
	char lagi, menu;
	tampilMenu();

	do {
		do {
			cout << "Pilih Menu (1/2) : "; cin >> menu;
			switch(menu) {
				case '1':
					cout << "==   1. Hitung Volume Balok           ==\n";		 
					cout << "Masukkan Panjang : "; cin >> panjang;
					cout << "Masukkan Lebar   : "; cin >> lebar;
					cout << "Masukkan Tinggi  : "; cin >> tinggi;
					hasil = volBalok(panjang, lebar, tinggi); //panggil fungsi
					cout << "Volume Balok     : p x l x t " << endl;
					cout << "                 : " << panjang << " x " << lebar << " x " << tinggi << endl; 
					cout << "Jadi, Hasilnya   : " << hasil << "cm" << endl;
					tampilGaris();
				 	break;
				case '2':
					cout << "==   2. Hitung Luas Persegi Panjang   ==\n";	 
					cout << "Masukkan Panjang     : "; cin >> panjang;
					cout << "Masukkan Lebar       : "; cin >> lebar;
					hasil = luasPersegiPanjang(panjang, lebar); //panggil fungsi
					cout << "Luas Persegi Panjang : p x l " << endl;
					cout << "                     : " << panjang << " x " << lebar << endl; 
					cout << "Jadi, Hasilnya       : " << hasil << "cm" << endl;
					tampilGaris();
				 	break;
			 	default:
			 		cout << "error : pilih 1 atau 2!" << endl;
					cout << "Pilih Menu (1/2) : "; cin >> menu;
			 		break;
			}
			cout << "ingin menghitung lagi ? (y/n) : "; cin >> lagi;

		} while (menu == '1' && lagi == 'y' || menu == '2' && lagi == 'y');
	} while (lagi == 'y' || lagi == 'Y');
	tampilAkhir();

	return 0;
}

//tampil menu
void tampilMenu() {
	cout << "========================================\n";
	cout << "==   1. Hitung Volume Balok           ==\n";
	cout << "==   2. Hitung Luas Persegi Panjang   ==\n";
	cout << "========================================\n\n";
}

void tampilGaris() {
	cout << "========================================\n";
}

void tampilAkhir() {
	cout << "========================================\n";
	cout << "==   Terima Kasih Telah Menggunakan   ==\n";
	cout << "========================================\n";
}

//hitung volume balok
int volBalok(int &panjang, int &lebar, int &tinggi) {
	return panjang * lebar * tinggi;
}

//hitung luas persegi panjang
int luasPersegiPanjang(int &panjang, int &lebar) {
	return panjang * lebar;
