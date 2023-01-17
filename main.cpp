#include <iostream>


int multiply_list_recursive(const int* sisi, int size) {
  if (size == 0) {
    return 1;
  }
  int result = sisi[0] * 4;
  std::cout << result << std::endl;
  return result * multiply_list_recursive(sisi + 1, size - 1);
}



int main() {
  int sisi[1000];
  for (int i = 0; i < 1000; ++i) {
    sisi[i] = i + 1;
  }
  int size = sizeof(sisi) / sizeof(int);
  int result = multiply_list_recursive(sisi, size);
  return 0;
}
