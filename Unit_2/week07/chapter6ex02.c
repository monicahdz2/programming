
#include<stdio.h>
#include<stdlib.h>

int main(void){

    float grade = 0;
    char line[4] = "";

    printf("Please, enter your grade: ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%f", &grade);

    if(grade >= 0 && grade <=60){
        printf("F\n");
    } else if(grade >=61 && grade <=70){
        printf("D\n");
    }else if (grade >=71 && grade <=80) 
    {
        printf("C\n");
    }else if(grade >=81 && grade <= 90){
        printf("B\n");
    }else if(grade >= 91 && grade <= 100){
        printf("A\n");
    }
    

    system("pause");
    return 0;
}