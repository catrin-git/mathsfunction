
//this line is causing the issue in the conflict branch
//this is the second line causing issue on the conflict branch
#include <stdio.h>
int main()
{
int a = 1;
int b = 2;
int c,d,e,f;

printf("%i\n", a+b);
printf("%i\n", b-a);
printf("%i\n", a*b);
printf("%i\n", b/a);

printf("Enter in 4 Numbers:\n");
scanf("%i %i %i %i", &c,&d,&e,&f);
printf("\n %i is the average\n", (c+d+e+f)/4);

printf("remainder of %i and %i is %i\n", a, b, a%b);

}
