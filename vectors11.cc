#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

int main(int argc, char** argv)
{  
    int dInputs(0);
    int locationOfFind(0);
    bool intFound = false;
    int answer(0);
    // Initialize int with 0
    int push(0);
    int secondState(0);
    // Initialize vector type int
    std::vector<int> dDatas;
    std::cout << "Enter a number that is not 10 to enter" << std::endl;
    for (int i=0; i<1; i++)
    {
      int j(0);
      std::cin >> j;
      if(j == 10)
      {
        i = -10;
      }
      else i = 50;
    }
    do
    {
    std::cout << "1. add data" << std::endl;
    std::cout << "2. output " << dDatas.size() << std::endl;
    std::cout << "3. find if a number exists and where" << std::endl;
    std::cout << "900. exit" << std::endl;
    try {
    
        std::cin >> dInputs;
    }
    catch(...) {}

    if(dInputs == 1)
    {
    
     // Request by the program in human format
     std::cout << " enter a data of type int " << std::endl;

     // Collect the input with cin and store it in int push
     std::cin >> push;

     // Put the input from push onto the end of the vector
     dDatas.push_back(push);
    
     // Display the element at index 0, so the first element in the vector
     std::cout << dDatas.at(0) << std::endl;

    }
    if(dInputs == 2)
    {
      for (long index=0; index<(long)dDatas.size(); ++index)
      {
        std::cout << dDatas.at(index) << std::endl;
      }
    }
    if(dInputs == 3)
    {
        std::cin >> answer;
        for (long index=0; index<(long)dDatas.size(); ++index)
        {
            if(dDatas.at(index) == answer)
            {
              locationOfFind = index;
              index = dDatas.size();
              intFound = true;
            }
        }
        if(intFound == true)
        {
          std::cout << dDatas.at(locationOfFind) << std::endl;
          intFound = false;
        }
    } 
    if(dInputs == 900)
    {
      secondState = 2;
    } 
    } while(secondState != 2);
    
    // End the program
    return 0;
}
