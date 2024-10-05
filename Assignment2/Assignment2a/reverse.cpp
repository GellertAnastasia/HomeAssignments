#include "reverse.h"

void reverse(int arr[], int size, char buffer)
{
	int i;
	for(i = 0; i < size/2; i++)
        {
               	buffer = arr[i];
               	arr[i] = arr[size - i - 1];
               	arr[size - i - 1] = buffer;
	}
}
