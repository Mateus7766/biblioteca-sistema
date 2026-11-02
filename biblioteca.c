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

int main()
{
    Livro livros[4];
    int total = 0;
    int opcao;
    do
    {
        // exibirMenu();
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            // cadastrarLivros(livros, &total);
            break;

        case 2:
            // registrarEmprestimo(livros, total);
            break;

        case 3:
            // registrarDevolucao(livros, total);
            break;

        case 4:
            // consultarLivros(livros, total);
            break;

        case 5:
            // relatorioGeral(livros, total);
            break;

        case 0:
            printf("\nPrograma encerrado. Obrigado!\n");
            break;

        default:
            printf("\nOpcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}