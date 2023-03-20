Proceso sin_titulo
	//Se requiere el algoritmo para elaborar la planilla de un empleado. Para ello se 
	//dispone de sus horas laboradas en el mes, así como de la tarifa por hora.
	Definir planilla, horas, tarifa Como Real;
	Escribir 'Ingrese horas en el mes: ';
	Leer horas;
	Escribir 'Ingrese tarifa por hora: ';
	Leer tarifa;
	planilla <- horas * tarifa;
	Escribir 'Planilla: ', planilla;
FinProceso
