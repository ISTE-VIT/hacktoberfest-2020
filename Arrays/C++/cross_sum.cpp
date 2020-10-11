#include <iostream>
#include <string>

int main() {
  int size = 5;
  std::cout << "Please fill with int your size 5 array \n";

  int personalized_array[5] = {};
  int cross_sum = 0;

  for (int i = 0; i < size; i++) {
    std::cout << "Element " << std::to_string(i) << " : ";
    std::cin >> personalized_array[i];
    cross_sum = cross_sum + personalized_array[i];
  }

  std::cout << "Display array [ " << personalized_array[0];

  for (int i = 1; i < size; i++) {
    std::cout << ", " << std::to_string(personalized_array[i]);
  }

  std::cout << " ]\n";

  std::cout << "Cross sum = " << std::to_string(cross_sum) << "\n";

  return 0;
}
