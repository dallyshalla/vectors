#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char** argv) {
    /*  Initialize vector of 10 copies of the integer 5 */
    vector<int> vectorOne(10,5);

 /*  run through the vector and display each element, if possible
          */
   for (int index=0; index<20; ++index) {
     if (vectorOne[index] > 0 && vectorOne[index] < 6) {
      cout << vectorOne[index] << endl;
     }
     else { index = 20; }
   }
     
    return 0;
}
