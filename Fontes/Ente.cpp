#include "../Cabecalhos/Ente.h"


Ente::Ente(): id(0),GGrafico(nullptr){
	//corpo.setFillColor(sf::Color::Cyan); // cor azul padrao para todos os objetos
}

Ente::~Ente() {
}

void Ente::imprimir(){
	GGrafico->desenhar(corpo); // corpo se imprime
}

void Ente::setTela(Gerenciador_Grafico* g){
	GGrafico = g; // fun��o para o corpo saber a tela onde vai se imprimir
}

sf::FloatRect Ente::getLimites() {
	return Limites; // pegando os dados de posicao do corpo na tela
}