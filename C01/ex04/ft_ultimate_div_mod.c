void ft_ultimate_div_mod(int *a, int *b) {
    int clone = *a;
    *a /= *b;
    *b = clone % *b;
}