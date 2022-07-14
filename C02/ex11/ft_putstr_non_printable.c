#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_putstr_non_printable(char *str) {
    for(int i=0; str[i]!='\0'; i++) {
        if(str[i]>=32 && str[i]<=126) {
            ft_putchar(str[i]);
        }
        else {
            ft_putchar('\\');
            ft_putchar(' тут уже не знаю :( 16ричная система, это 0123456789ABCDEF, а как эту сделать для задания, не понимаю ');
        }
    }
}