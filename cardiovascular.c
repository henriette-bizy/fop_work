#include <stdio.h>v 
void check_input(char a){
	while(a!= 'y' && a!= 'n'){
		printf(" \n invalid input. Try again:");
		scanf("%c", &a);
	}
}

void check_age(int age){
	while(sizeof(age)!= sizeof(int)){
	printf("this is not a number please enter a number");
	scanf("%d", &age);
	}
}

int main(){
	int age,marks;
	char option;

	
	 printf("enter you age \n");
	 scanf("%d", &age);
     check_age(age);
	 
	 if(age<=20 && age>0){
	 	marks +=1;
      }	
       else if(age>20 && age<=30)
       marks += 2;
      else{
      	marks+= 3;
	  }
      
     printf("********** Type y to answer yes or n to answer no to the following questions: \n");
      printf("********** do you smoke?: \n");
      scanf("%c", &option);
      
      // checking the first option if one smokes 
	  check_input(option);
      if(option == 'y'){
      	marks+=4;
	  } 
	  
	  
	  // checking the high blood pressure
	  printf(" ********* do you have a high blood pressure?:  \n");
	  scanf("%c", &option);
	  check_input(option);
	   if(option == 'y'){
      	marks+= 2;
	  }
	  
	  //checking if one consume high fat diet
	  printf("*********** do you consume high fat diet??? \n ");
	  scanf("%c", &option);
	  check_input(option);
	   if(option == 'y'){
      	marks+=1;
	  }
	  // printing the marks that one has
	  
	  if(marks <= 4){
	  	printf("******* woow %d/10! low risks of having cardiovascular diseases ", marks);
	  }
	  else if(marks<6 && marks>=8 ){
	  	printf("***** %d/10! risks of having cardiovascular disease prevent!", marks);
	  }
	  else{
	  	printf("******* %d/10! chancesyou have high risks of having cardiovascular disease", marks);
	  }
	  
	  	
	return 0;
}
	