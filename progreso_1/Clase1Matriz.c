#include <stdio.h>
int main (int argc, char *argv[]) {

    int Matriz [2][3] = {{1,2,3}, {4,5,6}};
    int Matriz2 [2][3] = {{7,8,9}, {5,1,7}};
    int Suma [2][3];

     
    
        for (int i = 0; i < 2; i++) {         
            for (int j = 0; j < 3; j++) {  
                Suma[i][j] = Matriz[i][j] + Matriz2[i][j];    
                printf("%d ", Suma[i][j]);
            }
            printf("\n");
        }

    return 0;
}