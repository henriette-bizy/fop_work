#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int i,j,k=1,needle;
    int array[4][5];
    printf("Enter the needle: ");
    scanf("%d",&needle);

    srand(time(NULL));
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            array[i][j] = rand()%60;
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            if(array[i][j]<needle){
                array[i][j] = 100;
            }
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}