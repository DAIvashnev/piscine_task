void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_reverse_alphabet(void) {
    char ch_n = 'z';
    while(ch_n>='a') {
        ft_putchar(ch_n);
        ch_n--;
    }
}