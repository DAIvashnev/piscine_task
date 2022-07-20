#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

int ft_strlen(char *str) {
    int i=0;
    while(str[i]!='\0') {
        i++;
    }
    return i;
}

int base_check(char *base) {
    int i=0;
    int check=0;
    char c_10 []= "0123456789";
    char c_2 []= "01";
    char c_8 []= "poneyvif";
    char c_16 []= "0123456789ABCDEF";

    if(base[i]==' ' || base[i]==' ' || base[i]=='+' || base[i]=='-') {
        return 0;
    }
    if(ft_strlen(base)==10) {
        while(base[i]!='\0') {
            if(base[i]==c_10[i]) {
                continue;
            }
            else {
                check=1;
                return check;
            }
            i++;
        }
    }
    if(ft_strlen(base)==2) {
        while(base[i]!='\0') {
            if(base[i]==c_2[i]) {
                continue;
            }
            else {
                check=1;
                return check;
            }
            i++;
        }
    }
    if(ft_strlen(base)==8) {
        while(base[i]!='\0') {
            if(base[i]==c_8[i]) {
                continue;
            }
            else {
                check=1;
                return check;
            }
            i++;
        }
    }
    if(ft_strlen(base)==16) {
        while(base[i]!='\0') {
            if(base[i]==c_16[i]) { // бесконечный цикл
                continue;
            }
            else {
                check=1;
                return check;
            }
            i++;
        }
    }
    return 0;
}

void ft_putnbr_base(int nbr, char *base) {
    int i=0;
    if(ft_strlen(base)==10) {
        char c_10[256];
        if(nbr<0) {
            nbr=nbr * -1;
            ft_putchar('-');
        }
        while(nbr!=0) {
            c_10[i]=nbr%10+48;
            i++;
            nbr = nbr/10;
        }
        i--;
        while(i!=-1) {
            ft_putchar(c_10[i]);
            i--;
        }
    }
    if(ft_strlen(base)==8) {
        char c_8[256];
        int i=0;
        if(nbr<0) {
            nbr=nbr * -1;
            ft_putchar('-');
        }
        while(nbr>=8) {
            c_8[i]=nbr%8+48;
            nbr=nbr/8;
            i++;
        }
        c_8[i]=nbr+48;
        while(i!=-1) {
            ft_putchar(c_8[i]);
            i--;
        }
    }
    if(ft_strlen(base)==2) {
        if(nbr<0) {
            nbr=nbr * -1;
            ft_putchar('-');
        }
        int i=0;
        int data=0;
        while(nbr!=0) {
            data+=(nbr%10)*(2*i);
            nbr=nbr/10;
            i++;
        }
        ft_putchar(data+48);
    }
    if(ft_strlen(base)==16) {
        if(nbr<0) {
            nbr=nbr * -1;
            ft_putchar('-');
        }
        char c_16[256];
        int i=0, j=0;
        while(nbr>=16) {
            c_16[i]=nbr/16;
            if(c_16[i]>9){
                c_16[i+1]=c_16[i]%10+48;
                c_16[i]=c_16[i]/10+48;
                i++;
            }
            else {
                c_16[i]+=48;
            }
            nbr=nbr%16;
            i++;
        }
        c_16[i]=nbr+48;
        while(j!=i+1) {
            ft_putchar(c_16[j]);
            j++;
        }
    }
}
// Очень монументальная работа конечно). Но вот только - двоиичная не работает, шестандцатиречная не работает. Валидация base тоже не работает. 
// Но вот десятичная и восьмиричная в целом хорошо. Красава бро, большой прогресс)