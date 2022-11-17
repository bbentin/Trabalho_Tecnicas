#pragma once
#include "SFML/Graphics.hpp"
#include "../Cabecalhos/Jogador.h"
#include "../Cabecalhos/Gerenciador_Colisoes.h"
#include "../Cabecalhos/Inimigo.h"
#include "../Cabecalhos/Chao.h"
#include "../Cabecalhos/Cactus.h"
#include "../Cabecalhos/Cogumelus.h"
#include "../Cabecalhos/Pedra.h"
#include "../Cabecalhos/Balao.h"
#include "../Cabecalhos/Bomba.h"

class Principal{
private:
	sf::RenderWindow Tela;
	Jogador Primeiro, Segundo;
	Gerenciador_Colisoes Colisoes;
	Chao floor;
	Inimigo Gabriel, Ze;
	sf::Clock relogio;
	Cactus Cacto;
	Cogumelus Cogumelo;
	Bomba Bomb;
	Balao Chefe; Pedra Ped; //chefe e seu projetil


public:
	Principal();
	~Principal();

	void executar();
};

