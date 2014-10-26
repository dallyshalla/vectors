vectors
=======

study vectors

.push_back() - adds a single element to the end of a vector.
  
    void push_back( const TYPE& val )
      
    This code appends the element val to the end of the vector
                                                              vectors5.cc
    
.pop_back() - remove a single element from the end of a vector.
    
    void pop_back();
                                                              vectors5.cc
   
.size() - returns the number of elements in the vector.
    
    std::vector<int> vectorOne(10,5);
    for (long index=0; index<(long)vectorOne.size(); ++index)
    
    //size determines index boundary = 10)
                                                              
    std::vector<int> vectorOne(10,5);
    std::cout << "Size of vector is " << vectorOne.size() << " elements." << std::endl;
    for (long index=0; index<(long)vectorOne.size(); ++index) {
      std::cout << "Element " << index << ": " << vectorOne.at(index) << std::endl;
    }
    /* OutPut:
        Size of vector is 10 elements.
        Element 0: 5
        Element 1: 5
        Element 2: 5
        Element 3: 5
        Element 4: 5
        Element 5: 5
        Element 6: 5
        Element 7: 5
        Element 8: 5
        Element 9: 5
      */
                                                           vectors2.cc
