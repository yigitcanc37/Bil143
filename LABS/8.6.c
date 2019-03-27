#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void CheckAsal (int a){
    int b, i, c=0;
    for(i=1;i<=a;i++){
        b=a%i;
        if(b==0){
            c++;
        }
    }
    if(c==2){
        printf("%d Asal\n", a);
    }
    else{
        printf("\a%d Asal Degil!\n", a);
    }
}

int main(void){
    int a=1;
    while(0<a){
        printf("Bir Sayi Giriniz : ");
        scanf("%d", &a);
        if(a<0){
            break;
        }
        CheckAsal(a);
    }
    printf("Bay!");
    return 0;
}
