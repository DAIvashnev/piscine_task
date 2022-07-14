int ft_str_is_uppercase(char *str) {
    for(int i=0; str[i]!='\0'; i++) {
        if(str[i]<65 || str[i]>90) {
            if(str[i]==' ') {
                continue;
            }
            return 0;
        }
    }
    if(str[0]=='\0') {
        return 1;
    }
    return 1;
}