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

void capturaMatriz(int m[R][C]);
int buscaMenor(int arr[C], int *menor);
int main ()
{
     int matriz[R][C];
     int i;
     int j;
     int arreglo[C];
     int menor;
     int pos;
     int ren;
 

    capturaMatriz(matriz);
    for (ren=0; ren<R ; ren++ )
    {
          pos=buscaMenor(matriz[ren], &menor);
          printf("el menor del renglon %d es %d y esta en la posicion %d", ren, menor, pos );
          printf(" ");
    }
     
  

  fflush(stdin);
  getchar();           
  return 0;
 }
void capturaMatriz(int m[R][C])
{
    int i, j;
    for (i=0; i<R ; i++ )
    {
        for (j=0; j<C; j++ )
        {
            printf("matriz [%d][%d]",i,j);
            scanf("%d", &m[i][j]);
        }
    }
    return; 
} 

int buscaMenor(int arr[C], int *menor)
{
     int pos=-1;
     int i;
     *menor=arr[0];
     for (i=0; i<C ; i++ )
     {
          if (arr[i] < *menor)
          {
               *menor=arr[i];
               pos=i;
          }
     }
 return pos;
}
