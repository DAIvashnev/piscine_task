#include <ctype.h>

char *ft_strlowcase(char *str) {
    for(int i=0; str[i]!='\0'; i++) {
        str[i]=tolower(str[i]);
    }
    return str;
}