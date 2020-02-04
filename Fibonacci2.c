#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a=1,b=1,c=0,d=0;	//Declaramos tres variables enteras necesarias para realizar lo calculos de la serie y "b" como contador del numero de elemento saliente
	int numero,x;
	printf("Introduzca el numero de elementos de la serie de Fibonacci que desee (1-20): ");
	scanf("%d",&numero);
	while((numero>20)||(numero<1))	//Introducimos este while para que no se pueda introducir un valor fuera del rango deseado
	{
		printf("Introduzca el numero de elementos de la serie de Fibonacci que desee (1-20): ");
		scanf("%d",&numero);
	}
	for(x==1;x<numero;x++)	//Con este for iniciamos un bucle que imprimira tantos valores como le hayamos indicado previamente
	{
		c=a-c;
		a=c+d;
		d=a;
		printf("El elemento %d de la serie es el: %d \n",b,a);
		b=b+1;
	}
getch();
}
