/*
Ejercicio 2. Escriba un programa en C que lea un arreglo de enteros de tamaño N 
y busque el menor valor del arreglo,
 e imprima su posición y el número menor.

Desarrolle una función que reciba como párametro un arreglo de enteros. 
La función buscará el número menor dentro del arreglo, 
y regresará el número menor y la posición en donde lo encontró.

Si lo encuentra, regresará número menor y su posición.
Si no lo encontró, regresará -1.
La función no deberá imprimir nada, solo buscar el número menor.

La impresión deberá realizarse en el main.
*/
#include <stdio.h>
#define N 5
//int buscarnumeromenor(int a[N], int *m);
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

  
  
   for (i=0; i<N && pos==-1; i++ )
    {
     if(menor>arreglo[i])
     {
         menor=arreglo[i];
     }
     
    }
    printf("el menor es %d en la posicion [%d] ",menor,i);
 scanf("%d[%d]", &menor,i);   

    
  /*for (i=0; i<N && pos==-1; i++ )
    {
       printf("buscando en la posicion %d\n", i);
       if (menor>arreglo[i])
       {
         menor=arreglo[i];
         pos=i;
       }
    }
    */
 


  //buscarnumeromenor(arreglo, & menor);

  
 fflush(stdin);
getchar();
 return 0;
}
/*int buscarnumeromenor(int a[N], int *m)
{ int i;
    for (i=0; i<N; i++ )
  {
     if(*m>a[i])
     {
         *m=a[i];
     }
  } 
  return  i ;
}
*/