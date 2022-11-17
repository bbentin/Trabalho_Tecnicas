#include "../Cabecalhos/Chao.h"
using namespace Entidades;

bool Chao::chao2 = true;

Entidades::Chao::Chao(){
}

Entidades::Chao::Chao(bool tipo){
	if (tipo) {
		corpo.setSize(sf::Vector2f(32.0,32.0));
		corpo.setPosition(100.0, 100.0);

		textura.loadFromFile("Images/Obstaculos/Chao/Chao_Summer_1.png");
		sprit.setTexture(textura);
		corpo.setTexture(&textura);
	}
	else{
		corpo.setSize(sf::Vector2f(32.0, 32.0));
		corpo.setPosition(200.0, 200.0);
		textura.loadFromFile("Images/Obstaculos/Chao/Chao_Summer_2.png", corpo.getTextureRect());
		sprit.setTexture(textura);
		corpo.setTexture(&textura);
	}
}

Entidades::Chao::~Chao(){
}

void Entidades::Chao::executar(){
	imprimir();
}

void Entidades::Chao::mover(){
}

