#include <stdio.h>
#include <unistd.h>


int main ()

{
	int n_pid;
    int status = 0;
    int retorno_wait;

	
	printf("PID Original do Programa/Processo = %d ---- \n",getpid());

	n_pid = fork();

	//printf("n_pid %d \n",n_pid);

	if (n_pid < 0)
	{
		printf("Erro na criacao do processo\n");
		return -1;
	}
	
	else if(n_pid == 0 )
	{
        //wait();
		printf("------------FILHO------------------- \n");
		printf("Processo filho diz: \"Para mim, o fork retornou: %d\" \n", n_pid);
		printf("Processo filho diz: \"Meu PID eh = %d\ \n",getpid());

		
	}
	else

	{	
        retorno_wait = wait(&status);
        printf("\n Status do Processo Filho [PID = %d]: Terminado %d                \n\n",retorno_wait,status);
		printf("------------PAI------------------- \n");
		printf("Processo pai diz: \"Para mim, o fork retornou: %d\ \n", n_pid);
		printf("Processo pai diz: \"Meu PID eh = %d\" \n",getpid());
        fork();
        //printf("\n3");

	}



	//sleep(3);


	return(0);
}
