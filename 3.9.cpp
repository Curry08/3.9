#include <stdio.h>

int main(){
    float peso,dist,prz;
    int urg;
    printf("Inserisci il peso[kg]: ");
    scanf("%f",&peso);
    printf("Inserisci la distanza[km]: ");
    scanf("%f",&dist);
    printf("Inserisci il livello di urgenza[Non urgentre=0 urgente=1]: ");
    scanf("%d",&urg);
    if(dist<100 && urg==0){
        prz=peso;
    }
    else if(dist<=300 && dist>100 && urg==0){
        prz=peso*2;
    }
    else if(dist>300 && urg==0) {
        prz=peso*3;
    }
    else if(dist<100 && urg==1){
        prz=peso*2.5;
    }
    else if(dist<=300 && dist>100 && urg==1){
        prz=peso*3.5;
    }
    else if(dist>300 && urg==1) {
        prz=peso*4;
    }
    printf("Il prezzo è di %f euro",prz);
    return 0;
}
