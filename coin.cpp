#include <iostream>
#include <cstdlib>
#include <ctime> // содержит time()
int main()
{
 int randomDigits[10000] = {};
 srand(time(NULL));
 int rewka=0, orel=0;
 for (int i = 0; i < 10000; i++)
 {
  randomDigits[i] = rand()%2;
  if (randomDigits[i] == 1)
   orel++;
  else
   orel = 0;
  if (randomDigits[i] == 0)
   rewka++;
  else
   rewka = 0;
  if (rewka == 11 || orel == 11)
  {
   if (rewka == 11) {
    std::cout << "Attempt number: " << i << " 11 " << "rewka in a row";
    return 0;
    
   }
   if (orel == 11) {
    std::cout << "Attempt number: " << i << " 11 " << "orel in a row";
    return 0;
   }
  }
 }
 return 0;
}