#include "../Cabecalhos/Entidade.h"
using namespace Entidades;

Entidade::Entidade() :Ente(), posicao(0.0f, 0.0f){
}
Entidade::~Entidade(){
}

void Entidades::Entidade::setMax_min(){
	max_min_x.x = corpo.getGlobalBounds().left; max_min_x.y = corpo.getGlobalBounds().width;
	max_min_y.x = corpo.getGlobalBounds().top; max_min_y.y = corpo.getGlobalBounds().height;
}

sf::Vector2f Entidades::Entidade::getLocal(){
	return max_min_x;
}

void Entidades::Entidade::setPosicao(sf::Vector2f posi) {
	posicao = posi;
}

void Entidades::Entidade::setPosicao(float x, float y){
	posicao.x = x; posicao.y = y;
}
