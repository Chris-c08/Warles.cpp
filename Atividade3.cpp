#include <stdio.h>
#include <stdlib.h>


int main(){

    int num1 = 0;
    printf("Informe um numero: ");
    scanf("%d", &num1);
    printf(" %d \n %d %d \n %d %d %d \n %d %d %d %d \n %d %d %d %d %d \n %d %d %d %d %d %d %d \n ", num1, num1 + 1, num1 + 2, num1 + 3, num1 + 4, num1 + 5, num1 +6, num1 + 7, num1 + 8, num1 + 9 , num1 + 10, num1 + 11, num1 + 12, num1 + 13, num1 + 14, num1 + 15, num1 + 16, num1 + 16, num1 + 17, num1 + 18, num1 + 19, num1 + 20, num1 + 21);

}



#include <stdio.h>
#include <stdlib.h>


int main(){

    int let = 0, maior = 0, quant = 0;
    for (int i = 1; i <= 7; i++){
        printf("Digite um numero: ");
        scanf("%d", &le);
        if(le > maior){
            maior = le;
        }
        quant++;
    }
    printf("O maior dos numeros digitados e: %d ele foi lido %d vezes \n", maior, quant);

}





#include <stdio.h>
#include <stdio.h>


int main(){

    int km = 0;

    printf("Informe sua velocidade atual: ");
    scanf("%d", &km);
    if(km >= 75){
        printf("%d KM Acima da velocidade: MULTA E MENOS 5 PONTOS NA CARTEIRA \n", km);
    } else if (km < 75 && km >= 65){
        printf("%d KM Voce ta correndo um pouco, diminua a velocidade \n", km);
    } else if (km < 65 && km >= 55){
        printf("%d KM Velocidade Normal, continue assim \n", km);
    } else if (km < 55 && km >= 45){
        printf("%d KM Velocidade um pouco baixa aumente porfavor \n", km);
    } else{
        printf("%d KM Trafego mais rapido \n", km);
    }
}
