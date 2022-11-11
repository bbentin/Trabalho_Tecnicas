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

/*void Gerenciador_Colisoes::organizar() {
	int i = 0;
	while (i < LInimigos.size()) {
		mins_e_maximos.push_back(LInimigos[i]->getLocal());
	}
	sort(mins_e_maximos.begin(), mins_e_maximos.end());
}
*/

void Gerenciador_Colisoes::setJogador(Jogador* Prim){
	Jogador1 = Prim; 
}

