#include "llse.h"
namespace fl{

bool LLSE::estaVazia()const{
    return (quantidadeDeElementos == 0);
}

int LLSE::getQuantidadeDeElementos() const
{
    return quantidadeDeElementos;
}

LLSE::LLSE():
    quantidadeDeElementos(0),
    inicio(0)
{
}

void LLSE::inserirInicio(int elemento){
    try {
        No *aux= new No(elemento);
        quantidadeDeElementos++;
        aux->setProximo(inicio);
        inicio = aux;
    } catch (std::bad_alloc &Erro) {
        throw QString("No não foi criado - inserirInicio");
    }
}

int LLSE::retirarInicio(){
    if(estaVazia()) throw QString("Lista esta vazia (metodo retirarInicio)");
    quantidadeDeElementos--;
    No* aux = inicio;
    inicio = aux->getProximo();
    int valor = aux->getDado();
    delete aux;
    return (valor);
}




}
