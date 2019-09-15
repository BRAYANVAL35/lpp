#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <io.h>
#include <fcntl.h>
#include <time.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string>
#include <iostream>
using namespace std;

int numero, suma, contador;
main()
{
	contador = 0;
	suma = 0;
	while (contador < 15) 
	{
		contador = contador + 2;
		cout<<("\r\n");
		cout<("%d", contador);
suma = suma + contador;
	}
	cprintf("%d", suma);
}
