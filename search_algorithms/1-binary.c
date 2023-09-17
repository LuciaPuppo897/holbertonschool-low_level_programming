#include <stddef.h>
#include "search_algos.h"
/**
 *binary_search - searchs in binary form
 *@array: the array to search on
 *@size: size of the array
 *@value: the vlaue to search for
 *Return: index of value or -1 if NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int i;
	int left = 0;
	int right = (int)size - 1;
    
	if (array == NULL || size == 0)
    {
    return (-1);
    }

    while (left <= right)
    {
    int mid = left + (right - left) / 2;

    printf("Searching in array: ");
    for (i = left; i <= right; i++)
        {
			printf("%d", array[i]);
        }
        printf("\n");

        if (array[mid] == value)
        {
            printf("Found %d at index %d.\n", value, mid);
            return (mid);
        }
        else if (array[mid] < value)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return (-1);
}

