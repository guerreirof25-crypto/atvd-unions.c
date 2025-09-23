#include<stdio.h>

struct preco{
    int tipo;
    union{
     float real;
     float dolar;
     float euro;
    }valor;
};

void exibe(struct preco p){
    if(p.tipo==0){
        printf("o preço é R$ %.2f\n",p.valor.real);
    }if(p.tipo==1){
        printf("o preço é $ %.2f\n",p.valor.dolar);
    }if(p.tipo==2){
        printf("o preço é € %.2f\n",p.valor.euro);
    }
}

struct preco altera(struct preco p,int t){
    float novovalor;
    if(p.tipo==0){
        novovalor=p.valor.real;
    }if(p.tipo==1){
        novovalor=(p.valor.dolar)*5.28;
    }if(p.tipo==2){
        novovalor=(p.valor.euro)*6.24;
    }
    p.tipo=t;
    if(p.tipo==0){
        p.valor.real=novovalor;
    }if(p.tipo==1){
        p.valor.dolar=novovalor/5.28;
    }if(p.tipo==2){
        p.valor.euro=novovalor/6.24;
    }
 return p;   
}

int main(){
    struct preco p1={1,54.00};
    exibe(p1);
    p1 = altera(p1,0);
    exibe(p1);
    return 0;
}
