#include <iostream>
using namespace std;

// commented code below is pow function using for loop and pointer
// remove "//" to uncomment
// int forLoopPow(int *aPtr, int *bPtr) {
// 	int result = *aPtr;
// 	for (int i = 1; i < *bPtr; i++) {
// 		result *= (*aPtr); //result = result * a
// 	}
// 	return result;
// }

//pow function with recursive and pointer
int recursivePow(int *aPtr, int *bPtr) {
	if(*bPtr <= 1) {
		return *aPtr;
	} else {
		return *aPtr * recursivePow(aPtr, (bPtr - 1));
	}
}

int main() {
	int a, b;

		cout << "Enter the base value     : "; cin >> a;
		cout << "Enter the exponent value : "; cin >> b;
		cout << "The result is, " << a << " raised to the power " << b << " : " << recursivePow(&a, &b) << endl;
		//*change recursivePow to forLoopPow << (if u wanna use it)
		
	cout << "==================================\n";
	cout << "Thank you for using.";

	return 0;
}
