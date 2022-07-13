#include <ctype.h>

char *ft_strcapitalize(char *str) {
    for(int i=0; str[i]!='\0'; i++) {
        str[0]=toupper(str[0]);
        if(str[i-1]<65) {
            str[i]=toupper(str[i]);
        }
    }
    return str;
}