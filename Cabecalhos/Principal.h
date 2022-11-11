#pragma once
#include "SFML/Graphics.hpp"
#include "../Cabecalhos/Jogador.h"
#include "../Cabecalhos/Gerenciador_Colisoes.h"
#include "../Cabecalhos/Inimigo.h"

class Principal{
private:
	sf::RenderWindow Tela;
	Jogador Primeiro, Segundo;
	//Gerenciador_Colisoes Colisoes;
	Inimigo Gabriel, Ze;
	sf::Clock relogio;
public:
	Principal();
	~Principal();

	void executar();
};

