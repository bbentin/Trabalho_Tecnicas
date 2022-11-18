#include "../Cabecalhos/Fase.h"
using namespace Fases;

void Fases::Fase::set_Chaos(Chao* Primeiro, Chao* Segundo){
	Chao_1 = Primeiro; Chao_2 = Segundo;
}

void Fases::Fase::set_Inimigos(Inimigo* Um, Inimigo* Dois){
}

Fase::Fase():Ente(),horizontal(40),vertical(30) {
	Segundo = nullptr;	Primeiro = nullptr;	Chao_1 = nullptr; Chao_2 = nullptr;
	Colecao.LimpaLista();
	fill_tilemap();
}
Fase::~Fase(){
	Colecao.LimpaLista();
}

void Fases::Fase::criar_fase(){
	int i, j;
	for (i = 0; i < horizontal; i ++ ) {
		for (j = 0; j < vertical; j++) {
			switch (tilemap[i][j]){
			case 0:
				Chao_1 = new Chao(1);
				Chao_1->setPosicao(i * espaco, j * espaco);
				Colecao.InserirElemento(Chao_1);
				break;
			case 1:
				Chao_2 = new Chao(2);
				Chao_2->setPosicao(i * espaco, j * espaco);
				Colecao.InserirElemento(Chao_2);
				break;
			case 2:

				break;
			case 3:

				break;
			case 4:

				break;
			}
		}
	}
}

void Fase::fill_tilemap() {
	for (int i = 0; i < horizontal; i++) {
		for (int j = 0; j < vertical; j++) {
			tilemap[i][j] = 0;
		}
	}
}