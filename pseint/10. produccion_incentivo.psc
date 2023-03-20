Proceso sin_titulo
	//Se tiene registrada la producción (unidades) logradas por un operario a lo largo de 
	//la semana (lunes a sábado). Elabore un algoritmo que nos muestre o nos diga si el 
	//operario recibirá incentivos sabiendo que el promedio de producción mínima es de 
	//100 unidades.
	Definir produccion Como Entero;
	Escribir 'Ingrese las unidades de produccion: ';
	Leer produccion;
	Si produccion > 100 Entonces
		Escribir 'Recibe incentivo';
	SiNo
		Escribir 'No recibe incentivo';
	FinSi
FinProceso
