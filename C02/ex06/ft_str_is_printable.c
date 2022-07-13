#include <string.h>

int ft_str_is_printable(char *str) {
    for(int i=0; str[i]!='\0'; i++) {
        if(!(str[i]>=32 && str[i]<=126)) {
            if(str[i]==' ') {
                continue;
            }
            return 0;
        }
    }
    if(str[0]=='\0' && strlen((str)-1)=='\0') {
        return 1;
    }
    return 1;
}