#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void existeGado(numeroGado, matrizGado)
{
    printf("O número do gado é %d", numeroGado);
    printf("O número do pasto é %d", matrizGado);

}

int main()
{
    int par, impar,i,j,k, numberGado;
    par = 0;
    impar = 0;
    int gadoPar[42];
    int gadoImpar[42];
    
    
    
    printf("#####Sistema de contagem de gados### \n");
    printf("Por favor digite o número do gado: \n");
    

    for(i=1; i<10; i++){
       
        scanf("%d", &numberGado);
        
            if((numberGado % 2) != 0){
                existeGado(numberGado, gadoPar[i]);

                printf("O gado %d vai  pro pasto ímpar \n", numberGado);
                             
                gadoImpar[impar] = numberGado;
                impar = impar + 1;
                
                //printf("o i é %d, o par é %d \n", i, par);
                                
            }else{
                existeGado(numberGado, gadoImpar[i]);

                printf("O gado %d vai pro pasto par \n", numberGado);
                           
                gadoPar[par] = numberGado;
                par = par + 1;
                
                
                //printf("o i é %d, o ímpar é %d \n", i, impar);
                
                
            }
    }
    printf("Os gados pares são:");
    for (j=0; j<par; j++){
       printf("%d - ", gadoPar[j]);
       
   }
   printf("\n Os gados ímpares são:");
    for (k=0; k<impar; k++){
       printf("%d - ", gadoImpar[k]);
        //printf("\n Os gados ímpares são: %d -", gadoImpar[j]);
   }

   
    
}