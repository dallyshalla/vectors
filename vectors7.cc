/*
   Assigning Values to An Entire Vector
   Most of the techniques for assigning values to a vector dealt with to this point consider only assigning a value to a single element,
   or assigning multiple elements the same value. There are a couple of functions that allow for the en masse assignment of elements to a
   vector. The first is assign(). This function has the syntax:

   1void assign( size_type number, const TYPE& value );
   2void assign( input_iterator start, input_iterator end );


   The first version is used to fill a vector with number copies of the element value. This is especially useful when you've already
   declared a vector without assigning any values to it, and need to fill it up. The second version fills a vector with the elements
   between the iterators start and end. These can be iterators of belonging to another vector, which allows you to copy a portion of one
   vector into another (as we did with insert). In my experience, however, the most frequent use of the second form is to copy a raw array
   into a vector. This is especially useful when reading data from a stream into an array buffer (such as in the case of file I/O or user
   input), when you would really rather have it stored in a vector. The following code demonstrates both of the uses of assign, using it
   to fill an empty vector with multiple copies of a particular value, then reassign the vector with the elements stored in a static
array:

*/

#include <iostream>
#include <vector>
#include <cstdlib>

int main(int argc, char** argv) {
    
    // Initialize empty vector integers
    std::vector<int> vectorOne;

    // display contents of vectorOne
    std::cout << "vectorOne contains the following elements:" << std::endl;
    for (long index=0; index<(long)vectorOne.size(); ++index) std::cout << vectorOne.at(index) << " ";
    std::cout << std::endl << std::endl;

    // create a static array with 10 integer elements
    int arrayOne[] =  { 4, 2, 6, 3, 6, 3, 4, 6, 4, 3 };

    // use assign() to give vectorOne 5 copies of the integer 1
    std::cout << "Using assign() to fill with 5 copies of integer 1." << std::endl << std::endl;
    vectorOne.assign(5,1);

    // display contents of vectorOne
    std::cout << "vectorOne contains the following elements:" << std::endl;
    for (long index=0; index<(long)vectorOne.size(); ++index) std::cout << vectorOne.at(index) << " ";
    std::cout << std::endl << std::endl;

    // display contents of arrayOne - note the dangerous, dangerous [] usage
    std::cout << "arrayOne contains the following elements:" << std::endl;
    for (long index=0; index < 10; ++index) std::cout << arrayOne[index] << " ";
    std::cout << std::endl << std::endl;
    // assign contents of static array to the vector
    std::cout << "Assigning contents of arrayOne to vectorOne." << std::endl << std::endl;
    vectorOne.assign(arrayOne, arrayOne+10);

    // display contents of vectorOne
    std::cout << "vectorOne contains the following elements:" << std::endl;
    for (long index=0; index<(long)vectorOne.size(); ++index) std::cout << vectorOne.at(index) << " ";
    std::cout << std::endl;

    return 0;

  }
