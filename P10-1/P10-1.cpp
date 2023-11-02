// P10-1
// Wesley Casselman
// All Souls' Day of 2023

#include <iostream>
#include <string>

using namespace std;

int count_letters(string str);

int main(void)
{
	cout << count_letters("asdf.ah/.filyifsdf");

	return 0;
}

int count_letters(string str)
{
	int letters = 0;
	
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
			letters++;
	}
	return letters;
}