#include <stdio.h>

//busqueda secuencial con centinela
//recorre el arreglo hastaa que lo encuentra

//busqueda secuencial.
//recorrer el arreglo elemento a elemento 
//comparando con el que queremos usar
//mientras no nos pasemos del tamaño.
/*
escribir un programa que lea un arreglo 
pida un numero al usuario y busque un numero dentro del arreglo
imprima la posicion donde esta
sino que imprima el numero no existe en el arreglo
funcion que reciba el arreglo y regrese la posicion
si no lo encuentra entonces que regrese -1
funcion no debe de imprimir nada 
la impresion debe de ser en el main
*/
#define N 10
int buscarValor(int arr[N],int n);
int main ()
{
int arreglo [N];
int numero;
int i;
int posicion;

 for (i=0; i<N; i++ )
 {
     printf("arreglo[%d]", i);
     scanf("%d",&arreglo [i]);
  }
printf("dame el numero a buscar:");
     scanf("%d",&numero);

     posicion=buscarValor(arreglo,numero);
     
     if(posicion!=-1)
        printf("el valor se encuentra en la posicion%d",posicion);
     else 
       printf("el numero no existe dentro del arreglo");

 fflush(stdin);
    getchar();
  return 0;
}
int buscarValor(int arr[N],int n)
{
 int pos= -1;
 int i;
//busqueda consentinela
   for (i=0; i<N && pos==-1; i++ )
    {
        printf("buscando en la posicion %d", i);
       if (arr[i]==n)
         pos=i;
    }
 return pos;
}