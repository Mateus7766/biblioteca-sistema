#include <stdio.h>

typedef struct
{
    int codigo;
    char titulo[50];
    char autor[50];
    int disponivel;
    int emprestimos;
    float multas;
} Livro;

void mostrarMenu()
{
    printf("\n===== GESTAO DE ESTOQUE =====\n");
    printf("1 - Cadastrar produtos\n");
    printf("2 - Adicionar estoque\n");
    printf("3 - Retirar estoque\n");
    printf("4 - Exibir relatorio\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
}

void cadastrarLivros(Livro livros[], int *total);
void registrarEmprestimo();
void consultarLivros();
float calcularMulta(int diasAtraso);

int main()
{
    int opcao;
    do
    {
        exibirMenu();
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            cadastrarLivros();
            break;

        case 2:
            registrarEmprestimo();
            break;

        case 3:
            registrarDevolucao();
            break;

        case 4:
            consultarLivros();
            break;

        case 5:
            relatorioGeral();
            break;

        case 0:
            printf("\nPrograma encerrado. Obrigado!\n");
            break;

        default:
            printf("\nOpcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);
}

float calcularMulta(int diasAtraso) {
    int multa;
    multa = diasAtraso * 2;
    return multa;
}