#include <iostream>
#include <vector>

int main(int argc, char** argv) {
  std::vector<int> vect(10,10);
  std::cout << vect.capacity() << std::endl;
  std::cout << vect.max_size() << std::endl;
  return 0;

}
