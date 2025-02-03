#include <stdio.h>

#define PI 3.141559

int main (void){
	double radio;
	printf("Dame el radio de tu circulo pa darte el area\n");
	scanf("%lf",&radio);
	double area = PI*(radio*radio);	
	printf("%f\n", area);
}
