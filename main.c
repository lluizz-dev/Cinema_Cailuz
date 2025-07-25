#include <stdio.h>

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
        
        printf("Escolha uma opção: \n");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1: 
                // função da lista de fimes em Cartaz
                break;
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

    return 0;
}