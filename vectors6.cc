/* 
   It's perfectly reasonable to assume that, at some point, someone is going to need to insert or remove an element at a specific location
   other than the very end. The vector container provides methods for doing so: insert() and erase(). These are both very handy functions,
   but they require the use of iterators, which some may be unfamiliar with. Iterators are used to access elements of the STL containers. I
   won't go into much detail on them (they definitely warrant a tutorial of their own), but for the moment, they can be though of like
   pointers - they represent an address within a container, and it is possible to dereference an iterator to access a particular element
   within the container. The calling syntax for insert() is as follows:

   1iterator insert( iterator location, const TYPE& value );
   2void insert( iterator locatio, size_type number, const TYPE& value );
   3void insert( iterator location, input_iterator start, input_iterator end );

   The first inserts the element value before the location location, returning an iterator to the newly inserted element (note that you
   don't actually need to do anything with the return value, nor even specify storage for it in the code, unless there is something specific
   that you're going to do to the new element). The second line inserts number copies of the element value before the location location. The
   third inserts the values from start to end before the location location. The iterators start and end can refer to a different vector,
   making this syntax useful for copying some or all of the contents of one vector into another.

   The function erase() is called with any of the following syntaxes:

   1iteratoriterator erase( iterator location );
   2voiditerator erase( iterator start, iterator end );


   The first deletes the element at location location, while the second deletes the elements from start to end. Both return an iterator to
   the last element following the ones that were erased. The code that follows demonstrates the use of insert() and delete():

   */

#include <iostream>
#include <vector>
#include <cstdlib>

int main(int argc, char** argv) {
  
  // Initialize empty vector of integers
  std::vector<int> vectorOne;
  std::vector<int> vectorTwo;

  // use push_back() to add 10 random integers from 0-4 to vectorOne
  for (long index=0; index<10; ++index) vectorOne.push_back(rand()%5);
  
  // use push_back() to add 10 random integers from 5-9 to vectorOne
  for (long index=0; index<10; ++index) vectorTwo.push_back(5+rand()%5);

  // display contents of vectorOne
  std::cout << "vectorOne contains the following elements:" << std::endl;
  for (long index=0; index<(long)vectorOne.size(); ++index) std::cout << vectorOne.at(index) << " ";
  std::cout << std::endl;

  // display contents of vectorTwo
  std::cout << "vectorTwo contains the following elements:" << std::endl;
  for (long index=0; index<(long)vectorTwo.size(); ++index) std::cout << vectorTwo.at(index) << " ";
  std::cout << std::endl;

  std::cout << std::endl << "inserting middle 6 elements from vectorone into vectorTwo, then erasing them.." << std::endl << std::endl;

  // insert middle 6 elements from vectorOne into vectorTwo...
  vectorTwo.insert(vectorTwo.begin()+5, vectorOne.begin()+2, vectorOne.end()-2);
  
  // ...then erase those elements from vectorOne
  vectorOne.erase(vectorOne.begin()+2, vectorOne.end()-2);
  
  // display contents of vectorOne
  std::cout << "vectorOne now contains the following elements:" << std::endl;
  for (long index=0; index<(long)vectorOne.size(); ++index) std::cout << vectorOne.at(index) << " ";
  std::cout << std::endl;

  // display contents of vectorTwo
  std::cout << "vectorTwo now contains the following elements:" << std::endl;
  for (long index=0; index<(long)vectorTwo.size(); ++index) std::cout << vectorTwo.at(index) << " ";
  std::cout << std::endl;

  std::cout << std::endl << "erasing the third element from vectorTwo, and inserting a zero at the front." << std::endl << std::endl;

  // erase third element (index=2) and insert a zero at start (index=0)
  vectorTwo.erase(vectorTwo.begin()+2);
  vectorTwo.insert(vectorTwo.begin(), 0);

  // display contents of vectorTwo
  std::cout << "vectorTwo now contains the following elements:" << std::endl;
  for (long index=0; index<(long)vectorTwo.size(); ++index) std::cout << vectorTwo.at(index) << " ";
  std::cout << std::endl;

  return 0;
}
