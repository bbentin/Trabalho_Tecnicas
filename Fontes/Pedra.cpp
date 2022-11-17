#include "../Cabecalhos/Pedra.h"

Entidades::Pedra::Pedra() {
	corpo.setSize(sf::Vector2f(6.0, 6.0));
	corpo.setPosition(130.0, 50.0);

	textura.loadFromFile("Images\Inimigos\Balao\Pedra.png");
	sprit.setTexture(textura);
	corpo.setTexture(&textura);
}

Entidades::Pedra::~Pedra() {
}

void Entidades::Pedra::mover() {
}

void Entidades::Pedra::executar() {
	imprimir();
}