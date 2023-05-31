#include <iostream>
#include <math.h> 
#include <stdlib.h>
#include <time.h>   
using namespace std;

int main()
{
	int i, j, n=10, temp;
	int bubbleArray [n];
	
	srand (time(NULL));
	
	cout << "randomly generated list: ";
	for (i = 0; i < 10; i++)
	{
		bubbleArray[i] = rand() % 999 + 1;
		cout << bubbleArray[i] << " ";
	}
	cout << "\n";
	cout << "\nbubble sort: ";
	i = 0;
	j = 0;
	do	{
		j= n-1;
		do {
			if (bubbleArray[j-1] > bubbleArray[j])
				{
					temp = bubbleArray[j-1];
   					bubbleArray[j-1] = bubbleArray[j];
    				bubbleArray[j] = temp;
				}
			else
			j = j-1;
		} while (j > i);
		i = i+1;
		cout << bubbleArray[j] << " ";
	} while (i <= n);
	
	
	return 0;
}