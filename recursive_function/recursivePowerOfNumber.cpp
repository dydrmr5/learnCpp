#include <iostream>

// recursive function to power raised a number
// returns the value of base_param raised to power exponent_param
int toThePowerOf(int base_param, int exponent_param) {
  if (exponent_param == 1) {
    return base_param;
  } else if (base_param == 1 || exponent_param == 0) {
    return 1;
  } else {
    return (base_param * toThePowerOf(base_param, exponent_param - 1));
  }
}

int main() {
  int base, exponent;
  char again;

  std::cout << "// POWER RAISE A NUMBER //" << std::endl;
  // do while loop (to use program more than once)
  do {
    // get input
    std::cout << "Base number\t: "; std::cin >> base;
    std::cout << "Exponent\t: "; std::cin >> exponent;
    
    // error handling, if base is not a positive number
    if(base < 0) {
      std::cout << "ERROR : Base number must be positive number!" << std::endl;
      break;
    }
   
    // print the result
    std::cout << std::endl << base << " raised to the power of " << exponent << " = " << toThePowerOf(base, exponent) << std::endl;

    std::cout << "-----------------------------------------------\n";
    std::cout << "Use program again ?(y/n)\t: "; std::cin >> again;
  } while (again == 'y' || again == 'Y');

  std::cout << "Thanks :)\n";

  return 0;
}
