#pragma once
#include <SFML/Graphics.hpp>
#include "Gerenciador_Grafico.h"
#include <iostream>
class Ente{

protected:
	int id;

	sf::RectangleShape corpo;
	sf::FloatRect Limites;
	Gerenciador_Grafico* GGrafico;

	
public:
	Ente();
	~Ente();

	virtual void executar() = 0;
	void imprimir();
	void setTela(Gerenciador_Grafico* g);
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