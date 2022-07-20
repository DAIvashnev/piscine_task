int ft_is_prime(int nb) {
    if(nb<0) {
        return 0;
    }
    if (nb > 1) {
        for(int i=2; i<nb; i++) {
            if (nb%i==0) { 
              return 0;
            }
        }
    }
    return 1;
}

int ft_find_next_prime(int nb) {
    while(1) {
        if(ft_is_prime(nb)==1) {
            return nb;
        }
        nb++;
    }
    return 0;
}