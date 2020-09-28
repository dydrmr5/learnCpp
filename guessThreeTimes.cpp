#include <iostream>
using namespace std;

int main() {
	int a = 4, b = 6, result, guess;
	int wrong = 0; // chance
    result = a + b;

	while (guess != result) {
		cout << "guess the result from " << a << " + " << b << " : ";
		cin >> guess;

		if (wrong == 2) { // when 3 times wrong (wrong = 2), failed
			cout << "wrong answer!" << endl;
			cout << "\nyou've failed : wrong answer 3 times." << endl;
			cout << "the correct answer is : " << result << endl;
			break;
		} else if (guess == result) {
			cout << "your answer is correct, " << a << " + " << b << " = " << result << endl;
			break;
		} else {
			cout << "wrong answer!" << endl;
			wrong++; // wrong(0) + 1
		}
	}

	return 0;
}
