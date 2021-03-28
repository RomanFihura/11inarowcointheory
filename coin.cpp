#include <iostream>
#include <cstdlib>
#include <ctime> // time()
#include <vector>
#include <fstream>
std::vector<int> sample;
int main()
{
 int random;
 srand(time(NULL));
 int rewka=0, orel=0;
 for (int j=0;j<1000;j++)
 {
  for (int i = 0; i < 10000; i++)
  {
   random = rand() % 2;
   if (random == 1)
    orel++;
   else
    orel = 0;
   if (random == 0)
    rewka++;
   else
    rewka = 0;
   if (rewka == 11 || orel == 11)
   {
    if (rewka == 11) {
     sample.push_back(i);
     break;
    }
    if (orel == 11) {
     sample.push_back(i);
     break;
    }
   }
  }
 }
 std::ofstream fout("sample.txt"); 
 for (int n = 0; n < sample.size();n++) {
  std::cout << n + 1 << ". " << "11 in a row on Attempt number: " << sample[n] << std::endl;
  fout << n + 1 << ". " << "11 in a row on Attempt number: " << sample[n] << std::endl;
 }
 fout.close(); 
 return 0;
}