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
	mover();
	calcular_Fisica();
	corpo.move(floor(posicao.x),floor(posicao.y));
	pTela->draw(corpo);
	Limites = corpo.getGlobalBounds();	forca_resultante.x = 0; forca_resultante.y = 0;
}

void Jogador::mover(){ //controle do jogador 1
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		somar_forca(f_Esquerda);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
		somar_forca(f_Cima);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
		somar_forca(f_Direita);				/* Não ta se mexendo pra direita*/
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
	}
}

void Jogador::mover2() { //controle do jogador 2
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
		forca_resultante.x -= 18.0f;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
		forca_resultante.y -= 18.0f;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
		forca_resultante.x += 18.0f;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
		forca_resultante.y += 18.0f;
	}
}

bool Jogador::Jogador2 = false; 