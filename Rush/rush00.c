void ft_putchar(char c);

void rush(int x, int y) {
    char ugl = 'o';
    char step = '-';
    char low = '|';
    char space = ' ';
    for(int i=0; i<y; i++) {
        for(int j=0; j<x; j++) {
            if((i==0 && j==0) || (i==0 && j==x-1) || (i==y-1 && j==0) || (i==y-1 && j==x-1)) {
                ft_putchar(ugl);
            }
            else if((j!=0 && j!=x-1 && i==0) || i==y-1) {
                ft_putchar(step);
            }
            else if((i>0 && i<y-1) && (j==0 || j==x-1)) {
                ft_putchar(low);
            }
            else {
                ft_putchar(space);
            }
        }
        ft_putchar('\n');
    }
}