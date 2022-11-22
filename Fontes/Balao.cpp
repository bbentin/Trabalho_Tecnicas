#include "../Cabecalhos/Balao.h"

Personagens::Balao::Balao() {
	corpo.setSize(sf::Vector2f(14.0, 26.0));
	corpo.setPosition(150.0, 50.0);

	textura.loadFromFile("Images/Inimigos/Balao/Balao_estatico.png");
	sprit.setTexture(textura);
	corpo.setTexture(&textura);
}

Personagens::Balao::~Balao() {
}

void Personagens::Balao::mover() {
}

void Personagens::Balao::executar() {
	imprimir();
}