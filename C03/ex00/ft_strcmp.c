int ft_strcmp(char *s1, char *s2) {
    int f=0;
    for(int i=0; s1[i]!='\0'; i++) {
        if(s1[i]==s2[i] && (s1[i]!='\0' || s2[i]!='\0')) {
            f++;
        }
    }
    return s1[f]-s2[f];
}

// Функция работает некорректно. 
// Варианты тестовых данных:
// Hello / hello , hello / Hello , Hello / Hollo , "Hello World" / "Govno World"