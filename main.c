#include <stdio.h>
//Bairros:  
//   0 = Jardim California
//   1 = Novo Horizonte
//   2 = Centro

int main() {
    //[7]Referente a 7 dias da semana e [3] Referente aos 3 Bairros descritos.
    float milimetros_de_chuva[7][3];
    
    //versao anterior do codigo para nao perder
    //for (int dia = 0; dia < 7; dia++) {
         //printf("Digite a quantidade de chuva por dia %d: ",dia);
         //scanf("%f",&milimetros_de_chuva[dia][0]); 
         
    //bloco 1 LÊ pergunta e guarda!

    for (int dia = 0; dia < 7; dia++) {
        for(int bairro = 0; bairro < 3; bairro++){
            
            //Esse foi substituido
            //printf("Digite a quantidade de chuva do dia %d, bairro %d: " , dia, bairro );
            
            printf("Digite a quantidade de chuva do dia %d, " , dia);
            // troca o número do bairro (0, 1 ou 2) pelo nome dele, pra quem usa o programa entender
            switch (bairro) {
                case 0: printf("Jardim California"); break;
                case 1: printf("Novo Horizonte"); break;
                case 2: printf("Centro"); break;

            }
            printf(": ");
            scanf("%f", &milimetros_de_chuva[dia][bairro]);
                
        }
    
    }
    //Bloco 2 MOSTRA a lista final!
        
    for (int dia = 0; dia < 7; dia++) {
        for(int bairro = 0; bairro < 3; bairro++){
            printf("Dia %d, " , dia);
            
            // mostra o nome do bairro no lugar do número
            switch (bairro) {
                case 0: printf("Jardim California"); break;
                case 1: printf("Novo Horizonte"); break;
                case 2: printf("Centro"); break;
            }
            //printf("milimetros_de_chuva %d: %.1f\n",dia, milimetros_de_chuva[dia][bairro]);
            // trocado o zero que correspondia ao bairro 0 Jardim California,agora vai rodar todos 
            //os bairros.
            // printf("Dia %d, bairro %d: %.1f\n",dia , bairro, milimetros_de_chuva[dia][bairro]);
            printf(": %.1f\n", milimetros_de_chuva[dia][bairro]);
        }
    
    }
    
    
    return 0;

}
