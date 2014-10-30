/* Multi dimensional vectors */
#include <iostream>
#include <vector>


int main(int argc, char** argv)
{
    std::vector<std::vector<int> > datas;
    for (int i=0; i<11; ++i)
    {
      std::vector<int> row;
        for (int j=0; j<12; ++j)
        {
            row.push_back(i * j);
        }
        datas.push_back(row);
    }
    for (long index=0; index<(long)datas.size(); ++index)
    {
          for(long index2=0; index2<(long)datas[index].size(); ++index2)
          {
              std::cout << datas[index][index2] << std::endl;
          }
        std::cout << datas[index][index] << std::endl;
    }
    /* for (std::vector< vector<int> >::iterator it = datas.begin(); it != datas.end(); ++it)
    {
        it->push_back(j)} */ 
    return 0;
}
