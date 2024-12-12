# include <stdio.h>

int inverternumero(int numero){
    int resto, invertido = 0;

    while(numero != 0){
        resto = numero % 10;
        invertido = invertido * 10 + resto;
        numero /= 10;
    }

    return invertido;
}

int main(){
    int numero;
    printf("Digite um numero entre 99 e 1000: ");
    scanf("%d", &numero);

    if(numero > 99 && numero < 1000){
        int invertido = inverternumero(numero);
        printf("resto: %d", invertido);
    }else{
        printf("Digite um numero valido!");
    }
}