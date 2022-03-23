#include <stdio.h>

void Crossbots(int n){
  if(n%3 == 0){
    printf("Cross");
    if(n%5 == 0)
      printf("Bots");
  }
  else if(n%5 == 0)
    printf("Bots");
  else 
    printf("%d", n);

}

int main(void) {
  int n;
  
  printf("digite um numero : ");
  scanf("%d", &n);

  Crossbots(n);
  
  return 0;
}