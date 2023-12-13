#include "array.hpp"
#include <iostream>

int main() {
  // create new array in the heap of length 100 with smart pointer
  std::unique_ptr<Array> array_int = std::make_unique<Array>(30);

  /**
   * manage array_int
   */
  array_int->fill_array_random_int();
  // array_int->print_capacity();
  // array_int->print_number_of_elements();
  array_int->print_all_elements();
  std::cout << "==============================================" << '\n';
  // array_int->bubble_sort();
  // array_int->print_all_elements();

  int found_number_position = array_int->linear_search(1);
  if (found_number_position > 0) {
    std::cout << "FOUND AT: " << found_number_position << '\n';
  } else {
    std::cout << "NOT FOUND" << '\n';
  }

  return 0;
}
