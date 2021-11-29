#include <stdio.h>
/*Broj je strogo padajući ako su znamenke s lijeva na desno poredane po veličini. Znaći za broj 356 vrijedi 3<5<6 i to znači da je broj strogo padajući.
Mora bit < ne smije bit <= .(Svi brojevi od jednoznamenkasti brojevi su strogo padajući, možeš testirat u programu)
Brojevi se upisuju dok ne upišeš neki broj koji nije strogo padajući npr. 22, 354, 541 itd.
A za svaki broj koji je strogo padajući moraš ispisat sumu znamenki i najmanju znamenku (to je uvijek ona sasvim lijevo).
*/

int main(){

    int n = 0, najmanja_znamenka = 0, sum = 0;


    while(1){
        printf("Unesite broj: ");
        scanf("%d", &n);

        if(n >= 10){
            while(n >= 10){
                if((n % 100)/10 >= n % 10){
                    //tu se provjeruje znamenka sasvim desno i ona lijevo od te. (broj ide ovako abcdxy i ti provjeravaš x >= y)
                    printf("Broj nije strogo padajući\n");
                    return 0;
                }
                else{
                    //ako nije zadovoljen uvijet u onom gore if-u dodaješ zadnje znamenku u sum i s n/= 10 je mičeš. I ponovno postavljaš najmanju znamenku
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
