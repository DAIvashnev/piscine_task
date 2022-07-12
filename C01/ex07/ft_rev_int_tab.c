void ft_rev_int_tab(int *tab, int size) {
    for(int i=0; i<size/2; i++) {
        int temp = tab[i];
        tab[i] = tab[size-i-1];
        tab[size-i-1] = temp;
    }
}