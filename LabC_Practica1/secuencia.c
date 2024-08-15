#include <stdio.h>
#include <string.h>

int main(int argc , char *argv[]){
    int n;

    printf("Ingrese n: ");
    scanf("%d",&n);

    for(int i = 1; i<=n;i++){
        printf("%d ",i);
    }

    printf("\n");
    if( argc > 1 && strcmp( argv[1], "REVERSE") == 0){
        int i = n;
        while(i != 0){
            printf("%d ",i);
            i--;
        }
    printf("\n");

    }

}