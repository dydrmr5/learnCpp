#include <iostream>
using namespace std;

// int fungsiPangkat(int *aPtr, int *bPtr) {
// 	int hasil = *aPtr;
// 	for (int i = 1; i < *bPtr; i++) {
// 		hasil *= (*aPtr); //hasil = hasil * a
// 	}
// 	return hasil;
// }

int fungsiPangkat(int *aPtr, int *bPtr) {
	//int hasil = *aPtr;
	if(*bPtr <= 1) {
		return *aPtr;
	} else {
		return *aPtr * fungsiPangkat(aPtr, (bPtr - 1));
	}
}

int main() {
	int a, b;
	char lagi;

		cout << "Masukkan Angka   : "; cin >> a;
		cout << "Masukkan Pangkat : "; cin >> b;
		cout << "Hasilnya, " << a << " pangkat " << b << " : " << fungsiPangkat(&a, &b) << endl;
		
	cout << "==================================\n";
	cout << "Terima kasih telah menghitung.";

	return 0;
}
