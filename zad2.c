#include <stdio.h>

//Funkcija koja vraća sve djelitelje (strogo manje od predanog broja)
int zbroji_djelitelje(int broj){

    int zbroj_djelitelja = 0;

    for(int i=1; i<broj; i++){

      if(broj % i == 0){
        zbroj_djelitelja += i;
      }
    }

    return zbroj_djelitelja;
}



int main(){

    int m, n, a, b, zbroj_a, zbroj_b;


    printf("Unesite prvi broj: ");
    scanf("%d", &m);

    printf("Unesite drugi broj: ");
    scanf("%d", &n);

    //dvije for petlje koje pregledavaju sve kombinacije
    for(a=m; a<=n; a++){
        zbroj_a = zbroji_djelitelje(a);

        for(b = a+1; b<=n; b++){
            zbroj_b = zbroji_djelitelje(b);

            if((zbroj_a == b) && (zbroj_b == a)){
            printf("a = %d, b = %d\n", a, b);
            }
        }

    }

    return 0;
}



