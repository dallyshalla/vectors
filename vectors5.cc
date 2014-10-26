/*
   PART II
   Inserting and Deleting Elements
   Using resize() is a convenient way to increase the size of a vector by a large number of elements that all require the same value, but it
   would quickly become tedious if that was the only way to add or delete elements, especially single values. However, the vector container
   provides a number of methods for the addition and deletion of particular elements.

   For adding a single element to the end of a vector, the method push_back() is used. It is used with the following calling syntax:
   
   1void push_back( const TYPE& val )

   This code appends the element val to the end of the vector. Similarly, to remove a single element from the end of a vector, the function
   pop_back() is used:

   1voidvoid pop_back();
   */

#include <iostream>
#include <vector>
#include <cstdlib>

int main(int argc, char** argv) {
  
  // Initialize empty vector of integers
  std::vector<int> vectorOne;

  // use push_back() to add 10 random integers to the vector
  for (long index=0; index<10; ++index) vectorOne.push_back(rand());
  
  // display contents of vector
  std::cout << "vectorOne contains the following elements:" << std::endl;
  for (long index=0; index<(long)vectorOne.size(); ++index) std::cout << vectorOne.at(index) << " ";
  std::cout << std::endl << std::endl;

  // add two more elements to the vector using push_back()
  for (long index=0; index<2; ++index) vectorOne.push_back(rand());

  // display contents of vector
  std::cout << "vectorOne now contains the following elements:" << std::endl;
  for (long index=0; index<(long)vectorOne.size(); ++index) std::cout << vectorOne.at(index) << " ";
  std::cout << std::endl << std::endl;

  // remove the last 9 elements of the vector using pop_back()
  for (long index=0; index<9; ++index) vectorOne.pop_back();

  // display contents of vector
  std::cout << "vectorOne now contains the following elements:" << std::endl;
  for (long index=0; index<(long)vectorOne.size(); ++index) std::cout << vectorOne.at(index) << " ";
  std::cout << std::endl << std::endl;


  return 0;
  }
