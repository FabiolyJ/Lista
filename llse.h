#ifndef LLSE_H
#define LLSE_H
#include <no.h>
#include <QString>

namespace fl{
//CLASSE LISTA LINEAR SIMPLESMENTE ENCADEADA
class LLSE
{
    //ATRIBUTOS
private:
    int quantidadeDeElementos;
    No* inicio;

    //METODOS
public:
    LLSE();
    int getQuantidadeDeElementos() const;
    bool estaVazia() const;
    void inserirInicio(int elemento);
    int retirarInicio();
};


}
#endif // LLSE_H
