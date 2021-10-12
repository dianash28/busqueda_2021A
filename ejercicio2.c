/*
Ejercicio 2. Escriba un programa en C que lea un arreglo de enteros de tamaño N 
y busque el menor valor del arreglo,
 e imprima su posición y el número menor.

Desarrolle una función que reciba como párametro un arreglo de enteros. 
La función buscará el número menor dentro del arreglo, 
y regresará el número menor y la posición en donde lo encontró.

Si lo encuentra, regresará número menor y su posición.
La función no deberá imprimir nada, solo buscar el número menor.

La impresión deberá realizarse en el main.
*/
#include <stdio.h>
#define N 5
int buscarMenor(int arr[N], int *p);
int main ()
{
 int arreglo[N];
 int i;
 int menor;
 int pos=-1;

 for (i=0; i<N; i++ )
  {
      printf("arreglo[%d]", i);
      scanf("%d",&arreglo[i]);
  }
  menor=buscarMenor(arreglo,&pos);

  
  
 printf("el menor es %d en la posicion [%d] ",menor,pos);
 scanf("%d[%d]", &menor,pos);   

 fflush(stdin);
getchar();
 return 0;
}


int buscarMenor(int arr[N], int *p)
{
  int i;
  int menor=arr[0];
  for (i=0; i<N ; i++ )
  { 
    if(arr[i]<menor)
     menor=arr[i];
     *p=i;
  }
 return menor;
}


