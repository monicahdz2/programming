
#include<stdlib.h>
#include<stdio.h>

int main(void){

    //En este programa decidí hacerlo más laboreado, de principio el programa solo finaliza hasta que se le indica, también incluí un menú
    //para que pueda escoger el usuario lo que desea hacer

    float km = 0.621371, miles = 1.60934, liters = 0.264172, gallons = 3.78541, result = 0, value = 0;
    int option = 0;
    char line[5]="";
    printf("**********welcome to unit converter!**********");
    //bucle para mantener activo el programa.
    do{
        option = 0;//se reinicia las opciones para no generar un error
        printf("\n\nChoose your type of unit(Enter the number example: 1)\n\n 1.- Exit \n 2.- English unit\n 3.- metric\n");
        printf(">");
        fgets(line,sizeof(line),stdin);
        sscanf(line,"%d", &option);
        
        //se compara la respuesta escogida para mostrar un menú diferente
        if(option >= 1 && option <= 3){
            if (option == 2)
            {
                printf("***English unit***\n\n");
                option = 0;
                printf("1.- Exit\n2.-miles to kilometers\n3.- gallons to liters\n");
                printf(">");
                fgets(line,sizeof(line),stdin);
                sscanf(line,"%d", &option);
                if(option >= 1 && option <= 3){
                    if(option == 2){
                        printf("miles: ");
                        fgets(line,sizeof(line),stdin);
                        sscanf(line,"%f", &value);
                        result = value * miles;
                        printf("%f km", result);
                    }else if(option == 3){
                        printf("galons: ");
                        fgets(line,sizeof(line),stdin);
                        sscanf(line,"%f", &value);
                        result = value * gallons;
                        printf("%f L", result);
                    }
                }
            }else if(option == 3){
                printf("***Metric***\n\n");
                option = 0;
                printf("1.- Exit\n2.-kilometers to milles\n3.- liters to gallons\n");
                printf(">");
                fgets(line,sizeof(line),stdin);
                sscanf(line,"%d", &option);
                if(option >= 1 && option <= 3){
                    if(option == 2){
                        printf("kilometers: ");
                        fgets(line,sizeof(line),stdin);
                        sscanf(line,"%f", &value);
                        result = value / km;
                        printf("%f miles", result);
                    }else if(option == 3){
                        printf("liters: ");
                        fgets(line,sizeof(line),stdin);
                        sscanf(line,"%f", &value);
                        result = value / liters;
                        printf("%f gallons", result);
                    }
                }
            }else{
                printf("See you later!\n");
            }
            
        }else{
            printf("Fail: command invalid, please choose one option\n");
        }
        result = 0;
    }while (option != 1);
    

    system("pause");
    return 0;
}