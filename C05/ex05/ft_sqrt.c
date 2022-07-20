int ft_sqrt(int nb) {
    int result=0, data=2;
    if(nb<=0) {
        return result;
    }
    if(nb==1) {
        return result+1;
    }
    for(int i=0; i<nb; i++) {
        if(data*data==nb) {
            return data;
        }
        data++;
    }
    return result;
}