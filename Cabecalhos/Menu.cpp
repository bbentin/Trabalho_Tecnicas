#include "../Cabecalhos/Menu.h"

Menu::Menu() : pressionado(false), enter(false), pos(0){
	corpo.setSize(sf::Vector2f(640.0, 480.0));
	corpo.setPosition(0.0, 0.0);

	corpo.setTexture(); //

	font->loadFromFile("");
	image->loadFromFile("");

	opcoes = { "Dino Seasons", "Jogar","Ranking", "Quit" };
	coords = { {},{},{},{} };
	tmnhs = { 40, 20, 20, 20 };

}

Menu::~Menu() {
}

void Menu::cima() {
}

void Menu::baixo() {
}

int Menu::getOpcao() {

	return (pos);
}

void Menu::executar() {
}