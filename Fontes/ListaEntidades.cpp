#include "../Cabecalhos/ListaEntidades.h"


Listas::ListaEntidades::ListaEntidades(){
}
Listas::ListaEntidades::~ListaEntidades() {
	LimpaLista();
}

bool Listas::ListaEntidades::InserirElemento(Entidade* Elemento){
	return(ListaE.InserirElemento(Elemento) ? true : false);
}

bool Listas::ListaEntidades::RetirarElemento(Entidade* Elemento){
	return(ListaE.RemoverElemento(Elemento) ? true : false);
}

void Listas::ListaEntidades::LimpaLista() {
	ListaE.LimpaLista();
}

