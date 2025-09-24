#include<stdio.h>

struct carro{
    char marca[20];
    char modelo[20];
    int ano;
};

struct venda{
    int tipo;
    struct carro c;
    union{
        long long int cpf;
        long long int rg;
    }comprador;
};

void preenche(struct venda *v){
    printf("Digite a marca do carro: ");
    scanf("%s",v->c.marca);
    printf("Digite o modelo do carro: ");
    scanf("%s",v->c.modelo);
    printf("Digite o ano do carro: ");
    scanf("%d",&v->c.ano);
    printf("1 pra cpf e 2 pra rg: ");
    scanf("%d",&v->tipo);
    if(v->tipo==1){
        printf("digite o cpf: ");
        scanf("%lld",&v->comprador.cpf);
    }
    if(v->tipo==2){
        printf("digite o rg: ");
        scanf("%lld",&v->comprador.rg);
    }
}

void exibe(struct venda v){
        printf("\n======================\n");
        printf("Marca: %s\n", v.c.marca);
        printf("Modelo: %s\n", v.c.modelo);
        printf("Ano: %d\n",v.c.ano);
        if (v.tipo == 1){
            printf("CPF: %lld\n", v.comprador.cpf);
        }else{
            printf("RG: %lld\n", v.comprador.rg);
        }
        printf("======================");
}

int main(){
    struct venda v;
    preenche(&v);
    exibe(v);

    return 0;
}
