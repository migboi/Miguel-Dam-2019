#include <stdio.h>
#include <unistd.h>

void main(void)
{

    pid_t id_pactual, id_padre;

    id_pactual= getpid();
    id_padre= getppid();

    printf("PID de este procesos: %d\n",id_pactual);
    printf("PID del procesos padre: %d\n ",id_pactual);
    
}

