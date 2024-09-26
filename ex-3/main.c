#include <stdlib.h> 
#include <stdio.h>

int main()
{	
	int compte = 5;
	char mot[50];
	printf("Saisissez un mot de moins de 50 caractères:");
	scanf("%49s", mot);

while (compte > 0)
{
	printf("Tralalère!\n");
	compte=compte-1;
}
	return(0);
}

