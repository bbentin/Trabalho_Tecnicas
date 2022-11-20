#include "../Cabecalhos/Gerenciador_Grafico.h"

Gerenciador_Grafico::Gerenciador_Grafico() 
	:Tela(sf::VideoMode(640, 480), "Jogo Funcionando")
{

}

Gerenciador_Grafico::~Gerenciador_Grafico()
{

}

void Gerenciador_Grafico::desenhar(sf::RectangleShape corpo)
{
	Tela.draw(corpo);
}



