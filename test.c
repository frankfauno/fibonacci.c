/*Test ¿Eres apasionada(o)?*/
 #include <stdio.h>
 #include <stdlib.h>
 int main() {
 	int entrada=0, contador=0;
 	printf("¿Eres apasionda(o)?\n");
 	//Pregunta 1
 	printf("1.- ¿Has dormido alguna vez bajo las estrellas?\n1) Sí, me encanta hacerlo de vez en cuando.\n2) Alguna vez, pero no me gusta.\n3) No, no me gusta.\nRespuesta: ");
 	scanf("%d",&entrada);
 	switch(entrada) {
 		case 1:
 			contador = contador + 15;
 		break;
 		case 2:
 			contador = contador + 10;
 		break;
 		case 3:
 			contador = contador + 8;
 		break;
 	}
 	system("clear");
 	//Pregunta 2
 	printf("2.- En media calle ¿Has besado a un@ chic@ en un arrebato?\n1) Sí, alguna vez.\n2) Tengo mejores sitios para hacerlo.\n3) No, nunca lo haría.\nRespuesta: ");
 	scanf("%d",&entrada);
 	switch(entrada) {
 		case 1:
 			contador = contador + 15;
 		break;
 		case 2:
 			contador = contador + 10;
 		break;
 		case 3:
 			contador = contador + 8;
 		break;
 	}
 	system("clear");
 	//Pregunta 3
 	printf("3.- ¿Has realizado manifestaciones de amor intensas públicamente?\n1) Sí, no podía esperar.\n2) Me gustaría, pero no.\n3) Nunca se me ocurriría algo así.\nRespuesta: ");
 	scanf("%d",&entrada);
 	switch(entrada) {
 		case 1:
 			contador = contador + 15;
 		break;
 		case 2:
 			contador = contador + 10;
 		break;
 		case 3:
 			contador = contador + 8;
 		break;
 	}
 	system("clear");
 	//Pregunta 4
 	printf("4.- ¿Has abrazado y besado a alguien bajo una tormenta?\n1) Sí, y fue algo inolvidable.\n2) Claro que no, me mojaría.\n3) No, no me apetece.\nRespuesta: ");
 	scanf("%d",&entrada);
 	switch(entrada) {
 		case 1:
 			contador = contador + 15;
 		break;
 		case 2:
 			contador = contador + 10;
 		break;
 		case 3:
 			contador = contador + 8;
 		break;
 	}
 	system("clear");
 	//pregunta 5
 	printf("5.- ¿Has enviado flores o algún regalo sin un motivo aparente?\n1) Sí, alguna vez lo he hecho.\n2) Se me ha ocurrido, pero nunca lo hago.\n3) No, si no tengo motivo no.\nRespuesta: ");
 	scanf("%d",&entrada);
 	switch(entrada) {
 		case 1:
 			contador = contador + 15;
 		break;
 		case 2:
 			contador = contador + 10;
 		break;
 		case 3:
 			contador = contador + 8;
 		break;
 	}
 	system("clear");
 	//Pregunta 6
 	printf("6.- ¿Has cantado públicamente para él o ella?\n1) Sí, lo he hecho.\n2) Sólo en casa canto canciones.\n3) No, no es necesario, sabe que le quiero.\nRespuesta: ");
 	scanf("%d",&entrada);
 	switch(entrada) {
 		case 1:
 			contador = contador + 15;
 		break;
 		case 2:
 			contador = contador + 10;
 		break;
 		case 3:
 			contador = contador + 8;
 		break;
 	}
 	system("clear");
 	//Pregunta 7
 	printf("7.- ¿Le has organizado fiestas sorpresas?\n1) Sí, estuvo super.\n2) Sí, pero no resultó.\n3) No, nunca.\nRespuesta: ");
 	scanf("%d",&entrada);
 	switch(entrada) {
 		case 1:
 			contador = contador + 15;
 		break;
 		case 2:
 			contador = contador + 10;
 		break;
 		case 3:
 			contador = contador + 8;
 		break;
 	}
 	system("clear");
 	//Pregunta 8
 	printf("8.- ¿Disfrutas estar simplemente abrazados?\n1) Sí, por supuesto.\n2) Sólo abrazados no, me gusta más acción.\n3) No, casi no nos abrazamos.\nRespuesta: ");
 	scanf("%d",&entrada);
 	switch(entrada) {
 		case 1:
 			contador = contador + 15;
 		break;
 		case 2:
 			contador = contador + 10;
 		break;
 		case 3:
 			contador = contador + 8;
 		break;
 	}
 	system("clear");
 	//Pregunta 9
 	printf("9.- ¿Han viajado solos?\n1) Siempre que podemos viajar solos.\n2) No, no podemos.\n3) No, no nos gusta.\nRespuesta: ");
 	scanf("%d",&entrada);
 	switch(entrada) {
 		case 1:
 			contador = contador + 15;
 		break;
 		case 2:
 			contador = contador + 10;
 		break;
 		case 3:
 			contador = contador + 8;
 		break;
 	}
 	system("clear");
 	//Pregunta 10
 	printf("10.- ¿Le has regalado ropa interior?\n1) Sí, me encanta comprarle ropa interior.\n2) No, prefiero ver o imaginar lo que elige.\n3) No, es algo que considero muy personal e íntimo.\nRespuesta: ");
 	scanf("%d",&entrada);
 	switch(entrada) {
 		case 1:
 			contador = contador + 15;
 		break;
 		case 2:
 			contador = contador + 10;
 		break;
 		case 3:
 			contador = contador + 8;
 		break;
 	}
 	system("clear");
 	//Respuestas
	printf("Respuesta del test:\n");
 	if(contador>=0 && contador<=80) {
 		printf("Para ti la pasión es comer un bocadillo de chorizo viendo la ele en tu casa. No haces el mínimo esfuerzo por mantener la pasión en tu pareja, además no sabrías cómo empezar ni qu hacer. Tiene que ser la pareja la que intente algo para que salga bien.\n");
 	}
 	else if(contador>=81 && contador<=100) {
 		printf("Tú eres más apasional de lo que quieres aparentar, te controlas para no hacer muchas cosas que te gustarían pero otras sí las haces y eso le gusta mucho a tu pareja. Mantén esa pasíón sin pasarse ni quedarte corta.\n");
 	}
 	else if(contador>=101 && contador <= 150) {
 		printf("Tu pasión es exagerada, no te importa ni quien esté delante ni detrás, sólo tienes impulsos y los sigues hasta el final. A tu pareja no le importa mucho mientras se disimule un poco, pero ten cuidado no vayas a perder a tu pareja por tu pasión desenfrenada.\n");
 	}
 	return 0;
 }
