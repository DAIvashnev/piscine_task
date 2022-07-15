char *ft_strcapitalize(char *str) {
    for(int i=1; str[i]!='\0'; i++) {
        if(str[0]>90) {
            str[0]-=32;
        }
        if(str[i]>=65 && str[i]<=90) {
            str[i]+=32;
        }
        if(str[i]>=97 && str[i]<=122 && str[i-1]<65) {
            str[i]-=32;
        }
    }
    return str;
}

// Salut, Comment Tu Vas ? 42Mots Quarante-Deux; Cinquante+Et+Un
//                         ^^эта буква "м" должна была остаться маленькой.