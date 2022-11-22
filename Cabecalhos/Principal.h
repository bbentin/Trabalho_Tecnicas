#pragma once
#include "SFML/Graphics.hpp"
#include "../Cabecalhos/Gerenciador_Colisoes.h"
#include "Fs_Summer.h"

class Principal{
private:
	sf::RenderWindow Tela;
	Jogador Primeiro, Segundo;
	Gerenciador_Colisoes Colisoes;
	Fases::Fs_Summer fase1;

	//tirei os objetos estaticos que não precisam mais

public:
	Principal();
	~Principal();
	void executar();
};

