#include <stdio.h>



int main (void){
	const int iva = 16;
	double subtotal;
	printf("Cual es el total?\n");
	scanf("%lf", &subtotal);
	double extra = (iva*subtotal)/100;
	double total = subtotal + extra;
	printf("El total con IVA es: %.2f\n", total);

}
