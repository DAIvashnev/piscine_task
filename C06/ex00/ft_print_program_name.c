#include <unistd.h>

void ft_putstr(char *str) {
    int i=0;
    while(str[i]!='\0') {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char *argv[]) {
    for(int i=0; i<argc; i++) {
        ft_putstr(argv[i]);
    }
    ft_putstr("\n");
    return 0;
}