/*
Christian Vicente Juárez, Sistemas Aurosonic, 18 de Febrero del 2022,
Universidad La Salle Oaxaca, Ingenieria en Software y Sistemas Computacionales, 
Algebra Lineal 2 "A",
Practica 1, Solución de un sistema de ecuaciones 3x3 por el método de Crammer.
v1.0.0
*/
#include<stdio.h>
int main(){
 int A[4][3];
 printf("-------------------------------------------------------------------------------");
 printf("\nSolucion de un sistema de ecuaciones 3x3 por el metodo de la matriz inversa\n");
 printf("-------------------------------------------------------------------------------");
 printf("\nIngresa los valores de tu matriz 3 x 3\n\n");
 
 for(int i = 0 ; i < 3 ; i++){
  for(int j = 0 ; j < 4 ; j++){
   printf("Ingrese un valor en la posicion A[%d][%d] = ",j,i);
   scanf("%d",&A[j][i]);
  }
 }
 printf("\nLa Matriz quedo de la sigueinte manera:\n");
 for(int i = 0; i < 3 ; i++){
  for(int j = 0; j < 4 ; j++){
   printf("%d ",A[j][i]);
  }
  printf("\n");
 }
 printf("-------------------------------------------------------------------------------");
 printf("\nLa determinante de la matriz A es: %d\n", ((A[0][0]*A[1][1]*A[2][2]) + (A[0][1]*A[1][2]*A[2][0]) + (A[0][2]*A[1][0]*A[2][1])) - ((A[0][2]*A[1][1]*A[2][0])+(A[0][1]*A[1][0]*A[2][2])+(A[0][0]*A[1][2]*A[2][1])));
 printf("-------------------------------------------------------------------------------");
 printf("\nOcuparemos el metodo de crammer para obtener la matriz inversa\n");
 printf("-------------------------------------------------------------------------------");
 printf("\nLa matriz de Ax es la siguiente\n");
 for(int i = 0; i < 3 ; i++){
  for(int j = 1 ; j < 4 ; j++){
   printf("%d ",A[j][i]);
  }
  printf("\n");
 }
 printf("El resultado de Ax = %d\n", ((A[1][0]*A[2][1]*A[3][2])+(A[1][1]*A[2][2]*A[3][0])+(A[1][2]*A[2][0]*A[3][1])) - ((A[1][2]*A[2][1]*A[3][0])+(A[1][1]*A[2][0]*A[3][2])+(A[1][0]*A[2][2]*A[3][1])));
 printf("-------------------------------------------------------------------------------");
 printf("\nLa matriz de Ay es la siguiente\n");
 for(int i = 0; i < 3; i++){
  for(int j = 0; j < 4; j++){
   if(j != 1){
    printf("%d ",A[j][i]);
   }
  }
  printf("\n");
 }
 printf("El resultado de Ay = %d\n",((A[0][0]*A[2][1]*A[3][2])+(A[0][1]*A[2][2]*A[3][0])+(A[0][2]*A[2][0]*A[3][1])) - ((A[0][2]*A[2][1]*A[3][0])+(A[0][1]*A[2][0]*A[3][2])+(A[0][0]*A[2][2]*A[3][1])));
 printf("-------------------------------------------------------------------------------");
 printf("\nLa matriz de Az es la siguiente\n");
 for(int i = 0; i < 3; i++){
  for(int j = 0; j < 4; j++){
   if(j != 2){
    printf("%d ",A[j][i]);
   }
  }
  printf("\n");
 }
 printf("El resultado de Az = %d\n",((A[0][0]*A[1][1]*A[3][2])+(A[0][1]*A[1][2]*A[3][0])+(A[0][2]*A[1][0]*A[3][1])) - ((A[0][2]*A[1][1]*A[3][0])+(A[0][1]*A[1][0]*A[3][2])+(A[0][0]*A[1][2]*A[3][1])));
 printf("-------------------------------------------------------------------------------");
 printf("\nLas soluciones de la siguiente matriz son:\n");
 printf("x = %d/%d",((A[1][0]*A[2][1]*A[3][2])+(A[1][1]*A[2][2]*A[3][0])+(A[1][2]*A[2][0]*A[3][1])) - ((A[1][2]*A[2][1]*A[3][0])+(A[1][1]*A[2][0]*A[3][2])+(A[1][0]*A[2][2]*A[3][1])), ((A[0][0]*A[1][1]*A[2][2]) + (A[0][1]*A[1][2]*A[2][0]) + (A[0][2]*A[1][0]*A[2][1])) - ((A[0][2]*A[1][1]*A[2][0])+(A[0][1]*A[1][0]*A[2][2])+(A[0][0]*A[1][2]*A[2][1])) );
 printf("\ny = %d/%d",(-1)*(((A[0][0]*A[2][1]*A[3][2])+(A[0][1]*A[2][2]*A[3][0])+(A[0][2]*A[2][0]*A[3][1])) - ((A[0][2]*A[2][1]*A[3][0])+(A[0][1]*A[2][0]*A[3][2])+(A[0][0]*A[2][2]*A[3][1]))), ((A[0][0]*A[1][1]*A[2][2]) + (A[0][1]*A[1][2]*A[2][0]) + (A[0][2]*A[1][0]*A[2][1])) - ((A[0][2]*A[1][1]*A[2][0])+(A[0][1]*A[1][0]*A[2][2])+(A[0][0]*A[1][2]*A[2][1])));
 printf("\nz = %d/%d",((A[0][0]*A[1][1]*A[3][2])+(A[0][1]*A[1][2]*A[3][0])+(A[0][2]*A[1][0]*A[3][1])) - ((A[0][2]*A[1][1]*A[3][0])+(A[0][1]*A[1][0]*A[3][2])+(A[0][0]*A[1][2]*A[3][1])), ((A[0][0]*A[1][1]*A[2][2]) + (A[0][1]*A[1][2]*A[2][0]) + (A[0][2]*A[1][0]*A[2][1])) - ((A[0][2]*A[1][1]*A[2][0])+(A[0][1]*A[1][0]*A[2][2])+(A[0][0]*A[1][2]*A[2][1])));
 printf("-------------------------------------------------------------------------------");
 return 0;
}
