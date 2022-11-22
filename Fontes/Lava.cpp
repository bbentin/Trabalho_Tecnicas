#include "../Cabecalhos/Lava.h"

Obstaculos::Lava::Lava(){
	corpo.setSize(sf::Vector2f(16.0, 16.0));
	textura.loadFromFile("Images/Obstaculos/Agua.png");
	sprit.setTexture(textura);
	corpo.setTexture(&textura);
}

Obstaculos::Lava::~Lava(){
}

void Obstaculos::Lava::executar(){
	imprimir();
}

void Obstaculos::Lava::mover()
{
}
