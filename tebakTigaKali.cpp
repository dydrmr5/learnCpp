#include <iostream>
using namespace std;

void lineBar() {
	cout << "====================================\n";
}

int main() {
	int a = 4, b = 6, hasil, tebak;
	int salah = 0;
	hasil = a + b;

	while (tebak != hasil) {
		cout << "tebak hasil dari " << a << " + " << b << " : ";
		cin >> tebak;

		if (salah == 3) {
			cout << "jawaban salah!" << endl;
			lineBar();
			cout << "anda sudah gagal karena 3 kali salah." << endl;
			cout << "jawaban yang benar adalah : " << hasil << endl;
			break;
		} else if (tebak == hasil) {
			lineBar();
			cout << "jawaban anda benar, " << a << " + " << b << " = " << hasil << endl;
			break;
		} else {
			cout << "jawaban salah!" << endl;
			salah++;
		}
	}

	return 0;
}