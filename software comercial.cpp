#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>

/*Software Comercial para a CYBERNETIC-Produtos E-Sports(camisetas e acessórios de times do cenário gamer). Esse nome foi escolhido em referência ao jogo CYBERPUNK 2077 e o objetivo
é fazer um menu onde fique claro as informações e de fácil acesso para todos os públicos. */

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
    float total_value;
    int quantidade;
    char nomedoproduto[51]; /*reservando um espaço na memória para armazenar uma sequência de caracteres de até 50 caracteres. 
	O tamanho 51 é usado para "guardar" o caractere nulo que marca o final da string.*/
    int i,j;
    int largura = 120;
    int altura = 13;
    produto produtos_cadastrados[50];
    int num_produtos_cadastrados = 0;
    
	 for (i = 0; i < largura; i++) {
        printf("="); //borda
    }
    printf("\n");
for (i = 0; i < altura - 2; i++) {
        printf("|");
        for (j = 0; j < largura - 2; j++) {
            printf(" "); //parte da lateral da borda
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
    	system("color D");
        printf("\t\t\t\tDigite a opção desejada: ");
        scanf("%d", &escolha);
        switch (escolha) {
    
            case 1:
            	 system("cls"); //pra limpar a opção anterior
            	system("color D");
                printf("\n\t\t\tOpção selecionada: Cadastrar Produto\n\t\t\t");		
				printf("\n\t\t\tDigite o nome do produto: ");
                scanf(" %[^\n]", nomedoproduto);
                printf("\t\t\tDigite o valor do produto: ");
                scanf("%f", &valor_produto);
                printf("\t\t\tDigite a quantidade do produto: ");
                scanf("%d", &quantidade);
                printf("\t\t\tProduto cadastrado com sucesso!\n\t\t\t");

                break;
                

             case 2:
             	system("cls");
          		system("color D");
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
                total_value = valor_produto * quantidade;
                saldo += total_value; //valor total
                
                printf("\t\t\tVenda realizada com sucesso! Total arrecadado: R$%.2f\n\t\t\t", total_value);
                
                } else {
                	system("cls");
                	system("color D");
                    printf("\t\t\tVenda cancelada com sucesso.\n");
                  
                }
                break;
                
                
            case 3:
            	system("cls");
            	system("color D");
                printf("\n\t\t\t Opção selecionada: Relatório de caixa\n\t\t\t");
                printf("\n\t\t\t\tSaldo atual: R$%.2f\n", saldo);
     
                break;
                

            case 4:
            	system("cls");
            	system("color D");
                printf("\t\t\t\tSaindo do sistema...");

                break;
                
            case 5:
            	system("cls");
            	system("color D");
                printf("\t\t\tOpção selecionada: Sobre o sistema\n\t\t\t");
                
                printf("\t\t\t\tVersão: 1.0\n\t\t\t");
    			printf("\t\t\t\tData de Lançamento: 07/06/2023\n\t\t\t");
    			printf("\t\t\t\tDesenvolvedora: Marcela Luiza\n\t\t\t");

    			break;
                

            default:
            	system("color D");
                printf("\t\t\t\tOpção Inválida! Tente novamente.\n\t\t\t");
                break;
                
                // linha inferior da borda
}

    } while (escolha != 4); /*loop do-while será repetido enquanto escolha for diferente de 4.*/
  return 0;
}
