#pragma once
#include "Ente.h"
#include <iostream>

using namespace sf;

class Menu : public Ente {
private:
	int pos;
	bool pressionado, enter;  //para quando pressionar e soltar rapido demais
	Font font;
	Texture image;
	sf::Text texto;

	std::vector<const char*> opcoes;
	std::vector<Vector2f> coords;
	std::vector<Text> textos;
	std::vector<size_t> tmnhs;
	
public:
	Menu();
	~Menu();

	void cima();
	void baixo();

	int getOpcao();

	void executar();
};