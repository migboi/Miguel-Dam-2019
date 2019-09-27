#include <stdio.h>
#include <stdlib.h>

void main(){
    printf("Ejemplo de uso de system():");
    printf("\n\tListado del directorio actual y envio del fichero:");
    printf("%d",system("ls > fiscalidad"));
    printf("\n\tAbrimos con el gedit el fichero ");
    
    printf("%d",system("gedit ficsalida"));
    printf("\n\tEste Comado es erroneo: %d",system("ged"));
    printf("\nFin de programa...\n");





}
