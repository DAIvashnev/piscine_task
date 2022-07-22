#include <stdlib.h>

int strlen(char *str) {
    int len=0;
    while(str[len]!='\0'){
        len++;
    }
    return len;
}

char *ft_strdup(char *src) {
    char *str_2 = malloc((strlen(src)+1) * sizeof(char));
    for(int i=0; i<strlen(src); i++) {
        str_2[i]=src[i];
    }
    str_2[strlen(src)]='\0';
    return str_2;
}