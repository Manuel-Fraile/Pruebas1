#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
  char sino;   //Seleccion de siguiente numero de las serie
  int a=1,b=1,c=0,d=0;
  
  printf("Desea obtener el elemento %d de la serie de Fibonacci? (s/n) \n", b);
  sino=getch()
  
  while((sino!='s')&&(sino!='n'))
  {
    puts("Indica (s)i o (n)o");
    sino=getch();
   }
   
   while(sino=='s')
   {
      c=a-c; 
      a=c+d;
      d=a;
      printf("El elemento %d de la serie es el: %d \n\n",b,a);
      
      b=b+1;
      
      printf("Desea obtener el elemento %d de la serie de Fibonacci? (s/n)\n",b);
      fflsuh(stdin);
      sino=getch();
      
       while((sino!='s')&&(sino!='n'))
       {
          puts("Indica (s)i o (n)o");
          sino=getch();
       }
   }

   puts("Tremendo final bro\n");
   getch();
}
