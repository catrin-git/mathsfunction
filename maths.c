#include <stdio.h>
int main()
{
int a = 1;
int b = 2;
int c,d,e,f, g, h, i, j, k;

printf("%i\n", a+b);
printf("%i\n", b-a);
printf("%i\n", a*b);
printf("%i\n", b/a);

printf("Enter in 4 Numbers:\n");
scanf("%i %i %i %i", &c,&d,&e,&f);
printf("\n %i is the average\n", (c+d+e+f)/4);

printf("remainder of %i and %i is %i\n", a, b, a%b);

printf("Enter in 5 Numbers:\n");
scanf("%i %i %i %i %i", &g, &h, &i, &j, &k);
if (g>h AND g>i AND g>j AND g>k)
	printf("%i is the maximum", g)

}
