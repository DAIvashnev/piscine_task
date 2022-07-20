int ft_iterative_factorial(int nb) {
    int result=1;
    if(nb<0) {
        return 0;
    }
    for(int i=1; i<=nb; i++) {
        result *= i;
    }
    return result;
}