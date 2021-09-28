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

int main ()
{
 int arreglo[N];
 int i;
 int mayor;


 for (i=0; i<N; i++ )
  {
      printf("arreglo[%d]", i);
      scanf("%d",&arreglo[i]);
  }

  
  
 for (i=0; i<N; i++ )
  {
    if(arreglo[i]>mayor)
    {
        mayor=arreglo[i];
    }
  }

 printf("el mayor es %d en la posicion %d ",mayor,i);
 scanf("%d %d", mayor,i);    
 fflush(stdin);
 getchar();
 return 0;
}

