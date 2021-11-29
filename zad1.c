#include <stdio.h>

int main(){

  int k;

  printf("Unesite broj: ");
  scanf("%d", &k);


  for(int j=1; j < k+1; j++){

    int n = j;
    int zbroj_djelitelja = 0;

    for(int i=1; i<n; i++){

      if(n % i == 0){
        zbroj_djelitelja += i;
      }

    }

    if(zbroj_djelitelja > n){
      printf("%d\n", n);
    }

  }

  return 0;
}
