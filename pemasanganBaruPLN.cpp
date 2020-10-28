#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

void printMenu();
void hargaSambunganR();
void hargaSambunganI();

int main() {
	int harga, ppn, admin, total_biaya;
	std::string sambungan;
	char ulang, j_pelanggan, j_sambungan;
	
	system("clear"); //system("cls") on windows OS
	
	printMenu();
	cout << "Pilih jenis pelanggan (R/I) : "; cin >> j_pelanggan;

	if (j_pelanggan == 'R') {
		
		hargaSambunganR();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Pilih jenis sambungan (1/2/3/4/5) : "; cin >> j_sambungan;
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
	} else if (j_pelanggan == 'I') {
		hargaSambunganI();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Pilih jenis sambungan (1/2/3/4/5) : "; cin >> j_sambungan;
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
	} else {
		cout << "Pastikan input R atau I!\n";
	}

	//ppn dan administrasi
	ppn = harga * 0.1;
	admin = harga * 0.05;

	cout << "\n== Detail Biaya Pemasangan Baru ==\n";
	cout << "---------------------------------------------------\n";
	cout << "Sambungan   : " << sambungan << "\n";
	cout << "Harga       : Rp." << harga << "\n";
	cout << "Pajak       : RP." << ppn << "(10% dari Harga)\n"; 
	cout << "Admin       : Rp." << admin << "(5% dari Harga)\n";
	cout << "---------------------------------------------------\n";
	total_biaya = harga + ppn + admin;
	cout << "Total Biaya : Rp." << total_biaya << "\n";

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
	cout << "Jenis pelanggan : Rumah Tangga\n";
	cout << "(1) 0-450 Watt" << "		(Rp. 650000)\n";
	cout << "(2) 451-900 Watt" << "	(Rp. 850000)\n";
	cout << "(3) 901-1200 Watt" << "	(Rp. 1200000)\n";
	cout << "(4) 1201-2200 Watt" << "	(Rp. 1500000)\n";
	cout << "(5) 2201-4400 Watt" << "	(Rp. 1750000)\n)\n";
}

void hargaSambunganI() { //harga sambungan : industri
	cout << "Jenis pelanggan : Industri\n";
	cout << "(1) 4401-9500 Watt" << "	(Rp. 2250000)\n";
	cout << "(2) 9501-12000 Watt" << "	(Rp. 2750000)\n";
	cout << "(3) 12001-16000 Watt" << "	(Rp. 3250000)\n";
	cout << "(4) 16001-22000 Watt" << "	(Rp. 4500000)\n";
	cout << "(5) Di atas 22000 Watt" << "	(Rp. 6700000)\n)\n";
}
