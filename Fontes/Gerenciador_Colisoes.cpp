#include "../Cabecalhos/Gerenciador_Colisoes.h"


Gerenciador_Colisoes::Gerenciador_Colisoes() {
	LInimigos.clear();	Jogador1 = nullptr;		Jogador2 = nullptr;
}

Gerenciador_Colisoes::~Gerenciador_Colisoes() {
	LInimigos.clear();
}

bool Gerenciador_Colisoes::InserirInimigo(Inimigo* ini) {
	LInimigos.push_back(ini);
	return true;
}




void Gerenciador_Colisoes::setJogador(Jogador* Prim){
	Jogador1 = Prim;
}


