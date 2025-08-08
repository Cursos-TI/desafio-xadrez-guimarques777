#include <stdio.h>


int main() {

int torre = 1, bispo = 1, rainha, esquerda , baixo = 1;

printf("Movimento da torre\n");
while(torre <= 5)
{
printf("Direita\n");
torre++;    


}

printf("Movimento do bispo\n");

do {

printf("cima,direita\n");

bispo++;




}while (bispo <= 5);

printf("Movimento da rainha\n");

for(rainha = 1; rainha <= 8; rainha++)
{
    printf("Esquerda\n");
}

printf("Movimento do Cavalo\n");

for(esquerda = 1; esquerda <= 1; esquerda++){

while (baixo <= 2){

    printf("Baixo,");
    baixo++;

}


printf("Esquerda\n");


}





    return 0;
}