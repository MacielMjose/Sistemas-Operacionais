#include <stdio.h>


int main ()

{

	printf("Antes do fork ID: %d \n",getpid());
	fork();
	printf("Depois do fork ID: %d \n",getpid());

	//printf("Teste fork ID:%d \n",getpid());

	sleep(3);

	//scanf("%i");

	return(0);


}
