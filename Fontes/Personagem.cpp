#include "../Cabecalhos/Personagem.h"
using namespace Personagens;

const sf::Vector2f Personagem::gravidade(0.0f, 60.0f);
const sf::Vector2f Personagem::f_Cima(0.0f,-68.0f);
const sf::Vector2f Personagem::f_Direita(60.0f,0.0f);
const sf::Vector2f Personagem::f_Esquerda(-60.0f, 0.0f);


Personagem::Personagem():Entidade(),forca_resultante(0.0f,0.0f) {
	corpo.setSize(sf::Vector2f(16.0, 16.0));	num_vidas = 3;
}
Personagem::~Personagem(){
}

void Personagens::Personagem::calcular_velocidade(sf::Time temp, sf::Vector2f acelera){
	velocidade.x = acelera.x * temp.asMicroseconds() * TEMPO;	velocidade.y = acelera.y * temp.asMicroseconds() * TEMPO;
}

void Personagens::Personagem::calcular_aceleracao(sf::Vector2f forca){
	aceleracao.x = forca.x / massa;	aceleracao.y = forca.y / massa;
}

void Personagens::Personagem::calcular_posicao(sf::Time temp, sf::Vector2f velo){
	posicao.x = velo.x * temp.asMicroseconds() * TEMPO;	posicao.y = velo.y * temp.asMicroseconds() * TEMPO;
}

void Personagens::Personagem::somar_forca(sf::Vector2f forca_externa) {
	forca_resultante.x = forca_externa.x + forca_resultante.x;
	forca_resultante.y = forca_externa.y + forca_resultante.y;
}

void Personagens::Personagem::setRelogio(sf::Clock* passado) {
	p_relogio = passado;
}


void Personagens::Personagem::calcular_Fisica(){
	//somar_forca(gravidade);
	calcular_aceleracao(forca_resultante); 
	calcular_velocidade(intervalo, aceleracao);	
	calcular_posicao(intervalo, velocidade);	
	forca_resultante.x = 0; forca_resultante.y = 0;
}

