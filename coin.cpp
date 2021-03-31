#include <iostream>
#include <cstdlib>
#include <ctime> // time()
#include <vector>
#include <fstream>
#include "func.h"
void attempt();
int main()
{
 srand(time(NULL));
 for (int j=0;j<1000;j++)
 {
  attempt();
 }
 std::ofstream fout("sample.txt"); 
 for (int n = 0; n < sample.size();n++) {
  std::cout << n + 1 << ". " << "11 in a row on Attempt number: " << sample[n] << std::endl;
  fout << n + 1 << ". " << "11 in a row on Attempt number: " << sample[n] << std::endl;
 }
 int avg=0;
 for (int n = 0; n < sample.size(); n++)
 {
  avg += sample[n];
 }
 std::cout << "average attempt = " << avg / sample.size();
 fout << "average attempt = " << avg / sample.size();
 fout.close(); 
 return 0;
}