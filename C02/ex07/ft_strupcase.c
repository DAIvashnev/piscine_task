#include <ctype.h>

char *ft_strupcase(char *str) {
    for(int i=0; str[i]!='\0'; i++) {
        str[i]=toupper(str[i]);
    }
    return str;
}