#include "SingletonObra.h"

SingletonObra::SingletonObra():obras(MAX_OBRAS)
{

}

SingletonObra& SingletonObra::getInstancia()
{
    // TODO: insert return statement here
    static SingletonObra instancia;
    return instancia;

}

SingletonObra::~SingletonObra()
{
}

ArrayGenerico<Obra>& SingletonObra::getObras()
{
    // TODO: insert return statement here
    return obras;
}
