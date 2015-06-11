include <stdio.h>
int main() {
	int entrada=0, area=0, base=0, altura=0, lado=0;
	printf("¿Qué área quieres sacar?\n1 - Área del cuadrado.\n2 - Área del triangulo.\n");
	scanf("%d",&entrada);
	switch(entrada) {
		case 1:
			printf("Dime el lado del cuadrado: ");
			scanf("%d",&lado);
			area=lado*lado;
			printf("El área del cuadrado es: %d",area);
		break;
		case 2:
			printf("Dime la base del triangulo ");
			scanf("%d",&base);
			printf("Dime la altura del triangulo ");
			scanf("%d",&altura);
			area=(base*altura)/2;
			printf("El área del trianulo es %d",area);
		break;
	}
	if(area > 20) {
		printf("El área es mayor a 20.");
	}
	if(area >= 10 && area <= 20) {
		printf("El área está entre 10 y 20");
	}
	if(area < 10) {
		printf("El área es menor a 10");
	}
	return 0;
}
