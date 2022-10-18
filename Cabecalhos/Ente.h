#pragma once
#include <SFML/Graphics.hpp>
class Ente{

protected:
	int id;
	sf::RenderWindow* pTela;
	sf::RectangleShape corpo;
	sf::FloatRect Limites;
public:
	Ente();
	~Ente();

	virtual void executar() = 0;
	void imprimir();
	void setTela(sf::RenderWindow* Screen);
	sf::FloatRect getLimites();
};

