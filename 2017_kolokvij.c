#include <stdio.h>


int main(){

    int n = 0, najmanja_znamenka = 0, sum = 0;


    while(1){
        printf("Unesite broj: ");
        scanf("%d", &n);

        if(n >= 10){
            while(n >= 10){
                if((n % 100)/10 >= n % 10){
                    printf("Broj nije strogo padajući\n");
                    return 0;
                }
                else{
                    sum += n % 10;
                    n /= 10;
                    najmanja_znamenka = n % 10;
                }
            }

                printf("Broj je strogo padajuci\n");
                printf("Najmanji broj: %d, Suma: %d\n", najmanja_znamenka, sum+najmanja_znamenka);
        }
        else{
             printf("Broj je strogo padajući\n");
             printf("Najmanji broj: %d, Suma: %d\n", n, n);
        }


    }

    return 0;
}
