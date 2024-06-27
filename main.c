#include <stdio.h>

int main (int argc, char *argv[]) {

    char nombre[50];
    int edad;
    char cedula[20];
    printf("Ingrese el nombre de la persona: ");
    fgets(nombre,50,stdin);
    printf("ingrese el la edad y cedula: ");
    scanf("%d %s",&edad,cedula);
    FILE *f = fopen("C:/Users/laboratorio/Documents/Archivo1.txt","a+");
    fputs(nombre,f);
    fprintf(f,"%d %s\n",edad,cedula);
    fclose(f);
    return 0;
}