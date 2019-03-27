#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){
    int a, i, b;
    printf("Boyutunu Giriniz :");
    scanf("%d" , &a);
    for(i=0;i<a;i++){
        if(i==0 || i==(a-1)){
            for(b=0;b<3;b++){
                printf("-");
            }
            printf("\n");
        }
        else{
            printf(" |\n");
        }
    }

	return 0;
}
