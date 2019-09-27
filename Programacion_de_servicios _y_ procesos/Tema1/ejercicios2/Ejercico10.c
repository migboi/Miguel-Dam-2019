#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void main(){
    pid_t pid, hijo_pid, nieto_pid;
    pid = fork();

    if(pid == -1){
        printf("No se ha podido crear el proceso hijo...");
        exit(-1);
    }
    if(pid == 0){
        nieto_pid = fork();
        if(nieto_pid == -1){
            printf("Error creando el proceso nieto");
            exit(-1);
        }
        if(nieto_pid == 0){
            printf("\nSoy el proceso nieto, mi PID es %d, el PID de mi padre es %d", getpid(), getppid());
        }else{
            wait(NULL);//Espero la finalización del nieto
            printf("\nSoy el proceso hijo, mi PID es %d, el de mi padre %d y mi hijo(el nieto) es %d", getpid(),getppid(),nieto_pid);
        }
    }else{
        hijo_pid = wait(NULL); //Espera la finalización del proceso hijo
        printf("\nSoy el proceso padre: \n\t Mi PID es %d, el PID de mi padre es: %d.\n\tMi hijo %d terminó.\n",getpid(), getppid(), pid);
    }
    exit(0);
}
