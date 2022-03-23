//Bibliotecas
#include <stdio.h>

//Função
void Crossbots(int n){
//Se o número for múltiplo de 3
  if(n%3 == 0){
    printf("Cross");
//Se o número for múltiplo de 5
    if(n%5 == 0)
      printf("Bots");
  }
//Se o número for apenas múltiplo de 5
  else if(n%5 == 0)
    printf("Bots");
//Se ele não for múltiplo de ambos ele printa o próprio número
  else 
    printf("%d", n);

}

int main(void) {
//Variável
  int n;
  
//Recebendo o número
  printf("digite um numero : ");
  scanf("%d", &n);

//Chamando a função
  Crossbots(n);
  
  return 0;
}
