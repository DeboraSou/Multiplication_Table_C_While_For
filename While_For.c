#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "Portuguese");
	
	int x, n;
	char opcao='s';
	
	    system ("cls");
		system ("color 3F");
	
	while (opcao=='s'){
		printf ("\n\t\t\t\tInsira o número que deseja saber a tabuada: \n");
	    scanf ("%d", &x);
				
	for (n=0; n<=10; n++)
		printf ("\n%d x %d = %d", x, n, x*n);
		
		printf ("\n\nDigite (sim) para continuar ou (não) para finalizar a operação: \n");
	    scanf ("%s", &opcao);
	}
	    
		system ("cls");
		system ("color 3F");
	
	getch ();	
	return 0;
}