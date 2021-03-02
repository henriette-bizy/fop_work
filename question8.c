#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    FILE *file1,*file2,*file3;
    char buffer[202];
    char resultString[404];
    file1 = fopen("file1.txt","r");
    file2 = fopen("file2.txt","r");
    file3 = fopen("file3.txt","w");
    while (fgets(buffer,sizeof(buffer),file1)!=NULL)
    {
       strcpy(resultString,buffer);
    }
    while (fgets(buffer,sizeof(buffer),file2)!=NULL)
    {
       strcat(resultString,buffer);
    }
    
  if(fprintf(file3,resultString))
  printf("The file content Written to tthe file");

    return 0;
}