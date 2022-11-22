#include "../Cabecalhos/Menu.h"

Menu::Menu() : textos(0), pressionado(false), enter(false), pos(0) {

	corpo.setSize(sf::Vector2f(640.0, 480.0));
	corpo.setPosition(0.0, 0.0);

	font.loadFromFile("Fonte_Texto/Fruit_Days.otf");
	image.loadFromFile("Images/MenuPrincipal/Menu_Principal_2.gif");

	corpo.setTexture(&image);

	opcoes = {"Dino Seasons", "Jogar","Ranking", "Quit"};
	textos.resize(5);
	coords = { {210.0, 10.0},{25.0, 100.0},{25.0, 150.0},{25.0, 200.0} };
	tmnhs = { 40, 20, 20, 20 };

	for (std::size_t i{}; i < textos.size()-1; ++i) { //textos.size()-1 pq sem o -1 da bug(NAO FAZ SENTIDO)
		textos[i].setFont(font);
		textos[i].setString(opcoes[i]);
		textos[i].setCharacterSize(tmnhs[i]);
		textos[i].setOutlineColor(Color::Black);
		textos[i].setPosition(coords[i]);
	}

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
	imprimir();
	for (std::size_t i{}; i < textos.size(); ++i) {
		texto = textos[i];
		GGrafico->desenhar(texto);
	}
}