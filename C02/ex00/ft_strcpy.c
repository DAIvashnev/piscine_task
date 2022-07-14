char *ft_strcpy(char *dest, char *src) {
    int check=0;
    for(int i=0; src[i]!='\0'; i++) {
        dest[i] = src[i];
        check++;
    }
    dest[check] = '\0';
    return dest;
}