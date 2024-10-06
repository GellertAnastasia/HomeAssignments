/* Anastasia Gellert st130144@student.spbu.ru
        assignment 2a
*/

#include "reverse.h"

void reverse(char arr[], int size)
{
    int i;
    char x;
    for(i = 0; i < size/2; i++)
    {
        x = arr[i];
	arr[i] = arr[size - i - 1];
       	arr[size - i - 1] = x;
    }
}
