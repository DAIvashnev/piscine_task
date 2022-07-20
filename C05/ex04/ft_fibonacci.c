int ft_fibonacci(int index) {
    int result=0;
    if(index<0) {
        return 0;
    }
    if(index<2) {
        return index;
    }
   return result = ft_fibonacci(index-2)+ft_fibonacci(index-1);
}