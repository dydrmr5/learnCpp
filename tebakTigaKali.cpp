#include <iostream>
using namespace std;

void lineBar() {
	cout << "====================================\n";
}

int main() {
	int a = 4, b = 6, result, guess;
	int wrong = 0;
    result = a + b;

	while (guess != result) {
		cout << "guess the result from " << a << " + " << b << " : ";
		cin >> guess;

		if (wrong == 3) {
			cout << "wrong answer!" << endl;
			lineBar();
			cout << "you've failed : wrong answer 3 times." << endl;
			cout << "the correct answer is : " << result << endl;
			break;
		} else if (guess == result) {
			lineBar();
			cout << "your answer is correct, " << a << " + " << b << " = " << hasil << endl;
			break;
		} else {
			cout << "wrong answer!" << endl;
			salah++;
		}
	}

	return 0;
}
