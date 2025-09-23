Em C, tanto struct quanto union servem para agrupar diferentes tipos de dados sob um mesmo identificador, mas a forma como usam memória e o modo de utilização são diferentes.
A struct armazena cada campo em uma área separada de memória, de modo que o tamanho total é a soma dos tamanhos dos membros e todos os campos podem ser usados ao mesmo tempo. 
Já a union faz todos os campos compartilharem o mesmo espaço de memória, de modo que o tamanho total é o do maior membro, e apenas um campo por vez deve ser usado, 
pois gravar em um sobrescreve os demais.

Um exemplo de struct é representar um personagem em um jogo (feito no exercicio 1 de structs), que precisa ter força, energia e experiência simultaneamente:

struct Personagem {
    int forca;
    int energia;
    int experiencia;
};

já um exemplo de union é representar um documento de identidade, em que a pessoa pode ter CPF ou RG, mas só um campo é usado de cada vez:

union Documento {
    int cpf;
    int rg;
};


