#include <iostream>

using namespace std;

int main()
{
	int accumulator = 0 ;
	
	for(int low = 1, high = 1, sum = 0 ; high <= 4000000 ;)
	{
		sum = low+high;
		low = high;
		high = sum;
		
		if(sum % 2 == 0)
		{
			accumulator += sum;
		}
	}
	
	cout << accumulator << endl;
}
