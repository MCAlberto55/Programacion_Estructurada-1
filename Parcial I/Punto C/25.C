/*25 Un vendedor tiene un sueldo base por d�a de 200 pesos y recibe
una comisi�n por venta, que se determina considerando lo siguiente:
a) Para sus ventas de lunes a viernes, la comisi�n de venta es el 2.5%
del monto total de sus ventas.
b) Para sus ventas de s�bado, la comisi�n es del 4%.
c) Para sus ventas de domingo, la comisi�n es del 5%.
Adem�s, si el monto de sus ventas en un d�a es mayor a $10,000.00
tiene un bono adicional de 200 pesos. E.P. que lea las ventas de un
d�a, calcule e imprima el ingreso total del vendedor.
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
	char finish[7];
	char dia[7];
	float venta, total;
	total=200;
	printf ("ingrese la venta del dia\n");
	scanf ("%f", &venta);
	printf ("Que dia de la semana es? \n");
	scanf("%s", &dia);
	
	if (strcmp(dia, "Sabado")) {
		if ( venta > 10000 ) {
			total = total + 200;
		}
		total = total + (venta * (.025));
	} else if ( strcmp(dia, "Domingo") ) {
		if ( venta > 10000 ) {
			total = total + 200;
		}
		total = total + ((venta *5) /(.05));
	} else {
		if (venta>1000) {
			total = total+200;
		}
		total = total+(venta*.25);
	}
	printf("Su comision es de %f", total);
	getch();
	
    return 0;
}
