typedef int TipoItem;

struct No {
    TipoItem valor;
    No* proximo;
};

class PilhaDinamica {
    private:
        No* noTopo;

    public:
        PilhaDinamica(); // Construtor
        ~PilhaDinamica(); // Destrutor
        bool estaVazia();
        bool estaCheia();
        void inserir(TipoItem item);
        TipoItem remover();
        void imprimir();
};