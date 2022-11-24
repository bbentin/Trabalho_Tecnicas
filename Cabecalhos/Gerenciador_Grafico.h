#pragma once
#include "SFML/Graphics.hpp"

class Gerenciador_Grafico
{
private:
	sf::RenderWindow Tela;

public:
	Gerenciador_Grafico();
	~Gerenciador_Grafico();

	sf::RenderWindow* getTela() { return &Tela; };
	

	void desenhar(sf::RectangleShape corpo);

	void desenhar(sf::Text* texto); //sobrecarga
};

