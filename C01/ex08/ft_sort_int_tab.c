void ft_sort_int_tab(int *tab, int size) {
    int j=1;
    int temp;
    for(int i=0; i<size; i++) {
        while(j<size) {
            if(tab[i]>tab[j]) {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
            j++;
        }
        j=i+1;
    }
}