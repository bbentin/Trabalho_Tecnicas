#pragma once
#include "Ente.h"
#include "Gerenciador_Colisoes.h"
#include "../Cabecalhos/ListaEntidades.h"
#include "Chao.h"

namespace Fases {
	class Fase :public Ente {
	
	protected:
		const int horizontal;
		const int vertical;
		sf::RectangleShape* background;
		Listas::ListaEntidades Colecao;
		int tilemap[40][30];
		Chao *Chao_1, *Chao_2;
		Inimigo *Um, *Dois;
		Jogador* Primeiro;
		Jogador* Segundo;
	public:
		Fase();
		~Fase();
		void criar_fase();
		virtual void set_tilemap() = 0;
		void set_Chaos(Chao* Primeiro, Chao* Segundo);
		void set_Inimigos(Inimigo* Um, Inimigo* Dois);
		void fill_tilemap();

	};
}

