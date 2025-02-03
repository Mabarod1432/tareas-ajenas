#include <stdio.h>

int main (void){
	double num1, num2, num3;

	printf("vas a darme 3 numeros\n");
	printf("empecemos por el primero\n");

	scanf("%lf",&num1);
	printf("dame el segundo\n");
	scanf("%lf",&num2);
	printf("dame el tercero\n");
	scanf("%lf", &num3);

	double prom = (num1+num2+num3)/3;
	printf("El promedio es : %f\n",prom);
}
