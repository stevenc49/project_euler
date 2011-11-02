#include <iostream>

using namespace std;

int main()
{
	// Value to factor is 600851475143
	unsigned long long int value = 600851475143ULL;

	unsigned long long factor = 0ULL;

	cout << value << endl;

	for(int i = 2; value != 1; i++)
	{
		if(value%i == 0)
		{
			while (value%i == 0)
			{
				value = value/i;
	
				if(i > factor)
					factor = i;
			}
		}
	}

	cout << factor << endl;

	return 0;
}
