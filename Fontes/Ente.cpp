#include "../Cabecalhos/Ente.h"

Ente::Ente():id(0),pTela(nullptr){
	corpo.setFillColor(sf::Color::Cyan); // cor azul padrao para todos os objetos
}

Ente::~Ente() {
}

void Ente::imprimir(){
	pTela->draw(corpo); // corpo se imprime
}

void Ente::setTela(sf::RenderWindow* Screen){
	pTela = Screen; // função para o corpo saber a tela onde vai se imprimir
}

sf::FloatRect Ente::getLimites() {
	return Limites; // pegando os dados de posicao do corpo na tela
}