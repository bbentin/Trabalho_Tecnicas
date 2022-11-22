#pragma once
#include "Ente.h"
#include "Gerenciador_Colisoes.h"
#include "../Cabecalhos/ListaEntidades.h"
#include "Chao.h"	
#include "Cactus.h"
#include "Bomba.h"
#include "Balao.h"
#include "Cogumelus.h"
#include "Pedra.h"
#include "Lava.h"
#include <fstream>

namespace Fases {
	class Fase :public Ente {
	
	protected:
		const int horizontal;
		const int vertical;
		sf::Clock relogio;
		sf::RectangleShape background;
		Listas::ListaEntidades Colecao;
		Chao *Chao_1, *Chao_2;
		Jogador* Primeiro;
		Jogador* Segundo;
	public:
		Fase();
		Fase(sf::RenderWindow* tela);
		~Fase();
		void criar_fase();
		void criarEntidade(char letra, sf::Vector2f pos);
		void CriarBomba(sf::Vector2f pos);
		void CriarBalao(sf::Vector2f pos);
		void CriarCogumelo(sf::Vector2f pos);
		void CriarAgua(sf::Vector2f pos);		//Cria cada tipo de Entidade
		void CriarPedra(sf::Vector2f pos);
		void CriarChao(sf::Vector2f pos, int tipo);
		void CriarCactus(sf::Vector2f pos);
		void Criar_Jogadores(sf::Vector2f pos);
	};
}

