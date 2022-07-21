#include <unistd.h>

void ft_putstr(char *str) {
    int i=0;
    while(str[i]!='\0') {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char *argv[]) {
    ft_putstr(argv[0]);
    ft_putstr("\n");
    for(int i=argc; i>2; i--) {
        ft_putstr(argv[i-1]);
        ft_putstr("\n");
    }
    return 0;
}