int ft_str_is_alpha(char *str) {
    for(int i=0; str[i]!='\0'; i++) {
        if((str[i]<97 || str[i]>122) && (str[i]<65 || str[i]>90)) {
            if(str[i]==' ') { // Пробел - это не буквенный символ. В задании четко указано - "only alphabetical characters"
                continue;
            }
            return 0;
        }
    }
    return 1;
}