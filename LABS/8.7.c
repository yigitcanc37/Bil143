#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){
    int a, b, c, d, e, f;
    printf("Boyut Giriniz : ");
    scanf("%d", &a);
    d=(a*2)-1;
    e=a/2;
    for(b=0;b<a;b++){
        if(b==0){
            for(c=1;c<=d;c++){
                if(c==a){
                    printf("*\n");
                    break;
                }
                else{
                    printf(" ");
                }
            }
        }
        else if(b==e){
            for(c=1;c<=d;c++){
                if(c==a-e){
                    for(f=0;f<a;f++){
                        printf("*");
                    }
                    printf("*\n");
                    break;
                }
                else{
                    printf(" ");
                }
            }
        }
        else{
            for(c=1;c<=d;c++){
                if(c==a-b){
                    printf("*");
                }
                else if(c==a+b){
                    printf("*\n");
                    break;
                }
                else{
                    printf(" ");
                }
            }
        }
    }
    return 0;
}
