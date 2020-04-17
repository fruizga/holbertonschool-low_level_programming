#include "search_algos.h"
#include <math.h>
/**
 * 
 * 
 * 
 * 
 * 
 */
int jump_search(int *array, size_t size, int value)
{
        size_t i = 0, x;
        size_t m = sqrt(size);

        if (!array || size == 0)
	{return (-1); }

        while(array[m] <= value && m < size) { 
        
        i = m;  
        m += sqrt(size);
        if(m > size - 1)  
                return -1; 
        }

        for(x = i; x<m; x++) { 
        if(array[x] == value)
                return x;  
        }
        return -1;
}