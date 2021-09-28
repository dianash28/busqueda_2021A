/*Ejercicio 4. Escriba un programa en C que lea un arreglo bidimensional de N x M 
e imprima el número menor de cada renglón del arreglo y la posición en donde lo encontró.

Desarrolle una función que reciba como párametro un arreglo unidimensional de enteros de tamaño M. 
La función buscará el número menor dentro del arreglo, y regresará el número menor y la posición en donde lo encontró.

Si lo encuentra, regresará el número menor y su posición.
Si no lo encontró, regresará -1.
La función no deberá imprimir nada, solo buscar el número menor.

La impresión deberá realizarse en el main.
*/
#include <stdio.h>
#define R 3
#define C 3
#define N 1
#define M 3
//int buscarnumeromenor(int a[N], int *m);
int main ()
{
     int matriz[R][C];
     int i;
     int j;
     int arreglo[N][M];
     int menor;
    int renglones;
    for(i=0;i<C; i++)
    {
           printf("dame [%d] ", i);
           scanf("%d",&matriz[i]);
    }
     
 for (i=0;i<3; i++)
 {
      if (menor>matriz[i][j])
      {
           menor=matriz[i][j];
      }  
         
 }
     
  printf("el menor es  %d esta en la posicion [%d]", menor, i );
 scanf("%d [%d][%d]",&menor, &matriz[i]);

  fflush(stdin);
  getchar();           
  return 0;
 }

