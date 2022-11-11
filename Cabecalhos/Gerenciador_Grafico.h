#pragma once
#include "SFML/Graphics.hpp"

class Gerenciador_Grafico
{
private:
	sf::RenderWindow Tela;
	sf::RenderWindow* pTela;


public:
	Gerenciador_Grafico();
	~Gerenciador_Grafico();

	void imprimir();
	void setTela(sf::RenderWindow* Screen);
	sf::FloatRect getLimites();
};

