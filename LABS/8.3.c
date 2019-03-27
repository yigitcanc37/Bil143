#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){
    int say1, say2, say3, i, ctrl;
    printf("3 Sayi Giriniz :\n");
    scanf("%d%d%d" , &say1, &say2, &say3);
    printf("%d ile %d arasinda %d'ye bolunen sayilar :\n", say1, say2, say3);
    for(i=say1;i<say2;i++){
        ctrl=i%say3;
        if(ctrl==0){
            printf("%d ", i);
        }
    }
	return 0;
}
