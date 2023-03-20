Proceso sin_titulo
	//Elaborar un algoritmo que solicite el nombre y la edad de 2 hermanos y muestre un
	//mensaje indicando la edad del mayor y cuantos años de diferencia tiene con el 
	//menor.
	Definir n1, n2 Como Caracter;
	Definir e1, e2 Como Entero;
	Escribir 'Ingrese nombre 1: ';
	Leer n1;
	Escribir 'Ingrese edad 1: ';
	Leer e1;
	Escribir 'Ingrese nombre 2: ';
	Leer n2;
	Escribir 'Ingrese edad 2: ';
	Leer e2;
	Si e1 > e2 Entonces
		Escribir n1,'es el mayor por ', e1-e2, ' años';
	SiNo
		Escribir n2,'es el mayor por ', e2-e1, ' años';
	FinSi
FinProceso
