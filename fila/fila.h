typedef int TipoItem;
const int MAX_ITENS = 100;

class fila {
    private:
        int primeiro, ultimo;
        TipoItem* estrutura;
    
    public:
        fila(); // construtora
        ~fila(); // destrutora
        bool estaVazia();
        bool estaCheia();
        void inserir(TipoItem item);
        TipoItem remover();
        void imprimir();
        int getPrimeiro();
        int getUltimo();
        TipoItem getEstrutura();
};