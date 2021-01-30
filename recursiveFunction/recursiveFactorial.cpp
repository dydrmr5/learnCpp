#include <iostream>

// recursive function to get factorial of a number
int factorialOf(int num_param) {
  if (num_param == 1) {
    return 1;
  } else {
    return num_param * (factorialOf(num_param - 1));
  }
}

int main() {
  int number, result;
  char again;

  std::cout << "// FACTORIAL //" << std::endl;
  do {
    // get input
    std::cout << "Get factorial of\t: "; std::cin >> number;

    // print the result (factorialOf function)
    result = factorialOf(number);
		std::cout << "\nThe factorial of " << number << " is " << result << std::endl;

    std::cout << "-----------------------------------------------\n";
    std::cout << "Get factorial again ?(y/n)\t: "; std::cin >> again;
  } while (again == 'y' || again == 'Y');

  std::cout << "Thanks :)\n";

  return 0;
}
