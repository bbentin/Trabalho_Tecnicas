#pragma once
#include <vector>
#include <list>
using namespace std;
#include "../Cabecalhos/Jogador.h"
#include "../Cabecalhos/Inimigo.h"
using namespace Personagens;

class Gerenciador_Colisoes{

private:
	vector<Inimigo*> LInimigos;
	Jogador* Jogador1;
	Jogador* Jogador2;
	
public:

	Gerenciador_Colisoes();
	~Gerenciador_Colisoes();

	bool InserirInimigo(Inimigo* ini);
	
	void setJogador(Jogador* Prim);

};

