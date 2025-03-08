#include <stdio.h>
int main (void){
	
	
	int col=2, lin=2, l, c;
	int m[col][lin];
	int atual, ex, cont;
	m[0][0]=0;
	int inicial = m[0][0];
	for (l = 0; l < lin; l++)
	{
		for (c = 0; c < col; c++)
		{
			printf ("Insira um numero para a linha %d coluna %d: ", l, c);
			scanf("%d", &m[l][c]);
		}
	}
	
	printf("\n");
	
	for (l = 0; l < lin; l++)
	{
		for (c = 0; c < col; c++)
		{
			printf ("%d ", m[l][c]);
			
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(l = 0; l < lin; l++) {
        for(c = 0; c < col; c++) {
        	atual = m[l][c];
        	if(inicial == atual){
        		cont++;
			} else {
				printf("%d : %d\n", inicial, cont);
				inicial = atual;
				cont = 1;
			}
        }
    }
    
    printf("%d : %d", inicial, cont);
	
}
