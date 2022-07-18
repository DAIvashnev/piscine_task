int ft_atoi(char *str) {
  int i=0, data=0, f=0;
    if(str[i]==' ' || str[i]=='+' || str[i]=='-') {
        while((str[i]==' ' || str[i]=='+' || str[i]=='-') || (str[i]>=48 && str[i]<=57)) {
            if(str[i]=='-') {
                f=1;
            }
            if(str[i]>=48 && str[i]<=57) {
                data=data*10+str[i]-48;
            }
            i++;
        }
        if(f==1) {
            data=data * -1;
        }
    }
    if(str[i]>=48 && str[i]<=57) {
        while(str[i]>=48 && str[i]<=57) {
            data=data*10+str[i]-48;
            i++;
        }
    }
    if(data < -32768 || data > 32767) {
        if(data < -32768){
            
            return -32768;
        }
        else {
            return 32767;
        }
    }
    return data;
}