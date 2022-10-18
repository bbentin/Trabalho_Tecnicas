#include "../Cabecalhos/Personagem.h"
using namespace Personagens;
Personagem::Personagem():Entidade(){
	corpo.setSize(sf::Vector2f(16.0, 16.0));	num_vidas = 0;
}

Personagem::~Personagem(){
}

