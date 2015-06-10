#include <stdio.h>

int main() {
	int limite=0, num1=1, num2=1, num3, contador;

	printf("Escribe el límite de la secuencia ");
	scanf("%d",&limite);

	for(contador=1; contador <= limite; contador++) {
		num3=num1;
		printf("%d.- %d \n",contador ,num1);
		num1=num2+num1;
		num2=num3;
	}

	return 0;
}
