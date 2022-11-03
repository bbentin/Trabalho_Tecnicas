#pragma once
#include <SFML/Graphics.hpp>
class Ente{

protected:
	int id;

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

/*class GG
{
	sf::RenderWindow* pTela;
	
	public
		
		void desenhar(Ente* p)
	{
		funcao (p->getCorpo())
	}
};
*/