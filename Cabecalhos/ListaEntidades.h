#pragma once
#include "Lista.h"
#include "Entidade.h"
using namespace Entidades;
namespace Listas {
	class ListaEntidades {
	public:
		Lista<Entidade> ListaE;
		sf::RenderWindow* pTela;

		ListaEntidades();
		~ListaEntidades();

		bool InserirElemento(Entidade* Elemento);
		bool RetirarElemento(Entidade* Elemento);
		void LimpaLista();
		void percorrer();

	};
}

