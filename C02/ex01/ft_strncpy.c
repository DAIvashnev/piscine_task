char *ft_strncpy(char *dest, char *src, unsigned int n) {
    unsigned int check=0;
    for(unsigned int i=0; src[i]!='\0'; i++) {
        dest[i]=src[i];
        check++;
    }
    while(check<n) {
        dest[check]='\0';
        check++;
    }
    return dest;
}