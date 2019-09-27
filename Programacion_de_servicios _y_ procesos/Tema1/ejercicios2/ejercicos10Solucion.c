#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

//abuelo-hijo-nieto

void main(){

    pid_t pid, Hijo_pid, pid2, Hijo2_pid;
    pid=fork(); //soy el abuelo creo a hijo

    if(pid==-1){
    printf("No se ha podiod crear el proceso hijo");
    exit(-1);
    }
    if(pid==0){//Estamos en el proceso hijo

        pid2=fork();//soy el hijo creo nieto
        switch(pid2){
            
            case -1: //Error
                printf("No se ha podido crea eñ hijo en el hijo");
                exit(-1);
                break;

            case 0://proceso hijo
                printf("soy el proceso Nieto %d, Mi padre es %d ",getpid(),getppid());
                break;

            default:
                Hijo2_pid=wait(NULL);//ESPERA FINALIZAR EL PROCESO
                printf("Soy el proceso Hijo %d, Mi padres es : %d",getpid(),getppid());
                
        }
    
    }


}
