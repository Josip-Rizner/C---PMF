#include <stdio.h>


int main(){

    int n, trazeni_broj, broj_je_pronaden = 0;

    printf("Unesite broj manji ili jednak 10: ");
    scanf("%d", &n);

    if(n > 10){
        printf("Niste unijeli prirodan broj manji ili jednak 10");
        //i odma zavrsavamo s programom
        return 0;
    }

    //ako treba da se program vrti dok se ne upise broj u tom intervalu
    /*while(n > 10 && n <= 0){
        printf("Unesite broj manji ili jednak 10: ");
        scanf("%d", n);
    }*/



    //nema smisla kretat od 0,1 ili 2 pa krecemo od prvog manjeg (npr 7%4=3)
    trazeni_broj = 2*n-1;

    while(broj_je_pronaden == 0){

        broj_je_pronaden = 1;

        for(int i=2; i<=n; i++){

            if((trazeni_broj % i) != (i-1)){
                broj_je_pronaden = 0;
            }
        }

        trazeni_broj++;
    }


    //ide trazeni broj-1 jer ce on u petlji iznad uvecat trazeni broj cak i kada je našao
    printf("Traženi broj: %d", trazeni_broj-1);

    return 0;
}
