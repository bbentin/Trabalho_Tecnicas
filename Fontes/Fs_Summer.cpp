#include "../Cabecalhos/Fs_Summer.h"
using namespace Fases;

Fs_Summer::Fs_Summer(sf::RenderWindow* tela):Fase(tela) {
	Colecao.LimpaLista();
	criar_fase();
}
Fs_Summer::~Fs_Summer() {
}

void Fs_Summer::executar() {
	relogio.restart();
	pTela->draw(background);
	Colecao.percorrer();
}