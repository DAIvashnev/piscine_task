int ft_iterative_power(int nb, int power) {
    int result=nb;
    if(power<0) {
        return 0;
    }
    if(power==0) {
        return 1;
    }
    if(power>1) {
        for(int i=2; i<=power; i++) {
            result *= nb;
        }
    }
    return result;
}