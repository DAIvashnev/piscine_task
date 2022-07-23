#include "ft_stock_str.h"
#include <stdlib.h>

int strlen(char *str) {
    int i=0;
    while(str[i]!='\0') {
        i++;
    }
    return i;
}

char *strdup(char *str) {
    int i=0;
    char *r_str = malloc((strlen(str)+1) * sizeof(char));
    if(r_str[i]=="") {
        return NULL;
    }
    while(str[i]!='\0') {
        r_str[i]=str[i];
        i++;
    }
    r_str[i]='\0';
    return r_str;
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av) {

    //тут не понимаю что писать, бро.

}