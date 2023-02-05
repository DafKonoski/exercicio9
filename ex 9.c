//receber do teclado uma mensagem e imprimir quantas letras A, E, I, O, U tem essa mensagem. Considerar minúscula e maiúscula. A função em portugol que acessa letra por letra de uma palavra é strlem(variavel, x). (x é a posição da letra na frase).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char mensagem[50];
  int tam;
  int qA = 0; int qE = 0; int qI = 0; int qO = 0; int qU = 0;
  
  printf("Digite uma mensagem:\n");
  gets(mensagem);

  tam = (strlen (mensagem));
  for(int x = 0; x <= tam; x++){
    if(mensagem[x] == 'A' || mensagem[x] == 'a'){
      qA ++;
    }
    else if(mensagem[x] == 'E' || mensagem[x] == 'e'){
      qE ++;
    }
    else if(mensagem[x] == 'I' || mensagem[x] == 'i'){
      qI ++;
    }
    else if(mensagem[x] == 'O' || mensagem[x] == 'o'){
      qO ++;
    }
    else if(mensagem[x] == 'U' || mensagem[x] == 'u'){
      qU ++;
    }
  }

  printf("%d A\n", qA);
  printf("%d E\n", qE);
  printf("%d I\n", qI);
  printf("%d O\n", qO);
  printf("%d U\n", qU);
    
}