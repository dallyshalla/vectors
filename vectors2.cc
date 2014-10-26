/* 
   Getting Internal State Information About a Vector
   The vector container has a number of member functions that give the programmer
   information about its internal state. One of the most important of these functions,
   especially in light of the above example, is the member size(). As the name implies,
   size() returns the number of elements in the vector. This function can be especially
   useful in loops that access the elements of a vector, such as the one presented
   above. In simple cases without insertions or deletions of elements, it can be used
   to forego the exception handling blocks (though I know some programmers might go
   ballistic over that last statement).

   */

#include <iostream>
#include <vector>

int main(int argc, char** argv) {
  /* Initialize vector of 10 copies of the integer 5 */
  std::vector<int> vectorOne(10,5);

  /* Display size of vector */
  std::cout << "Size of vector is " << vectorOne.size() << " elements." << std::endl;

  /* run through the vector and display each element, using size() to determine index
   * boundary */
  for (long index=0; index<(long)vectorOne.size(); ++index) {
    std::cout << "Element " << index << ": " << vectorOne.at(index) << std::endl;
  }

  return 0;
  }
