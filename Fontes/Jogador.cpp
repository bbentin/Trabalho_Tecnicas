#include "../Cabecalhos/Jogador.h"
using namespace Personagens;

Jogador::Jogador():Personagem() {
	if (!Jogador2) {
		corpo.setPosition(400.0, 400.0);
		corpo.setSize(sf::Vector2f(16.0, 16.0));
		tem_gravidade = true;		Jogador2 = true;	num_vidas = 3;
	}													//mesma construtora que ira funcionar de maneira diferente para 1 ou 2 jogadores
	else{
		corpo.setPosition(700.0, 700.0);
		corpo.setSize(sf::Vector2f(16.0, 16.0));	corpo.setFillColor(sf::Color::White);
		tem_gravidade = true;	num_vidas = 3;
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
	pTela->draw(corpo);
	mover2(); 
	Limites = corpo.getGlobalBounds();
}

void Jogador::mover(){ //controle do jogador 1
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		corpo.move(V_esq);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
		corpo.move(V_cima);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
		corpo.move(V_dir);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
		corpo.move(gravidade);
	}
}

void Jogador::mover2() { //controle do jogador 2
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
		corpo.move(V_esq);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
		corpo.move(V_cima);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
		corpo.move(V_dir);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
		corpo.move(gravidade);
	}
}

bool Jogador::Jogador2 = false; 