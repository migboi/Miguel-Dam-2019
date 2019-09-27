#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void main(){
    pid_t pid ,hijo_pid;
    int var=6;

    pid=fork();

    if(pid==1){
        printf("No se ha podido crear el proceso");
        exit(-1);

    }
    if(pid==0){
        var=var-5;
        printf("VAriable proceso hijo: %d",var);
    }
    else{//no escontamos en el padre
        hojo_pid=wait(NULL);//espera hasta que termine el hijo
        var=var+5;
        printf("Variable proceso pasdre %d", var);

    }
    exit(0);    
}
