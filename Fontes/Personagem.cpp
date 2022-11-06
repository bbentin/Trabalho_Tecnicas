#include "../Cabecalhos/Personagem.h"
using namespace Personagens;

const sf::Vector2f Personagem::gravidade(0.0f, 2.0f);
const sf::Vector2f Personagem::f_Cima(0.0f,-6.8f);
const sf::Vector2f Personagem::f_Direita(6.0f,0.0f);
const sf::Vector2f Personagem::f_Esquerda(-6.0f, 0.0f);


Personagem::Personagem():Entidade(),massa(3) {
	corpo.setSize(sf::Vector2f(16.0, 16.0));	num_vidas = 0;
}

Personagem::~Personagem(){
}

void Personagens::Personagem::calcular_velocidade(sf::Time temp, sf::Vector2f acelera){
	if (velocidade.x < 10 || velocidade.y < 10) {
		velocidade.x = acelera.x * temp.asSeconds();	velocidade.y = acelera.y * temp.asSeconds();
	}
	else{
		if (velocidade.x > 10) { velocidade.x = 8; }
		if (velocidade.y > 10) { velocidade.y = 8; }
	}
}

void Personagens::Personagem::calcular_aceleracao(sf::Vector2f forca){
	aceleracao.x = forca.x / massa;	aceleracao.y = forca.y / massa;
}

void Personagens::Personagem::calcular_posicao(sf::Time temp, sf::Vector2f acelera){
	posicao.x = acelera.x * temp.asSeconds();	posicao.y = acelera.y * temp.asSeconds();
}

void Personagens::Personagem::somar_forca(sf::Vector2f forca_externa) {
	forca_resultante += forca_externa;
}

void Personagens::Personagem::setIntervalo(sf::Clock passado) {
	intervalo = passado.getElapsedTime();
}

void Personagens::Personagem::calcular_Fisica(){
	//somar_forca(gravidade);
	calcular_aceleracao(forca_resultante);	calcular_velocidade(intervalo, aceleracao);	calcular_posicao(intervalo, velocidade);
}

