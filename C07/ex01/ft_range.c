#include <stdlib.h>

int *ft_range(int min, int max) {
    int data=min;
    if(min>=max) {
        return NULL;
    }
    int *arr = malloc((max-min) * sizeof(int));
    for(int i=0; i<(max-min); i++) {
        arr[i]=data++;
    }
    return arr;
}