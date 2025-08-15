#include <stdio.h>

int main() {
    int N, num = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) { 
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;

        printf("\n");
    }

    return 0;
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

    printf("Informe sua velocidade atual: ");#include <stdio.h>

int main() {
    int N, num = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) { 
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;

        printf("\n");
    }

    return 0;
}
    scanf("%d", &km);
    if(km >= 75){
        printf("%d KM Acima da velocidade: MULTA E MENOS 5 PONTOS NA CARTEIRA \n", km);
    } else if (km < 75 && km >= 65){
        printf("%d KM Voce ta correndo um pouco, diminua a velocidade \n", km);
    } else if (km < 65 && km >= 55){
        printf("%d KM Velocidade Normal, continue assim \n", km);
    } else if (km < 55 && km >= 45){
        printf("%d KM Velocidade um pouco baixa, tudo bem, mas e melhor aumentar um pouco \n", km);
    } else{
        printf("%d KM Trafego mais rapido \n", km);
    }
}
