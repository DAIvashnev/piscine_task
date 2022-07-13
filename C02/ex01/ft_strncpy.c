#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n) {
    strncpy(dest, src, n);
    dest[n]='\0';
    return dest;
}