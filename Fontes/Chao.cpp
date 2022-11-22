#include "../Cabecalhos/Chao.h"
using namespace Entidades;

Entidades::Chao::Chao(){
	corpo.setSize(sf::Vector2f(16.0, 16.0));
	corpo.setFillColor(sf::Color::Cyan);
}

Entidades::Chao::Chao(int tipo){
		
	switch (tipo) {
	case 1:
		corpo.setSize(sf::Vector2f(17.5, 17.5));
		textura.loadFromFile("Images/Obstaculos/Chao/Chao_Summer_1.png");
		sprit.setTexture(textura);
		corpo.setTexture(&textura);
		break;
	case 2:
		corpo.setSize(sf::Vector2f(37, 37));
		textura.loadFromFile("Images/Obstaculos/Chao/Chao_Summer_2.png", corpo.getTextureRect());
		sprit.setTexture(textura);
		corpo.setTexture(&textura);
		break;
	case 3:
		corpo.setSize(sf::Vector2f(16.0, 16.0));
		textura.loadFromFile("Images/Obstaculos/Chao/Chao_Autumn_1.png");
		sprit.setTexture(textura);
		corpo.setTexture(&textura);
		break;
	case 4:
		corpo.setSize(sf::Vector2f(32.0, 32.0));
		textura.loadFromFile("Images/Obstaculos/Chao/Chao_Autumn_2.png", corpo.getTextureRect());
		sprit.setTexture(textura);
		corpo.setTexture(&textura);
		break;
	default:
		std::cout << "Tipo de chao invalido";
		break;
	}
}

Entidades::Chao::~Chao(){
}

void Entidades::Chao::executar(){
	imprimir();
}

void Entidades::Chao::mover(){
}

