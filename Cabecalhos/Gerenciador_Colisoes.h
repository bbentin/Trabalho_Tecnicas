#pragma once
#include <vector>
#include <list>
using namespace std;
#include "../Cabecalhos/Jogador.h"
#include "../Cabecalhos/Inimigo.h"
#include "Obstaculo.h"
using namespace Personagens;
using namespace Obstaculos;

class Gerenciador_Colisoes{

private:
	vector<Inimigo*> LInimigos;
	list<Obstaculo*> LObstaculos;
	Jogador* Jogador1;
	Jogador* Jogador2;
	
public:

	Gerenciador_Colisoes();
	~Gerenciador_Colisoes();

	bool InserirInimigo(Inimigo* ini);
	void setJogador(Jogador* Jog);

};

