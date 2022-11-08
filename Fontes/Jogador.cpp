#include "../Cabecalhos/Jogador.h"
using namespace Personagens;

Jogador::Jogador():Personagem() {
	if (!Jogador2) {
		corpo.setPosition(400.0, 400.0);
		corpo.setSize(sf::Vector2f(16.0, 16.0));
		Jogador2 = true;	num_vidas = 3; massa = 3;
	}													//mesma construtora que ira funcionar de maneira diferente para 1 ou 2 jogadores
	else{
		corpo.setPosition(700.0, 700.0);
		corpo.setSize(sf::Vector2f(16.0, 16.0));	corpo.setFillColor(sf::Color::White);
		num_vidas = 3;	massa = 3;
	}
}

Jogador::~Jogador(){
}

void Jogador::executar(){
	pTela->draw(corpo);
	mover();
	Limites = corpo.getGlobalBounds();

}

void Jogador::executar2() {
	mover(); mover2();
	calcular_Fisica();
	corpo.move(floor(posicao.x),floor(posicao.y));
	cout << "posicao :" << posicao.x << endl;
	pTela->draw(corpo);
	Limites = corpo.getGlobalBounds();
}

void Jogador::mover(){ //controle do jogador 1
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		somar_forca(f_Esquerda);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
		somar_forca(f_Cima);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
		somar_forca(f_Direita);		
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)){
		somar_forca(gravidade);
	}
}

void Jogador::mover2() { //controle do jogador 2
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
		somar_forca(f_Esquerda);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
		somar_forca(f_Cima);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
		somar_forca(f_Direita);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
		forca_resultante.y += 9.0f;
	}
}

bool Jogador::Jogador2 = false; 