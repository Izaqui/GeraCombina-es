#include<stdio.h>



int main(void){
     char consoantes[21]={'B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Y','Z'};
     char vogal[5]={'A','E','I','O','U'};
     int cont=0;
     for(int i=0;i<=20;i++){
         for(int j=0;j<=4;j++){
            for(int x=0;x<=20;x++){
              for(int y=0;y<=4;y++){
                  cont++;
                  printf("%c%c%c%c\n",consoantes[i],vogal[j],consoantes[x],vogal[y]);

             }
           }    
         }
     }
    printf("%i",cont);
}
