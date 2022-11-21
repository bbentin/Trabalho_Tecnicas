#include "../Cabecalhos/Jogador.h"
using namespace Personagens;

Jogador::Jogador():Personagem() {
	if (!Jogador2) {
		corpo.setPosition(2 * espaco, 26 * espaco);
		corpo.setSize(sf::Vector2f(18.0, 14.0));
		textura.loadFromFile("Images/Jogadores/Dino1/Dino1_estatico.png");
		sprit.setTexture(textura);
		corpo.setTexture(&textura);

		num_vidas = 3; massa = 3;
		Jogador2 = true;	
	}													//mesma construtora que ira funcionar de maneira diferente para 1 ou 2 jogadores
	else if (!Jogador1) {
		corpo.setPosition(0 * espaco, 26 * espaco);
		corpo.setSize(sf::Vector2f(18.0, 14.0));
		textura.loadFromFile("Images/Jogadores/Dino2/Dino2_estatico.png");
		sprit.setTexture(textura);
		corpo.setTexture(&textura);

		num_vidas = 3; massa = 3;
		Jogador1 = true;
	}
	else{
		corpo.setPosition(150.0, 150.0);
		corpo.setSize(sf::Vector2f(16.0, 16.0));	corpo.setFillColor(sf::Color::White);
		num_vidas = 3;	massa = 3;
	}
}

Jogador::~Jogador(){
}

void Jogador::executar(){
	mover();
	calcular_Fisica();
	corpo.move(posicao);
	cout << "posicao :" << posicao.x << endl;
	GGrafico->desenhar(corpo);
	Limites = corpo.getGlobalBounds();
}

void Jogador::executar2() {
	mover2();
	calcular_Fisica();
	corpo.move(posicao);
	cout << "posicao2 :" << posicao.x << endl;
	GGrafico->desenhar(corpo);
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
		somar_forca(gravidade);
	}
}
bool Jogador::Jogador1 = false;
bool Jogador::Jogador2 = false; 