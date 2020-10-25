#include <iostream>
using namespace std;

int main() {
  int gaji_pokok, tunjangan_istri, tunjangan_anak, gaji_bersih, jml_anak;
  string nama, posisi;
  char menikah, anak;

  cout << "====||==== GAJI BERSIH KARYAWAN ====||====\n\n";
  cout << "Tunjangan Istri\n= 10% dari gaji pokok\n"; 
  cout << "Tunjangan Anak\n= 5% (anak < 2) dan 10% (anak > 2) dari gaji pokok\n"; 
  cout << "Gaji Bersih\n= Tunjangan Anak + Tunjangan istri + Gaji Pokok\n\n";
  cout << "=========================================\n\n";
  
  cout << "Input Nama       : "; getline(cin, nama);
  //cin.ignore();
  cout << "Posisi (Bagian)  : "; getline(cin, posisi);
  cout << "Input Gaji Pokok : "; cin >> gaji_pokok;
  cout << "Menikah(y/t)     : "; cin >> menikah;

  cout << "Punya Anak(y/t)  : "; cin >> anak;
  if (anak == 'y' || anak == 'Y') {
    cout << "Jumlah anak      : "; cin >> jml_anak;
  }
  
  cout << "\n==========================================\n\n";
  cout << "Nama    : " << nama << "\n";
  cout << "Posisi  : " << posisi << "\n";
  cout << "Menikah : ";
  if (menikah == 'y' || menikah == 'Y') {
    cout << "Sudah\n";
  } else {
    cout << "Belum\n";
  }
  
  cout << "Anak    : ";
  if (anak == 'y' || anak == 'Y') {
    cout << "Ada (" << jml_anak << " orang)\n";
  } else {
    cout << "Belum ada\n";
  }

  cout << "\n";
  cout << "Gaji Pokok      = Rp." << gaji_pokok << "\n";

  if (menikah == 'y' || menikah == 'Y') {
    tunjangan_istri = gaji_pokok %10;
  }
  cout << "Tunjangan Istri = Rp." << tunjangan_istri << "\n";

  if (jml_anak < 2) {
    tunjangan_anak = gaji_pokok %5;
  } else {
    tunjangan_anak = gaji_pokok %10;
  }
  cout << "Tunjangan Anak  = Rp." << tunjangan_anak << "\n";
  
  //gaji bersih
  gaji_bersih = gaji_pokok + tunjangan_istri + tunjangan_anak;
  cout << "Gaji Bersih     = Rp." << gaji_bersih << "\n";

  return 0;
}
