#include<stdio.h>

main(){

        int a, b;

    printf("Diga o primeiro valor: ");

    scanf("%d", &a);

    printf("O segundo: ");

    scanf("%d", &b);

    printf("O maior: ");

        if(a>b){
            printf("%d \n", a);
        }
        else {
            printf("%d \n", b);
        }

return 0;
}
