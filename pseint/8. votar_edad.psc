Proceso sin_titulo
	//Elaborar un algoritmo que permita averiguar si una persona puede ejercer 
	//su derecho al voto, conociendo su año de nacimiento
	Definir edad, year Como Entero;
	Escribir 'Ingrese su año de nacimiento: ';
	Leer year;
	edad <- 2023 - year;
	Si edad > 16 Entonces
		Escribir 'Si puede votar';
	SiNo
		Escribir 'No puede votar';
	FinSi
	
FinProceso
