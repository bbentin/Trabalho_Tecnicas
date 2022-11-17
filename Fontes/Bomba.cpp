#include "../Cabecalhos/Bomba.h"


Personagens::Bomba::Bomba() {
	corpo.setSize(sf::Vector2f(11.0, espaco));
	corpo.setPosition(230.0, 50.0);

	textura.loadFromFile("Images\Inimigos\Bomba\Bomba_estatico.png");
	sprit.setTexture(textura);
	corpo.setTexture(&textura);
}

Personagens::Bomba::~Bomba() {
}

void Personagens::Bomba::mover() {
}

void Personagens::Bomba::executar() {
	imprimir();
}