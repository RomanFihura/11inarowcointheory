#include <iostream>
#include <random>
#include <vector>
#include "func.h"
#include <numeric>
float expect_near(float result, float expected);
uint32_t attempt();
int main()
{
	for (uint32_t j=0;j<1000;j++)
	{
		sample.push_back(attempt());
	}
	float avg=0,avg2=0;
	avg=std::accumulate(sample.begin(), sample.end(), 0);
	float expected = pow(0.5, 11);
	avg = avg / sample.size();
	avg = 1 / avg;
	std::cout << "abs_error " << expect_near(avg, expected);
	
	return 0;
}
