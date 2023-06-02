#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h> // para utilizar a fun��o usleep()

typedef struct Produto {
    char nome[51];
    float valor;
    int quantidade;
} produto;

int main() {
	system("color D");
    setlocale(LC_ALL, "Portuguese");
    int escolha;
    float saldo = 0.0;
    float valor_produto;
    int quantidade;
    char nomedoproduto[51];
    int i,j;
    int largura = 120;
    int altura = 13;
    produto produtos_cadastrados[50];
    int num_produtos_cadastrados = 0;
    
	 for (i = 0; i < largura; i++) {
        printf("=");
    }
    printf("\n");
for (i = 0; i < altura - 2; i++) {
        printf("|");
        for (j = 0; j < largura - 2; j++) {
            printf(" ");
        }
        printf("|\n");
    }
  printf("|\t\t\tSeja bem-vindo ao sistema CYBERNETIC - O seu Site de Produtos E-SPORTS!\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t                                                                     \t\t\t\t\t\t|\n");
    printf("|\t\t\t           _______________________________________________            \t\t\t\t\t\t|\n");
    printf("|\t\t\t          /                                                \\           \t\t\t\t\t\t|\n");
    printf("|\t\t\t         |    _________________________________________     |            \t\t\t\t\t\t|\n");
    printf("|\t\t\t         |   |                                         |    |              \t\t\t\t\t\t|\n");
    printf("|\t\t\t         |   |  CYBERNETIC - Produtos E-Sports         |    |              \t\t\t\t\t\t|\n");
    printf("|\t\t\t         |   |  Sistema de Gerenciamento de Produtos   |    |                \t\t\t\t\t\t|\n");
    printf("|\t\t\t         |   |                                         |    |                 \t\t\t\t\t\t|\n");
    printf("|\t\t\t         |   |  Digite a op��o desejada:               |    |                  \t\t\t\t\t\t|\n"); 
    printf("|\t\t\t         |   |                                         |    |                    \t\t\t\t\t\t|\n");
    printf("|\t\t\t         |   |  1 - Cadastrar produto                  |    |                     \t\t\t\t\t\t|\n");
    printf("|\t\t\t         |   |  2 - Vender produto                     |    |                      \t\t\t\t\t\t|\n");
    printf("|\t\t\t         |   |  3 - Relat�rio de caixa                 |    |                     \t\t\t\t\t\t\t|\n");
    printf("|\t\t\t         |   |  4 - Sair do sistema                    |    |                       \t\t\t\t\t\t|\n");
    printf("|\t\t\t         |   |  5 - Sobre o sistema                    |    |                        \t\t\t\t\t\t|\n");
    printf("|\t\t\t         |   |                                         |    |   						 \t\t\t\t\t\t|\n");
    printf("|\t\t\t         |   |_________________________________________|    |                   		\t\t\t\t\t\t\t|\n");
    printf("|\t\t\t         |                                                  |                          \t\t\t\t\t\t|");
    printf("|\t\t\t          \\_________________________________________________/                           \t\t\t\t\t\t|");
    printf("|\t\t\t                \\___________________________________/                                    \t\t\t\t\t\t|");
	 printf("|\t\t\t                                                                                          \t\t\t\t\t\t|");
	 
    printf("\n");
   for (i = 0; i < largura; i++) {
        printf("=");
    }
    printf("\n");
    do {
    	printf("\n\n");
    	printf("\033[1;35m"); // C�digo ANSI roxo.
        printf("\t\t\t\tDigite a op��o desejada: ");
        scanf("%d", &escolha);
		printf("\033[0m"); //Redefine a configura��o.
        switch (escolha) {
    
            case 1:
            
                printf("\n\t\t\tOp��o selecionada: Cadastrar Produto\n\t\t\t");		
				printf("\n\t\tDigite o nome do produto: ");
                scanf(" %[^\n]", nomedoproduto);
                printf("\t\t\tDigite o valor do produto: ");
                scanf("%f", &valor_produto);
                printf("\t\t\tDigite a quantidade do produto: ");
                scanf("%d", &quantidade);
                printf("\t\t\tProduto cadastrado com sucesso!\n\t\t\t");
                break;
                

             case 2:
          
                printf("\t\t\tOp��o selecionada: Vender produto\n");
                printf("\t\t\tDigite o nome do produto que deseja colocar em an�ncio: ");
                scanf(" %[^\n]", nomedoproduto); /*Essa forma de utiliza��o do scanf com " %[^\n]" �
				utilizada para ler strings que possam conter espa�os em branco, garantindo que a leitura n�o seja interrompida pelo primeiro espa�o encontrado.*/
				
                printf("\t\t\tDigite o valor do produto: R$ ");
                scanf("%f", &valor_produto);
                printf("\t\t\tDigite a quantidade do produto: ");
                scanf("%d", &quantidade);
                
                printf("\n\t\t\tDeseja confirmar a venda de %d unidades de %s por R$%.2f cada? (1-Sim / 2-N�o)\n", quantidade, nomedoproduto, valor_produto);
                int confirmacao;
                scanf("%d", &confirmacao);
                if (confirmacao == 1) {
                float total_value = valor_produto * quantidade;
                saldo += total_value;
                printf("\t\t\tVenda realizada com sucesso! Total arrecadado: R$%.2f\n\t\t\t", total_value);
                
                
                } else {
                    printf("\t\t\tVenda cancelada.\n");
                   
                }
                break;
                
                
            case 3:
            	printf("\033[0;34m");//cor azul escuro
                printf("\n\t\t\t Op��o selecionada: Relat�rio de caixa\n\t\t\t");
                printf("Saldo atual: R$%.2f\n", saldo);
                printf("\033[0m"); //redefine
                break;
                

            case 4:
            
                printf("\n\t\t\tSaindo do sistema...\n\t\t\t");
                break;
                
            case 5:
                printf("\t\t\t\033[1;93mOp��o selecionada: Sobre o sistema\n\n\t\t\t");
                
                printf("\t\t\t\033[1;93m\tVers�o: 1.0\n\n\t\t\t");
    			printf("\t\t\t\033[1;93m\tData de Lan�amento: 01/06/2023\n\n\t\t\t");
    			printf("\t\t\t\033[1;93m\tDesenvolvedora: Marcela Luiza\n\n\t\t\t");
    			printf("\033[0m");	
    			break;
                

            default:
            
                printf("\t\t\t Op��o Inv�lida! Tente novamente.\n\t\t\t");
                break;
                
                // Imprimir linha inferior da borda
}

    } while (escolha != 5);
  return 0;
}
