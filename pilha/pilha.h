typedef int TipoItem;
const int max_itens = 100;


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
    int tamanho();
};