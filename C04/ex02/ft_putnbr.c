#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_putnbr(int nb) {
    int i=0;
    char str[256];
    if(nb < -32768 || nb > 32767) {
        if(nb > 32768){
            ft_putchar('3'); ft_putchar('2'); ft_putchar('7'); ft_putchar('6'); ft_putchar('7');
        }
        else {
            ft_putchar('-'); ft_putchar('3'); ft_putchar('2'); ft_putchar('7'); ft_putchar('6'); ft_putchar('8');
        }
        return ;
    }
    if(nb==0) {
        ft_putchar('0');
    }
    if(nb<0) {
        nb=nb * -1;
        ft_putchar('-');
    }
    while(nb!=0) {
        str[i]=nb%10+48;
        i++;
        nb/=10;
    }
    i--;
    while(i!=-1) {
        ft_putchar(str[i]);
        i--;
    }
}