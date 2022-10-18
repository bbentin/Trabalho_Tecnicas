#include "../Cabecalhos/Inimigo.h"

Inimigo::Inimigo(){
	corpo.setFillColor(sf::Color::Magenta);
	corpo.setPosition(300.0f, 300.0f);
}

Inimigo::Inimigo(float x, float y) {
	corpo.setPosition(x, y); corpo.setFillColor(sf::Color::Yellow);
	num_vidas = 4;
}

Inimigo::~Inimigo(){
}

void Inimigo::executar(){
	pTela->draw(corpo);
	Limites = corpo.getGlobalBounds();
}

void Inimigo::mover(){
}