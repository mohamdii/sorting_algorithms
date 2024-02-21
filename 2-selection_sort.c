#include "sort.h"
/**
 * selection_sort - implements selection sort alg
*/
void selection_sort(int *array, size_t size)
{
    int tmp;
    size_t i, j;

    if(array == NULL)
        return NULL;
    for(i=0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            if(*(array + i) >*(array +j))
            {
                tmp = *(array + i);
                *(array + i) = *(array + j);
                *(array + j) = tmp;
            }
        }
    }
}