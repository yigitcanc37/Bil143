#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){
    int a;
    for(a=2;a<50;a++){
        if(a<26){
            printf("%d ", a);
        }
        else if(a==26){
            printf("%d\n", a);
        }
        else{
            printf("%d ", a);
        }
    }
    return 0;
}
