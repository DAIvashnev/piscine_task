#include <unistd.h>

void ft_putstr(char *str) {
    int i=0;
    while(str[i]!='\0') {
        write(1, &str[i], 1);
        i++;
    }
}

int ft_strcmp(char *s1, char *s2) {
    int i=0;
    while(s1[i]!='\0' || s2[i]!='\0') {
        if(s1[i]>s2[i] || s1[i]<s2[i]) {
            return s1[i]-s2[i];
        }
        i++;
    }
    return 0;
}

void swap(char **a, char **b) {
    char *temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main(int argc, char *argv[]) {
    for(int i=1; i<argc-1; i++) {
        for(int j=1; j<argc-1; j++) {
            if(ft_strcmp(argv[j], argv[j+1])>0) {
                swap(&argv[j], &argv[j+1]);
            }
        }
    }
    for(int i=0; i<argc; i++) {
        ft_putstr(argv[i]);
        ft_putstr(argv[1]="");
        if(i!=1) {
            ft_putstr("\n");
        }
    }
    return 0;
}