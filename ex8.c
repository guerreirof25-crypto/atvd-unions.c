#include <stdio.h>
#include <string.h>

struct animal{
    char nome[50];
    char cor[50];
    int tipo;
    union{
        struct{
            int patas;
            float espessura;
            char cauda[5];
        }anfibio;
        struct{
            float bico;
            char autonomia[5];
            float canto;
        }ave;
        struct{
            int dentes;
            float volume;
            int velocidade;
        }mamifero;
        struct{
            char venenoso[5];
            char autonomiah2o[5];
            float ovos;
        }repteis;
    }zoo;
};

int main(){
    struct animal a1 = {"sapo", "verde",0,.zoo.anfibio = {4,1.34,"não"}};
    struct animal a2 = {"canario","amarelo",1,.zoo.ave = {2.5,"não",5.7}};
    struct animal a3 = {"macaco","albino",2,.zoo.mamifero = {32,70.2,60}};
    struct animal a4 = {"jacare","verde",3,.zoo.repteis = {"sim","não",12.0}};
    struct animal a5 = {"perereca","amarela",0,.zoo.anfibio = {0,0.1,"não"}};
    struct animal a6 = {"pardal","azul",1,.zoo.ave = {1.2,"sim",3.4}};
    
    printf("Anfibio: %s, cor: %s, número de patas = %d, espessura da pele = %.2f, possui cauda = %s\n.",
          a1.nome, a1.cor, a1.zoo.anfibio.patas, a1.zoo.anfibio.espessura, a1.zoo.anfibio.cauda);

    printf("Ave: %s, cor: %s, comprimento do bico = %.1f, autonomia de vôo = %s, frequência do canto = %.1f\n.",
           a2.nome, a2.cor,a2.zoo.ave.bico, a2.zoo.ave.autonomia, a2.zoo.ave.canto);

    printf("Mamifero: %s, cor: %s, quantidade de dentes = %d, volume do cérebro = %.1f, velocidade terrestre = %d\n.",
           a3.nome, a3.cor,a3.zoo.mamifero.dentes, a3.zoo.mamifero.volume, a3.zoo.mamifero.velocidade);

    printf("Réptil: %s, cor: %s, venenoso = %s, autonomia debaixo d'água = %s, espessura dos ovos = %.1f\n.",
           a4.nome, a4.cor,a4.zoo.repteis.venenoso, a4.zoo.repteis.autonomiah2o, a4.zoo.repteis.ovos);

    printf("Anfibio: %s, cor: %s, número de patas = %d, espessura da pele = %.2f, possui cauda = %s\n.",
           a5.nome, a5.cor,a5.zoo.anfibio.patas, a5.zoo.anfibio.espessura, a5.zoo.anfibio.cauda);

    printf("Ave: %s, cor: %s , comprimento do bico = %.1f, autonomia de vôo = %s, frequência do canto = %.1f\n.",
           a6.nome, a6.cor,a6.zoo.ave.bico, a6.zoo.ave.autonomia, a6.zoo.ave.canto);
    
    return 0;
}
