#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char str[100];
	int i;
	
	printf("enter your array: ");
	gets(str);
	
	
	if(str != ""){
	for(i=0 ; i<sizeof(str) ; i++){
		
		if(str[i]<=90 && str[i]>=65){	
		str[i] += 32;
	}
	
	else if(str[i]>=97 && str[i]<=122){
		str[i]-= 32;
	}
}
}
else{
	printf("invalid input");
}
printf("\n the output : ");
	puts(str);
	return 0;
}