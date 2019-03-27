#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(void){
    char harf,exit=101;
    printf("Bir Harf Giriniz : ");
    scanf("%c" , &harf);
    while(harf!=exit){
        printf("Bir Harf Giriniz : ");
        scanf(" %c" , &harf);
    }
    printf("e girdiniz...");
	return 0;
}
