typedef int TipoItem;
const int MAX_ITENS = 100;


class pilha {
    private:
        int tamanho;
        TipoItem* estrutura;

    public:
        pilha();
        ~pilha();
        bool estaCheia();
        bool estaVazia();
        void push(TipoItem item);
        TipoItem pop();
        void print();
        int tamanhoPilha();
};