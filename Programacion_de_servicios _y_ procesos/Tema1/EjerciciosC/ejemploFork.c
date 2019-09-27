#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void main(){
    
    pid_t pid, Hijo_pid;
    pid = fork();

    if(pid == -1)//Ha ocurrido un error
     {
        printf("No se ha podido crear el proceso hijo ...");
        exit(-1);

    }
    if(pid == 0) //Nos encontramos en Proceso hijo
    {
        printf(" Soy el proceso hijo \n\t");
        printf(" Mi PiD es %d,El Pid de mi padre es: %d.\n",getpid(),getppid());


    }
    else //Nos encontramos en proceso padre
    {
    Hijo_pid = wait(NULL); //espera la finalizacion del proceso hijo
    printf("Soy el proceso padre: %d.\n\t Mi pid es %d, El pid de mi padre es: %d.\n\t");
    printf("Mi hijo: %d termino. \n",getpid(),getppid(),pid );

    }
    exit(0);


}
