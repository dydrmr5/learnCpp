#include <iostream>
#include <limits>
using namespace std;

int main() {
  int gaji_pokok, gaji_bersih, jml_anak, tunjangan_istri=0, tunjangan_anak=0;
  string nama, posisi;
  char menikah, anak, ulang;

	system("clear"); //system("cls") for windows
	do {
		cout << "====||==== GAJI BERSIH KARYAWAN ====||====\n";
		cout << "Tunjangan Istri\n= 10% dari gaji pokok\n"; 
		cout << "Tunjangan Anak\n= 5% (anak < 2) dan 10% (anak > 2) dari gaji pokok\n"; 
		cout << "Gaji Bersih\n= Tunjangan Anak + Tunjangan istri + Gaji Pokok\n";
		cout << "=========================================\n\n";
		
		cout << "Input Nama       : "; getline(cin, nama);
		cout << "Posisi (Bagian)  : "; getline(cin, posisi);
		cout << "Input Gaji Pokok : "; cin >> gaji_pokok;
		cout << "Menikah(y/t)     : "; cin >> menikah;
		if (menikah == 'y' || menikah == 'Y') {
			tunjangan_istri = gaji_pokok * 0.1; //0.1 = 10%
			cout << "Punya Anak(y/t)  : "; cin >> anak;
			if (anak == 'y' || anak == 'Y') {
				cout << "Jumlah anak      : "; cin >> jml_anak;
				if (jml_anak < 2) {
					tunjangan_anak = gaji_pokok * 0.05; //0.05 = 5%
				} else {
					tunjangan_anak = gaji_pokok * 0.1; //0.1 = 10%
				}
			}
		}
		
		cout << "\n==========================================\n\n";
		cout << "Nama    : " << nama << "\n";
		cout << "Posisi  : " << posisi << "\n";
		cout << "Menikah : ";
		if (menikah == 'y' || menikah == 'Y') {
			cout << "Sudah\n";
			cout << "Anak    : ";
			if (anak == 'y' || anak == 'Y') {
				cout << "Ada (" << jml_anak << " orang)\n";
			} else {
				cout << "Belum ada\n";
			}
		} else {
			cout << "Belum\n";
		}

		cout << "\n";
		cout << "Gaji Pokok      = Rp. " << gaji_pokok << "\n";
		if (menikah == 'y' || menikah == 'Y' && anak == 'y' || anak == 'Y') {
			cout << "Tunjangan Istri = Rp. " << tunjangan_istri << "\n";
			cout << "Tunjangan Anak  = Rp. " << tunjangan_anak << "\n";
			gaji_bersih = gaji_pokok + tunjangan_istri + tunjangan_anak;
		} else {
			gaji_bersih = gaji_pokok;
		}
		cout << "Gaji Bersih     = Rp. " << gaji_bersih << "\n";

		cout << "\n==========================================";
		//loop program
		cout << "\nPakai program lagi ? (y/t) : "; cin >> ulang;
		cout << "\n";
		if (ulang == 'n' || ulang == 'N' || ulang != 'y') {
			cout << "Terima kasih..\n";
			break;
		}

	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');	
	} while (ulang == 'y' || ulang == 'Y');
  return 0;
}

