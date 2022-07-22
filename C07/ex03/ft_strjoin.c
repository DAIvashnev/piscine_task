//тоже никак
//#include <stdio.h>
#include <stdlib.h>

int strlen(char *str) {
    int i=0;
    while(str[i]!='\0') {
        i++;
    }
    return i;
}

char *strcpy(char *s1, char *s2) {
    int i=strlen(s1);
    int j=0;
    while(s2[j]!='\0') {
        s1[i]=s2[j];
        j++;
    }
    s1[j]='\0';
    return s1;
}

char *ft_strjoin(int size, char **strs, char *sep) {
    if(size==0) {
        strs=malloc(0 * sizeof(char));
        return *strs;
    }
    *strs = malloc(size * sizeof(char*));
    int i=0;
    while(i<size) {
        strs[i]=strcpy(strs[i],strs[i+1]);
        i++;
    }
    return *strs;
}

/*int main() {
    int s=3;
    char sep = " ";
    char strs = malloc(s * sizeof(char));
    strs[0] = "Hello";
    strs[1] = "World";
    strs[2] = "I live";
    char *result = ft_strjoin(s, strs, sep);
    printf("%s", result);
    free(result);
    return 0;
}*/