#include <stdlib.h>
#include <stdio.h>

void main(void){
    pid_t pid;
    int x = 6;

    printf("Valor inicial de la variable: %d\n", x);
    pid = fork();
    
    switch(pid) {
        case -1: //ERROR
            printf("NO SE HA PODIDO CREAR HIJO...");
            exit(-1);
        case 0: //HIJO
            x = x - 5;
            printf("Variable en proceso hijo: %d\n", x);
            break;
        default: //PADRE
            x = x + 5;
            printf("Variable en proceso padre: %d\n", x);
            break;
    }
}
