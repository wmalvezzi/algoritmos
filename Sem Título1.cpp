#include<stdio.h>
#include<stdlib.h> 
int main (){
     float x, y;
    printf("informe um valor para x: \n");
    scanf("%f", &x);
    printf("informe um valor para y: \n");
    scanf("%f", &y);
        if (x >= 0 || x <=10) {
          if (x <= 5) {
                if (y <= x || y >= 10 - x){
                      printf("\nVerdadeiro\n");}
                 else {
                      printf("\nFalso\n");
                      }            } 
                if (x >= 5) {
               if (y >= x  || y <= 10 - x){
                     printf("\nVerdadeiro\n\n");}
                      else {
                      printf("\nFalso\n");
                      } }                       }
    system("PAUSE");
    return (0);        }

