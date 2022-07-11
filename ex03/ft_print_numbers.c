void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_numbers(void) {
    char n = '0';
    while(n<='9') {
        ft_putchar(n);
        n++;
    }
}