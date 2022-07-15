unsigned int ft_strlcpy(char *dest, char *src, unsigned int size) {
    unsigned int check=0;
    for(int i=0; src[i]!='\0'; i++) {
        check++;
    }
    if(size>0) {
        for(unsigned int i=0; src[i]!='\0' && i < size-1; i++) {
            dest[i]=src[i];
        }
        dest[check]='\0'; // Segmentation faul. Я хочу в строку размером 5 скопировать 5 символов из строки размером 10. check = 10
    }
    return check;
}