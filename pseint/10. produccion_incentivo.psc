Proceso sin_titulo
	//Se tiene registrada la producci�n (unidades) logradas por un operario a lo largo de 
	//la semana (lunes a s�bado). Elabore un algoritmo que nos muestre o nos diga si el 
	//operario recibir� incentivos sabiendo que el promedio de producci�n m�nima es de 
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
