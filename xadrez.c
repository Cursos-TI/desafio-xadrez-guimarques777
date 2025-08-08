#include <stdio.h>

void moverTorre(int casas){

    if(casas > 0){

printf("Direita\n");
 moverTorre(casas - 1);

    }


}

void moverBispo(int casas){

    if(casas > 0){

printf("Cima, Direita\n");
moverBispo(casas - 1);

    }

}

void moverRainha(int casas){

if(casas > 0){

printf("Esquerda\n");
moverRainha(casas - 1);


}




}


int main() {
printf("movimento da torre:\n");
moverTorre(5);



printf("Movimento do Bispo:\n");
moverBispo(5);


printf("Movimento da Rainha:\n");
moverRainha(8);

printf("Movimento do Cavalo\n");

for(int esq= 1, dir = 1; esq <= dir; esq++, dir-- )
{
for(int cima = 1, baixo = 3 ; cima <= baixo; cima++, baixo--){

printf("Cima,");


}

printf("Direita\n");
}




    return 0;
}