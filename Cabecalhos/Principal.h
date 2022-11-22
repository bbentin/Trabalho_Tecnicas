#pragma once
#include "SFML/Graphics.hpp"
#include "../Cabecalhos/Jogador.h"
#include "../Cabecalhos/Gerenciador_Colisoes.h"
#include "../Cabecalhos/Gerenciador_Grafico.h"
#include "../Cabecalhos/Inimigo.h"
#include "../Cabecalhos/Chao.h"
#include "../Cabecalhos/Cactus.h"
#include "../Cabecalhos/Cogumelus.h"
#include "../Cabecalhos/Pedra.h"
#include "../Cabecalhos/Balao.h"
#include "../Cabecalhos/Bomba.h"
#include "../Cabecalhos/Menu.h"

class Principal{
private:
	int estado;
	bool pause, pressionado, enter, dois_jogadores;


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


public:
	Principal();
	~Principal();

	void executar();
};

