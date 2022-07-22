// тут не получилось бро, не понял что к чему

/*#include <stdio.h>*/
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max) {
    int data=min;
    if(min>=max) {
        return NULL;
    }
    if(range==0) {
        return -1;
    }
    int *arr = malloc(**range * sizeof(int));
    for(int i=0; i<(max-min); i++) {
        arr[i]=data++;
    }
    return arr;
}

/*int main() {
    int min=5;
    int max=15;
    int r=5;
    int *min_max = ft_ultimate_range(r,min,max);
    for(int i=0; i<max-min; i++) {
        printf("%d ", min_max[i]);
    }
    free(min_max);
    return 0;
}*/