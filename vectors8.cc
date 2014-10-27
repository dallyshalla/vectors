/*
   The second major method for multiple assignment is the function swap(). This function, as its name suggests, swaps the content of one
   vector with another. The calling syntax is:

   1void swap( container& source );


   You should note well the fact that this function really does swap the vectors - the contents of source wind up in the calling vector,
   and the contents of the calling vector wind up in source. The following swaps the contents of one vector for another:

   */


#include <iostream>
#include <vector>
#include <string>

int main(int argc, char** argv) {
  
    std::vector<std::string> vectorOne, vectorTwo;
    vectorOne.push_back("I'm first");
    vectorTwo.push_back("I'm second");
    
    // display contents of vectorOne
    std::cout << "vectorOne ";
    for(std::vector<std::string>::iterator index=vectorOne.begin(); index!=vectorOne.end(); ++index) {
      std::cout << *index;
    }
    std::cout << std::endl;

    // display contents of vectorTwo
    std::cout << "vectorTwo ";
    for (std::vector<std::string>::iterator index=vectorTwo.begin(); index!=vectorTwo.end(); ++index) {
      std::cout << *index;
    }
    std::cout << std::endl << std::endl;
    
    // swap vector contents
    std::cout << "Using swap() to exchange contents of vectorOne and vectorTwo." << std::endl << std::endl;
    vectorOne.swap(vectorTwo);
    
    // display contents of vectorOne
    std::cout << "vectorOne ";
    for (std::vector<std::string>::iterator index =vectorOne.begin(); index!=vectorOne.end(); ++index) {
      std::cout << *index;
    }
    std::cout << std::endl;
    
    // display contents of vectorTwo
    std::cout << "vectorTwo ";
    for (std::vector<std::string>::iterator index=vectorTwo.begin(); index!=vectorTwo.end(); ++index) {
      std::cout << *index;
    }
    std::cout << std::endl << std::endl;
    
    return 0;
}
