#include <stdio.h>


int main(){

 int broj, zbroj_svih_djelitelja, postoji_takav_broj = 0;

 printf("Unesite broj: ");
 scanf("%d", &broj);


 for(int i=2; i<=broj; i++){

    zbroj_svih_djelitelja = 0;

    for(int j=1; j<i; j++){
        if(i % j == 0){
            zbroj_svih_djelitelja += j;
        }
    }

    if(i == zbroj_svih_djelitelja){
        printf("%d\n", i);
        postoji_takav_broj++;
    }
 }

 if(postoji_takav_broj == 0){
    printf("Ne postoji savršen broj manji ili jednak od %d", broj);
 }

 return 0;
}
