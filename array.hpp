#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <cstddef>
/**
 * declarations
 */
class Array {
private:
  // contain the address of the first element of the array
  int *_elements;
  size_t _capacity;
  size_t _number_of_elements;
  bool _is_full;

public:
  Array(const size_t);
  ~Array(); // TODO
  void set_element_at_index(const size_t, const int);
  void push_element(const int &);
  void fill_array_random_int();
  void print_all_elements();
  void print_number_of_elements();
  void print_capacity();
  void swap_two_indexes_elements(const size_t, const size_t);
  void double_capacity();
  bool get_is_full();
  int get_element_at_index(const size_t);
  size_t get_capacity();
  size_t get_number_of_elements();
  int linear_search(const int);
  int binary_search(const int);

  /**
   * sort algorithms
   */
  /**
   * adaptive
   * stable
   * average:O(n^2)
   * best:O(n):ascending order
   * worst:O(n^2):descending order
   */
  void bubble_sort();

  /**
   * better for linked list
   * adaptive
   * stable
   * average:O(n^2)
   * best:O(n):ascending order
   * worst:O(n^2):descending order
   */
  void insertion_sort();

  /**
   *
   */
  void selection_sort();
};

#endif
