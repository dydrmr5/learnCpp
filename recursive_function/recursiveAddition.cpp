#include <iostream>

// recursive addition, example :
// num1 = 1, num2 = 3 ===> 1 + 2 + 3 = 6
int recursiveAddition(int num1_param, int num2_param) {
  if (num1_param == num2_param) {
    return num2_param;
  } else {
    return (num1_param + recursiveAddition(num1_param + 1, num2_param));
  }
}

int main() {
  int num1, num2;
  char again;

  std::cout << "// RECURSIVE ADDITION //" << std::endl;
  // do while loop (to use program more than once)
  do {
    // get input
    std::cout << "First number\t: "; std::cin >> num1;
    std::cout << "Second number\t: "; std::cin >> num2;
    
    // print number and result, ex : 1 + 2 + 3 = 6
    for(int i = num1; i < num2; i++) {
      std::cout << i << " + ";
      if(i == num2 - 1) {
        std::cout << i + 1 << " = ";
        break;
      }
    }
    // get the recursive addition
    std::cout << recursiveAddition(num1, num2) << std::endl;

    std::cout << "-----------------------------------------------\n";
    std::cout << "Get addition again ?(y/n)\t: "; std::cin >> again;
  } while (again == 'y' || again == 'Y');

  std::cout << "Thanks :)\n";

  return 0;
}
