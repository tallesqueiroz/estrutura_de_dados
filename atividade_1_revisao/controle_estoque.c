#include <stdio.h>

#define MAX_PRODUTOS 2

typedef struct {
    int codigo;
    char descricao[100];
    float precoCompra;
    float precoVenda;
    int quantidadeEstoque;
    int estoqueMinimo;
} Produto;

void cadastrarProduto(Produto* p) {
    printf("Digite o codigo do produto: ");
    scanf("%d", &p->codigo);
    getchar();
    printf("Digite a descricao do produto: ");
    fgets(p->descricao, sizeof(p->descricao), stdin);
    printf("Digite o preco de compra: R$ ");
    scanf("%f", &p->precoCompra);
    printf("Digite o preco de venda: R$ ");
    scanf("%f", &p->precoVenda);
    printf("Digite a quantidade em estoque: ");
    scanf("%d", &p->quantidadeEstoque);
    printf("Digite o estoque minimo permitido: ");
    scanf("%d", &p->estoqueMinimo);
    printf("\n");
}

void calcularLucro(Produto p) {
    float lucro = p.precoVenda - p.precoCompra;
    float percentualLucro = (lucro / p.precoCompra) * 100;
    
    printf("Produto: %s\n", p.descricao);
    printf("Lucro por unidade: R$ %.2f\n", lucro);
    printf("Percentual de lucro: %.2f%%\n\n", percentualLucro);
}

void mostrarEstoqueMinimo(Produto produtos[], int n) {
    printf("Produtos com estoque abaixo do minimo:\n");
    for (int i = 0; i < n; i++) {
        if (produtos[i].quantidadeEstoque < produtos[i].estoqueMinimo) {
            printf("Codigo: %d | Descricao: %s | Estoque atual: %d | Estoque minimo: %d\n",
                   produtos[i].codigo, produtos[i].descricao, produtos[i].quantidadeEstoque, produtos[i].estoqueMinimo);
        }
    }
    printf("\n");
}

int main() {
    Produto produtos[MAX_PRODUTOS];

    for (int i = 0; i < MAX_PRODUTOS; i++) {
        printf("Cadastro do produto %d:\n", i + 1);
        cadastrarProduto(&produtos[i]);
    }

    for (int i = 0; i < MAX_PRODUTOS; i++) {
        calcularLucro(produtos[i]);
    }

    mostrarEstoqueMinimo(produtos, MAX_PRODUTOS);

    return 0;
}
