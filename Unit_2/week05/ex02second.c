
#include<stdio.h>

int main(void){

  int s= 0,hr,min,sg;
//variable seg es la que guardará los segundos ingresados
  printf("Please, input your seconds: ");
  scanf("%d", &s);
  hr = (s/3600);
  min = (s -(hr*3600))/60;
  sg = s -(hr*3600+min*60);

  if(hr <10){
    printf("0%d:",hr);
  }else{
    printf("%d:",hr);
  }
  if(min<10){
    printf("0%d:",min);
  }else{
    printf("%d:",min);
  }
  if(sg<10){
    printf("0%d:",sg);
  }else{
    printf("%d\n",sg);
  }
  return 0;
}