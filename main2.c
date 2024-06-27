#include <stdio.h>

int main (int argc, char *argv[]) {

    char nombre[50];
    int edad;
    char cedula[20];
    FILE *f = fopen("C:/Users/laboratorio/Documents/Archivo1.txt","r");
    if(f==NULL){
        printf("No existe el archivo");
        return 0;
    }
    while (!feof(f))
    {  
       fgets(nombre,50,f);
       fscanf(f,"%d %s",&edad,cedula);
       printf("El nombre de la persona es: %s\n",nombre);
       printf("La edad es: %d y cedula la es: %s\n",edad,cedula);    
    }
    
    
    fclose(f);
    return 0;
}