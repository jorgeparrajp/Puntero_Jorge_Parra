#include <stdio.h>

int main (){
 int num, a ;
 int *x ; //puntero 
num =  150 ; 


 x = &num ; //almacena la direcion de memoria de num 

 printf ("%d %p  ", num, x );



 float pi = 3.1416, decimal;

 float *ptrF; //definicion de puntero

 ptrF = &pi ;

 printf (" %f %p", pi , ptrF);





return 0; 

}