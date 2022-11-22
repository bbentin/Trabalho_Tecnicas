#include "../Cabecalhos/Cogumelus.h"


Personagens::Cogumelus::Cogumelus() {
	corpo.setSize(sf::Vector2f(espaco, espaco));
	corpo.setPosition(120.0, 50.0);

	textura.loadFromFile("Images/Inimigos/Cogumelo/Cogumelo_estatico.png");
	sprit.setTexture(textura);
	corpo.setTexture(&textura);
}

Personagens::Cogumelus::~Cogumelus(){
}

void Personagens::Cogumelus::mover() {

}

void Personagens::Cogumelus::executar() {
	imprimir();
}
