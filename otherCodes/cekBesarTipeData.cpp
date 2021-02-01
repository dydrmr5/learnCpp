#include <iostream>
#include <limits> //untuk fungsi numeric_limits

using namespace std;

int main() {
 
  // find size of data type
  cout << "=== tipe data fundamental ===" << "\n";
  cout << "bilangan bulat : int(1), long(2), short(3)" << "\n";
  cout << "bilangan desimal : float(4), double(5)" << "\n"; 
  cout << "karakter : char(6)" << "\n";
  cout << "boolean : bool(7)" << "\n \n"; 

  //deklarasi
  unsigned long kode_data;

  // input kode tipe data
  cout << "masukkan kode untuk mengetahui besar tipe data : ";

  cin >> kode_data;
  if (kode_data == 1) {
    cout << "besar tipe datanya adalah : ";
    cout << sizeof(int) << " Byte \n";
    cout << "\n";
  }
  else if (kode_data == 2) {
    cout << "besar tipe datanya adalah : ";
    cout << sizeof(long) << " Byte \n";
    cout << "\n";
  }
  else if (kode_data == 3){
    cout << "besar tipe datanya adalah : ";
    cout << sizeof(short) << " Byte \n";
    cout << "\n";
  }
  else if (kode_data == 4){
    cout << "besar tipe datanya adalah : ";
    cout << sizeof(float) << " Byte \n";
    cout << "\n";
  }
  else if (kode_data == 5){
    cout << "besar tipe datanya adalah : ";
    cout << sizeof(double) << " Byte \n";
    cout << "\n";
  }
  else if (kode_data == 6){
    cout << "tipe data char besarnya adalah 1 bit \n";
    cout << "\n";
  }
  else if (kode_data == 7){
    cout << "tipe data boolean nilainya hanya true dan false \n";
    cout << "\n";
  }

  else {
    cout << "kode yang anda masukkan salah!";
    cout << "\n \n";
  } 
  // cout << "besar dari tipe data int adalah : ";
  // cout << sizeof(a) << " Byte" << "\n";
  // cout << "nilai maksimumnya : ";
  // cout << numeric_limits<int>::max() << "\n";
  // cout << "nilai minimumnya : ";
  // cout << numeric_limits<int>::min() << "\n";
  return 0;
}
