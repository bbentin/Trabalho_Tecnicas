#include "../Cabecalhos/Ente.h"

Ente::Ente():id(0),pTela(nullptr){
	corpo.setFillColor(sf::Color::Cyan);
}

Ente::~Ente() {
}

void Ente::imprimir(){
	pTela->draw(corpo);
}

void Ente::setTela(sf::RenderWindow* Screen){
	pTela = Screen;
}

sf::FloatRect Ente::getLimites() {
	return Limites;
}