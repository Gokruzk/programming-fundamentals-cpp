Proceso sin_titulo
	//Elaborar un algoritmo que solicite el número de respuestas correctas, incorrectas y 
	//en blanco, correspondientes a postulantes, y muestre su puntaje final considerando,
	//que por cada respuesta correcta tendrá 4 puntos, respuestas incorrectas tendrá -1 
	//y respuestas en blanco tendrá 0.
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
