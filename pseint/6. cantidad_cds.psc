Proceso sin_titulo
	//Elaborar un algoritmo que permita calcular el n�mero de CDs necesarios para hacer 
	//una copia de seguridad, de la disco cuya capacidad se conoce. Considerar
	//informaci�n almacenada en un que el disco duro est� lleno de informaci�n, adem�s 
	//expresado en gigabyte. Un CD virgen tiene 700 Megabytes de capacidad y una 
	//Gigabyte es igual a 1024 Megabytes.
	Definir hdd, cds Como Real;
	cds <- 0;
	Escribir 'Ingrese capacidad del hdd (GB): ';
	Leer hdd;
	hdd <- hdd*1024;
	Mientras hdd > 700 Hacer
		hdd <- hdd - 700;
		cds <- cds + 1;
	FinMientras
	Escribir 'Cantidad de CDS: ',cds;
FinProceso
