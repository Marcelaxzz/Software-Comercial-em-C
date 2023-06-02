#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h> // para utilizar a função usleep()

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
    printf("|\t\t\t         |   |  Digite a opção desejada:               |    |                  \t\t\t\t\t\t|\n"); 
    printf("|\t\t\t         |   |                                         |    |                    \t\t\t\t\t\t|\n");
    printf("|\t\t\t         |   |  1 - Cadastrar produto                  |    |                     \t\t\t\t\t\t|\n");
    printf("|\t\t\t         |   |  2 - Vender produto                     |    |                      \t\t\t\t\t\t|\n");
    printf("|\t\t\t         |   |  3 - Relatório de caixa                 |    |                     \t\t\t\t\t\t\t|\n");
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
    	printf("\033[1;35m"); // Código ANSI roxo.
        printf("\t\t\t\tDigite a opção desejada: ");
        scanf("%d", &escolha);
		printf("\033[0m"); //Redefine a configuração.
        switch (escolha) {
    
            case 1:
            
                printf("\n\t\t\tOpção selecionada: Cadastrar Produto\n\t\t\t");		
				printf("\n\t\tDigite o nome do produto: ");
                scanf(" %[^\n]", nomedoproduto);
                printf("\t\t\tDigite o valor do produto: ");
                scanf("%f", &valor_produto);
                printf("\t\t\tDigite a quantidade do produto: ");
                scanf("%d", &quantidade);
                printf("\t\t\tProduto cadastrado com sucesso!\n\t\t\t");
                break;
                

             case 2:
          
                printf("\t\t\tOpção selecionada: Vender produto\n");
                printf("\t\t\tDigite o nome do produto que deseja colocar em anúncio: ");
                scanf(" %[^\n]", nomedoproduto); /*Essa forma de utilização do scanf com " %[^\n]" é
				utilizada para ler strings que possam conter espaços em branco, garantindo que a leitura não seja interrompida pelo primeiro espaço encontrado.*/
				
                printf("\t\t\tDigite o valor do produto: R$ ");
                scanf("%f", &valor_produto);
                printf("\t\t\tDigite a quantidade do produto: ");
                scanf("%d", &quantidade);
                
                printf("\n\t\t\tDeseja confirmar a venda de %d unidades de %s por R$%.2f cada? (1-Sim / 2-Não)\n", quantidade, nomedoproduto, valor_produto);
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
                printf("\n\t\t\t Opção selecionada: Relatório de caixa\n\t\t\t");
                printf("Saldo atual: R$%.2f\n", saldo);
                printf("\033[0m"); //redefine
                break;
                

            case 4:
            
                printf("\n\t\t\tSaindo do sistema...\n\t\t\t");
                break;
                
            case 5:
                printf("\t\t\t\033[1;93mOpção selecionada: Sobre o sistema\n\n\t\t\t");
                
                printf("\t\t\t\033[1;93m\tVersão: 1.0\n\n\t\t\t");
    			printf("\t\t\t\033[1;93m\tData de Lançamento: 01/06/2023\n\n\t\t\t");
    			printf("\t\t\t\033[1;93m\tDesenvolvedora: Marcela Luiza\n\n\t\t\t");
    			printf("\033[0m");	
    			break;
                

            default:
            
                printf("\t\t\t Opção Inválida! Tente novamente.\n\t\t\t");
                break;
                
                // Imprimir linha inferior da borda
}

    } while (escolha != 5);
  return 0;
}
