#pragma once
#include "SFML/Graphics.hpp"
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
	int estado;
	bool pause;

	Jogador Primeiro, Segundo;
	Gerenciador_Colisoes Colisoes;
	Gerenciador_Grafico GGrafico;
	Chao floor;
	sf::Clock relogio;

	Menu MenuPrincipal;

	Cactus Cacto;
	Cogumelus Cogumelo;
	Bomba Bomb;
	Balao Chefe; Pedra Ped; //chefe e seu projetil

	//tirei os objetos estaticos que n�o precisam mais

public:
	Principal();
	~Principal();
	void executar();
};

