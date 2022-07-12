
// ^^^^ где заголовочный файл? Программа не скомпилировалась 

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_comb(void) {
    char one = '0';
    char two = '1';
    char three = '2';
    while(one<='7') {
        two = one + 1;
        while(two<='8') {
            three = two + 1;
            while(three<='9') {
                ft_putchar(one);
                ft_putchar(two);
                ft_putchar(three);
                if(one=='7' && two=='8' && three=='9') {
                    return ;
                }
                ft_putchar(',');
                ft_putchar(' ');
                three++;
            }
            two++;
        }
        one++;
    }
}