#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){
    int a, b, c, d;
    printf("Matrisin Boyutunu Giriniz : ");
    scanf("%d", &a);
    for(b=0;b<a;b++){
        for(c=1;c<=a;c++){
            printf("%d ", b+c);
        }
        printf("\n");
    }
    return 0;
}
