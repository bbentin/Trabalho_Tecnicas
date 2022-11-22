#include "../Cabecalhos/ListaEntidades.h"

Listas::ListaEntidades::ListaEntidades() {
	pTela = nullptr;
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

void Listas::ListaEntidades::percorrer(){

	Lista<Entidade>::Elemento<Entidade>* pElemento = ListaE.getPrimeiro();
	while (pElemento != ListaE.getAtual()) {
		pElemento->getInfo()->setTela(pTela);
		pElemento->getInfo()->executar();
		pElemento = pElemento->getProx();
	}
}

