#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){
    int a, i;
    printf("Bir Sayi Giriniz : ");
    scanf("%d", &a);
    while(0<a && a<=255){
        for(i=128;i>=1;i=i/2){
                if(a>=i){
                    printf("1");
                }
                else{
                    printf("0");
                }
                a=a%i;
        }
        printf("\nBir Sayi Giriniz : ");
        scanf("%d", &a);
    }
    printf("Bay!");
    return 0;
}
