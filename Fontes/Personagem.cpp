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
	velocidade.x = acelera.x * temp.asMicroseconds() * 0.0017;	velocidade.y = acelera.y * temp.asMicroseconds() * 0.0017;
}

void Personagens::Personagem::calcular_aceleracao(sf::Vector2f forca){
	aceleracao.x = forca.x / massa;	aceleracao.y = forca.y / massa;
}

void Personagens::Personagem::calcular_posicao(sf::Time temp, sf::Vector2f velo){
	posicao.x = velo.x * temp.asMicroseconds() * TEMPO;	posicao.y = velo.y * temp.asMicroseconds() * 0.0017;
}

void Personagens::Personagem::somar_forca(sf::Vector2f forca_externa) {
	forca_resultante.x = forca_externa.x + forca_resultante.x;
	forca_resultante.y = forca_externa.y + forca_resultante.y;
}

void Personagens::Personagem::setIntervalo(sf::Clock passado) {
	intervalo = passado.getElapsedTime();
}

void Personagens::Personagem::calcular_Fisica(){
	//somar_forca(gravidade);
	calcular_aceleracao(forca_resultante); std::cout << "Forca em x :" << forca_resultante.x << std::endl;
	calcular_velocidade(intervalo, aceleracao);	std::cout << "Aceleracao em x :" << aceleracao.x << std::endl;
	calcular_posicao(intervalo, velocidade);	std::cout << "Velocidade em x :" << velocidade.x << std::endl;
	forca_resultante.x = 0; forca_resultante.y = 0;
}

