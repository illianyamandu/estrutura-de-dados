typedef int TipoItem;

class PilhaDinamica() {
    private:

    public:
        PilhaDinamica(); // Construtor
        ~PilhaDinamica(); // Destrutor
        bool estaVazia();
        bool estaCheia();
        void inserir(TipoItem item);
        TipoItem remover();
        void imprimir();
};