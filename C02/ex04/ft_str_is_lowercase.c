int ft_str_is_lowercase(char *str) {
    for(int i=0; str[i]!='\0'; i++) {
        if(str[i]<97 || str[i]>122) {
            if(str[i]==' ') { // тоже самое
                continue;
            }
            return 0;
        }
        if(str[0]=='\0') {
            return 1;
        }
    }
    return 1;
}