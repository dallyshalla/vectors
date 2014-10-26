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
    
    //size determines index bounday = 5)
                                                              vectors2.cc
