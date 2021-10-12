/*
Ejercicio 3. Escriba un programa en C que lea un arreglo de enteros de tamaño N y
 busque el mayor valor dentro del arreglo, e imprima su posición y el número menor.

Desarrolle una función que reciba como párametro un arreglo de enteros.
 La función buscará el número mayor dentro del arreglo, y regresará el número mayor y 
 la posición en donde lo encontró.

Si lo encuentra, regresará número mayor y su posición.
Si no lo encontró, regresará -1.
La función no deberá imprimir nada, solo buscar el número mayor.

La impresión deberá realizarse en el main.
*/

#include <stdio.h>
#define N 5
int buscarMayor(int arr[N], int *p);
int main ()
{
 int arreglo[N];
 int i;
 int mayor;
 int pos=-1;

 for (i=0; i<N; i++ )
  {
      printf("arreglo[%d]", i);
      scanf("%d",&arreglo[i]);
  }
  mayor=buscarMayor(arreglo,&pos);

  
  
 printf("el mayor es %d en la posicion [%d] ",mayor,pos);
 scanf("%d[%d]", &mayor,pos);   

 fflush(stdin);
getchar();
 return 0;
}


int buscarMayor(int arr[N], int *p)
{
  int i;
  int mayor=arr[0];
  for (i=0; i<N ; i++ )
  { 
    if(arr[i]>mayor)
     mayor=arr[i];
     *p=i;
  }
 return mayor;
}




