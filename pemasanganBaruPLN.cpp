#include <iostream>
#include <limits>
#include <iomanip>
using std::cout;
using std::cin;
using std::setw;

void printMenu();
void hargaSambunganR();
void hargaSambunganI();

int main() {
	int harga, ppn, admin;
	std::string sambungan;
	char ulang, j_pelanggan, j_sambungan;
	
	system("clear"); //system("cls") on windows OS
	
	printMenu();
	cout << "Pilih jenis pelanggan : "; cin >> j_pelanggan;
	switch (j_pelanggan) {
	case 'R':
		hargaSambunganR();
		cout << "Pilih jenis sambungan (1/2/3/4/5) : "; j_sambungan;
		switch (j_sambungan) {
		case '1':
			sambungan = "0-450 Watt\n";
			harga = 650000;
			break;
		case '2':
			sambungan = "451-900 Watt\n";
			harga = 850000;
			break;
		case '3':
			sambungan = "901-1200 Watt\n";
			harga = 1200000;
			break;
		case '4':
			sambungan = "1201-2200 Watt\n";
			harga = 1500000;
			break;
		case '5':
			sambungan = "2201-4400 Watt\n";
			harga = 1750000;
			break;
		default:
		cout << "Jenis sambungan salah\n,pastikan input (1/2/3/4/5)!\n";
			break;
		}
		break;
	case 'I':
		hargaSambunganI();
		cout << "Pilih jenis sambungan (1/2/3/4/5) : "; j_sambungan;
		switch (j_sambungan) {
		case '1':
			sambungan = "4401-9500 Watt\n";
			harga = 2250000;
			break;
		case '2':
			sambungan = "9501-12000 Watt\n";
			harga = 2750000;
			break;
		case '3':
			sambungan = "12001-16000 Watt\n";
			harga = 3250000;
			break;
		case '4':
			sambungan = "16001-22000 Watt\n";
			harga = 4500000;
			break;
		case '5':
			sambungan = "Di atas 22000 Watt\n";
			harga = 6700000;
			break;
		default:
		cout << "Jenis sambungan salah\n,pastikan input (1/2/3/4/5)!\n";
			break;
		}
		break;
	default:
	cout << "Pastikan input R atau I!\n";
		break;
	}

	//ppn dan administrasi
	ppn = harga * 0.1;
	admin = harga * 0.05;

  return 0;
}

void printMenu() { //print menu
	cout << "---------------------------------------------------\n";
	cout << "==| Pemasangan Baru Rekening Pelanggan PLN |==\n";
	cout << "---------------------------------------------------\n";
	cout << "Jenis Pelanggan : Rumah Tangga(R), Industri(I)\n";
	cout << "---------------------------------------------------\n\n";
}

void hargaSambunganR() { //harga sambungan : rumah tangga
	cout << "(1) 0-450 Watt" << setw(16) << "Harga : Rp. 650000\n";
	cout << "(2) 451-900 Watt" << setw(16) << "Harga : Rp. 850000\n";
	cout << "(3) 901-1200 Watt" << setw(16) << "Harga : Rp. 1200000\n";
	cout << "(4) 1201-2200 Watt" << setw(16) << "Harga : Rp. 1500000\n";
	cout << "(5) 2201-4400 Watt" << setw(16) << "Harga : Rp. 1750000\n\n";
}

void hargaSambunganI() { //harga sambungan : industri
	cout << "(1) 4401-9500 Watt" << setw(16) << "Harga : Rp. 2250000\n";
	cout << "(2) 9501-12000 Watt" << setw(16) << "Harga : Rp. 2750000\n";
	cout << "(3) 12001-16000 Watt" << setw(16) << "Harga : Rp. 3250000\n";
	cout << "(4) 16001-22000 Watt" << setw(16) << "Harga : Rp. 4500000\n";
	cout << "(5) Di atas 22000 Watt" << setw(16) << "Harga : Rp. 6700000\n\n";
}