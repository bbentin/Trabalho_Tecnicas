#include "../Cabecalhos/Gerenciador_Grafico.h"

Gerenciador_Grafico::Gerenciador_Grafico() 
	:Tela(sf::VideoMode(640, 480), "Dino Seasons"){
}

Gerenciador_Grafico::~Gerenciador_Grafico()
{

}

void Gerenciador_Grafico::desenhar(sf::RectangleShape corpo){
	Tela.draw(corpo);
}

void Gerenciador_Grafico::desenhar(sf::Text* texto) {
	if (texto)
		Tela.draw(*texto);
}

