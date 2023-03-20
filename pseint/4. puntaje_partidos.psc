Proceso sin_titulo
	//Elaborar un algoritmo que permita ingresar el número de partidos ganados,
	//perdidos y empatados, por algún equipo en el torneo apertura, se debe mostrar su 
	//puntaje total, teniendo en cuenta que por cada partido ganado obtendrá 3 puntos, 
	//empatado 1 punto y perdido 0 puntos.
	Definir ganados, perdidos, empatados, total Como Entero;
	Escribir 'Ingrese numero de ganados: ';
	Leer ganados;
	Escribir 'Ingrese numero de perdidos: ';
	Leer perdidos;
	Escribir 'Ingrese numero de empatados: ';
	Leer empatados;
	total <- ganados*3 + empatados;
	Escribir 'Puntaje final: ', total;
FinProceso
