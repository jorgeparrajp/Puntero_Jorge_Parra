#include <stdio.h>

int main (){
 int num, a ;
 int *x ; //puntero 
num =  150 ; 


 x = &num ; //almacena la direcion de memoria de num 
 a = *x ; //esto muestra el contenido de la ireccion de memoria 

 printf ("%d %d %p\n", num, a, x ); 



 float pi = 3.1416, decimal;

 float *ptrF; //definicion de puntero

 ptrF = &pi ;

 decimal = *ptrF ;


 printf ("%.3f %.3f %p\n", pi , decimal , ptrF);


 char letra = 'a' , caracter ;

 char *ptrC; //deficion del puntero
 ptrC = &letra; 

 caracter = *ptrC;

 printf("%c %c %p", letra, caracter, ptrC);




 




return 0; 

}