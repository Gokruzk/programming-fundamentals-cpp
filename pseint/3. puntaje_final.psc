Proceso sin_titulo
	//Elaborar un algoritmo que solicite el n�mero de respuestas correctas, incorrectas y 
	//en blanco, correspondientes a postulantes, y muestre su puntaje final considerando,
	//que por cada respuesta correcta tendr� 4 puntos, respuestas incorrectas tendr� -1 
	//y respuestas en blanco tendr� 0.
	Definir correctas, incorrectas, blanco, total Como Entero;
	Escribir 'Ingrese numero de correctas: ';
	Leer correctas;
	Escribir 'Ingrese numero de incorrectas: ';
	Leer incorrectas;
	Escribir 'Ingrese numero de en blanco: ';
	Leer blanco;
	total <- correctas*4 - incorrectas + blanco*0;
	Escribir 'Puntaje final: ', total;
FinProceso
