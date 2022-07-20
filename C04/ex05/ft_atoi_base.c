//compilу me мур-мур-мур :3
#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

int main() {
    ft_putchar(58);
    ft_putchar(51);
    return 0;
}