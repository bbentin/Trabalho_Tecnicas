#pragma once
#include "SFML/Graphics.hpp"
#include "../Cabecalhos/Jogador.h"
#include "../Cabecalhos/Gerenciador_Colisoes.h"
#include "../Cabecalhos/Inimigo.h"
#include "../Cabecalhos/Chao.h"
#include "../Cabecalhos/Cactus.h"

class Principal{
private:
	sf::RenderWindow Tela;
	Jogador Primeiro, Segundo;
	Gerenciador_Colisoes Colisoes;
	Chao floor;
	Inimigo Gabriel, Ze;
	sf::Clock relogio;
	Cactus Cacto;

public:
	Principal();
	~Principal();

	void executar();
};

