#pragma once
std::vector<int> sample;
void attempt()
{
 int random;
 int rewka = 0, orel = 0;
 for (int i = 0; ; i++)
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