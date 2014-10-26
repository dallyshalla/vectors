/*

there two other member functions that are closely related to size(). So closely related,
in fact, that they are frequently confused with size() by novices and experts alike.
These functions are capacity() and max_size().

The function capacity() returns the number of elements that the vector can hold before
more space is allocated. It is very important to remember here that, unlike raw arrays,
most of the memory management for vectors is performed silently during construction or
manipulation of the container. When a vector is declared or initialized to contain a
specified number of elements, the program may allocate more space than is currently
needed, under the assumption that, because you are using dynamically allocated storage,
the storage requirements may change over time. If extra space is allocated, it allows
the program to add additional elements without an allocation step. This prevents the
performance hit that would otherwise be expected if new space were allocated for every
new element added. Once the vector contains the same number of elements as its
capacity, new space is allocated when a new element is inserted. But again, to maximize
performance, when a reallocation occurs, more space is allocated than is currently
needed.

The function max_size() should not be confused in any way with the function capacity().
max_size() returns the maximum number of elements that the container can hold. Notice
that there is no qualifier about memory allocation here. max_size() is determined by
the system, the compiler, and the computer’s architecture, and refers to memory address
space limitations on a particular machine.

Closely related to the size() and capacity() functions are resize() and reserve().
While size() and capacity() allow the programmer to get information about the
container, resize() and reserve() allow the programmer to set these values.
resize() changes the actual number of elements in a vector. The syntax is given by:

1void resize(size_type num)
2void resize(size_type num, const TYPE& val=TYPE())


resize() is most often used to increase the number of elements in a vector, in which
case the first will initialize these new elements to their default value, whereas the
second will intialize all of the new elements to val. The resize() function can also be
used to decrease the number of elements, which results in the truncation of the last
(num-vectorName.size()) elements. The following code initializes a vector containing 10
copies of the number 5, then truncates the last 3 elements by resizing the vector to
contain only 7 elements. Play around with the line vectorOne.resize(7) to see the effect
of the resize function.
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

  /* Change size of vector - element removal */
  vectorOne.resize(7);

  /* Display size of vector */
  std::cout << "Size of vector is " << vectorOne.size() << " elements." << std::endl;

  /* run through the vector and display each element, using size() to determine index boundary */
  for (long index=0; index<(long)vectorOne.size(); ++index) {
    std::cout << "Element " << index << ": " << vectorOne.at(index) << std::endl;
  }

  return 0;
}
