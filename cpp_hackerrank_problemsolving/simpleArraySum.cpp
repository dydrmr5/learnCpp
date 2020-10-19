#include <iostream>
using namespace std;

void sum_array(int ref_array[], int &ref_array_count) {
  //sum all inputted array
  int sum = 0;
  for(int k = 0; k < ref_array_count; k++) {
    sum += ref_array[k];
  }
  cout << "sum of array elements : " <<  sum << endl;

}

int main() {
  int array_size;

  cout << "input array size : "; cin >> array_size;

  int array[array_size];
  for(int i = 0; i  < array_size; i++) {
    cout << "array index-" << i << " : "; cin >> array[i];
  }

  //print all inputted array
  cout << "\nInputted Array" << endl;
  for(int j = 0; j < array_size; j++) {
    cout << "index [" << j << "]" << " = " << array[j] << endl;  
  }

  //print sum of array elements
  sum_array(array,array_size);

  return 0;
}
