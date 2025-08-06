#include <stdio.h>
#include <stdlib.h>

void voltarMenu();
void listaFilmes();

int main()
{
    int opcao;
    
    do {
        printf("------------- Cinema CaiLuz -------------\n\n");
        
        printf("1. Filmes em Cartaz.\n");
        printf("2. Reserva assento.\n");
        printf("3. Atualizar a reserva.\n");
        printf("4. Cancelar reserva.\n");
        printf("5. Sair.\n\n");
        
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1: 
                listaFilmes();
                voltarMenu(&opcao);
            case 2:
                // função que reserva os assento (CREATE)
                break;
            case 3:
                // função que atualiza a reserva (UPDATE)
                break;
            case 4:
                // função que cancela a reserva (DELETE)
                break;
            case 5:
                printf("Saindo...");
                break;
            default: 
                printf("Opção inválida!\n");
                printf("Digite novamente!\n");
        }
    } while (opcao < 1 || opcao > 5);
}

void voltarMenu(int *Popcao) {
    *Popcao = 100;
    while (*Popcao > 1 || *Popcao < 0) {
        printf("Deseja voltar ao menu?\n");
        printf("0 - Não / 1 - Sim\n");
        scanf("%d", Popcao);
        
        if (*Popcao > 1 || *Popcao < 0) {
            printf("Opção inválida.\n Tente novamente!\n");
        }
    }
    
    if (*Popcao == 1) {
        *Popcao = 0;
    }
    else if (*Popcao == 0) {
        *Popcao = 1;
    }
    system("clear");
}

void listaFilmes() {
    system("clear");
    printf("1. Quarteto Fantástico.\n");
    printf("2. Superman.\n");
    printf("3. Smurfs.\n");
    printf("4. Lilo & Stitch.\n");
    printf("5. Como Treinar O Seu Dragão.\n\n");
}
