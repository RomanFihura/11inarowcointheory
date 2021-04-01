#pragma once
std::vector<int> sample;
std::random_device rd;
std::mt19937 gen1(rd());
uint32_t attempt()
{
	int random, tails = 0, heads = 0;
	for (int i = 0; ; i++)
	{
		random = gen1() % 2;
		if (random == 1)
			heads++;
		else
			heads = 0;
		if (random == 0)
			tails++;
		else
			tails = 0;
		if (tails == 11 || heads == 11)
		{
			if (tails == 11) {
				return i;
			}
			if (heads == 11) {
				return i;
			}
		}
	}
}
float expect_near(float result, float expected)
{
	return abs(result - expected);
}
