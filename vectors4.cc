/*  reserve() is to capacity() as resize() is to size(). It causes a reallocation of
 *  memory so that the vector will hold (at minimum) the specified number of elements.
 *  In programs that have a lot of insertions into vectors, using reserve wisely can
 *  help boost performance substantially, especially if the vectors in question are
 *  quite large. The following code brings together size(), capacity(), resize() and
 *  reserve() to show some simple vector allocation operations.

 */

#include <iostream>
#include <vector>
#include <cstdlib>

int main(int argc, char** argv) {
    
    // initialize vector of integers with 20 elements
    std::vector<int> vectorOne(10);
    
    // display size and capacity of vector
    std::cout << "size of vectorOne is: " << vectorOne.size() << " elements." << std::endl;
    std::cout << "Capacity of vectorOne is: " << vectorOne.capacity() << " elements." << std::endl;
      
      // put some random data into the vector using at()
    for (long index=0; index<(long)vectorOne.size(); ++index) {
    vectorOne.at(index)=rand();
    }

    // display vector contents
    std::cout << "vectorOne contains the following elements:" <<
      std::endl;
    for(long index=0; index<(long)vectorOne.size(); ++index) {
      std::cout << vectorOne.at(index) << " ";
    }
    std::cout << std::endl << std::endl;

    // reserve more space for the vector and repeat
    std::cout << "Using reserve to reallocate vectorOne with enough storage for 40 elements." << std::endl;

    vectorOne.reserve(40);

    // display size and capacity of vector
    std::cout << "Size of vectorOne is:" << vectorOne.size() << " elements." << std::endl;
    std::cout << "Capacity of vectorOne is:" << vectorOne.capacity() << " elements." << std::endl;

    // put some random data into the vector using at()
    for (long index=0; index<(long)vectorOne.size(); ++index) {
      vectorOne.at(index)=rand();
    }

    // display vector contents
    std::cout << "vectorOne contains the following elements:" << std::endl;
    for (long index=0; index<(long)vectorOne.size(); ++index) {
      std::cout << vectorOne.at(index) << " ";
    }
    std::cout << std::endl << std::endl;

    // add elements to vector using resize
    std::cout << "Using resize to increase size of vector to 15 elements, with new elements set to 0." <<
      std::endl;

    vectorOne.resize(15,(int)0);

    // display size and capacity of vector
    std::cout << "Size of vectorOne is:" << vectorOne.size() << " elements." << std::endl;
    std::cout << "Capacity of vectorOne is: " << vectorOne.capacity() << " elements." << std::endl;

    // put some random data into the vector u sing at()
    for (long index=0; index<(long)vectorOne.size(); ++index) {
      vectorOne.at(index)=rand();
    }

    // display vector contents
    std::cout << "vectorOne contains the following elements:" << std::endl;
    for (long index=0; index<(long)vectorOne.size(); ++index) {
      std::cout << vectorOne.at(index) << " "; 
    }
    std::cout << std::endl << std::endl;

    // remove elements from vector using resize
    std::cout << "Using resize to decrease size of vector to 5 elements." << std::endl;
    vectorOne.resize(5);

    // display size and capacity of vector
    std::cout << "Size of vectorOne is: " << vectorOne.size() << " elements." << std::endl;
    std::cout << "Capacity of vectorOne is: " << vectorOne.capacity() << " elements." << std::endl;

    // put some random data into the vector using at()
    for (long index=0; index<(long)vectorOne.size(); ++index) {
      vectorOne.at(index)=rand();
    }

    // dislay vector contents
    std::cout << "vectorOne contains the following elements:" << std::endl;
    for (long index=0; index<(long)vectorOne.size(); ++index) {
      std::cout << vectorOne.at(index);
    }
    std::cout << std::endl << std::endl;

    return 0;


}
