#include "../Cabecalhos/Cactus.h"



Obstaculos::Cactus::Cactus(){
	corpo.setSize(sf::Vector2f(14.0, 13.0));
	corpo.setPosition(100.0, 50.0);

	textura.loadFromFile("Images/Obstaculos/Objetos/Cacto.png");
	sprit.setTexture(textura);
	corpo.setTexture(&textura);
}

Obstaculos::Cactus::~Cactus() {
}

void Obstaculos::Cactus::mover(){

}

void Obstaculos::Cactus::executar(){
	imprimir();
}