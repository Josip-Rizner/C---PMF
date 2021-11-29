#include <stdio.h>


int main(){

    //ako je varijabla ima_takav_trokut=0, onda ne postoji takav trokut (moglo se napravit i s boolean tipom)
    int n, ima_takav_trokut = 0;

    printf("Unesite duljinu hipotenuze: ");
    scanf("%d", &n);

    for(int a=1; a<n; a++){

        for(int b=a+1; b<n; b++){
            if(a*a + b*b == n*n){
                ima_takav_trokut++;
                printf("%d, %d, %d\n", a, b, n);
            }
        }
    }


    if(ima_takav_trokut == 0){
        printf("Ne postoji Pitagorin trokut s duljinom hipotenuze = %d", n);
    }


    return 0;
}
