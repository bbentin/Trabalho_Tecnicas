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
	vector<sf::Vector2f> mins_e_maximos;
	list<sf::Vector2f> intervalos_ativos;
	Jogador* Jogador1;
	Jogador* Jogador2;
	
public:

	Gerenciador_Colisoes();
	~Gerenciador_Colisoes();

	bool InserirInimigo(Inimigo* ini);
	void organizar();
	void ativar_intervalos();
	void setJogador(Jogador* Jog);

};

