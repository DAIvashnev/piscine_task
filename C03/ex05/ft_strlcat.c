unsigned int	ft_strlcat(char *dest, char *src, unsigned int size) {
	unsigned i=0, j=0;
	while(dest[i]!='\0') {
		i++;
	}
	while(src[j]!='\0') {
		j++;
	}
	if(size==0 || size<=i) {
		return j+size;
	}
	j=0;
	while(src[j]!='\0' && i<=size-1) {
		dest[i]=src[j];
		i++;
		j++;
	}
	dest[i]='\0';
	return i;
}