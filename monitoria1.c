#include <stdio.h>
void main(){
int matriz[4][4];
int c, l;
    for(c = 0; c < 4; c++){
    scanf("%d", &matriz[0][c]);
    }
    for(l = 1; l < 4; l++){
    scanf("%d", &matriz[l][0]);
    }
    for(l = 1; l < 4; l++){
        for(c = 1; c < 4; c++){
            matriz[l][c] = matriz[l-1][c];
            if(matriz[l][c] < matriz[l-1][c-1]){
                matriz[l][c] = matriz [l-1][c-1];
            }
            if(matriz[l][c] < matriz[l][c-1]){
                matriz[l][c] = matriz[l][c-1];
            }
        }
    }
    for(l = 0; l < 4; l++){
        for(c = 0; c < 4; c++){
            printf("%d", matriz[l][c]);
        }
    printf("\n");
    }
}


   

	
