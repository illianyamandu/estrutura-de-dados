#include "aluno.h"

class Hash{
    private:
        int FuncaoHash(Aluno aluno);
        int max_itens;
        int max_posicoes;
        int qtd_itens;
        Aluno* estrutura;

    public:
        Hash();
        ~Hash();
        bool estaCheia();
        int obterTamanhoAtual();
        void inserir(Aluno aluno);
        void remover(Aluno aluno);
        void buscar(Aluno& aluno, bool& busca);
        void imprimir();
};