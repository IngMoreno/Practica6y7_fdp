#include <stdio.h>
#include <conio.h>
main()
{
int a,b;
printf ("Este programa determina si: a=b, a>0 o a<0\n");
//también se puede aplicar para a<b  y a>b
printf ("Dame el valor de a:\n");
scanf ("%d",&a);
printf ("Dame el valor de b:\n");
scanf("%d",&b);
if (a==b)
printf("Los n\243meros son iguales");
else{
if (a>b)
printf("%d es mayor a %d", a,b);
else 
printf("%d es menor a %d", a,b);
}
getch(); 
}
