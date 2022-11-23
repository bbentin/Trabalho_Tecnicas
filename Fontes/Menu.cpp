#include "../Cabecalhos/Menu.h"

Menu::Menu() : dois_jogadores(false), textos(0), pos(1), pressionado(false), enter(false) {

	corpo.setSize(sf::Vector2f(640.0, 480.0));
	corpo.setPosition(0.0, 0.0);

	font.loadFromFile("Fonte_Texto/Fruit_Days.otf");
	image.loadFromFile("Images/MenuPrincipal/Menu_Principal_2.gif");

	corpo.setTexture(&image);

	opcoes = {"Dino Seasons", "Jogar Fase Summer", "Jogar Fase Autumn", "Dois Jogadores: Não", "Ranking", "Quit"};
	textos.resize(6);
	coords = { {200.0, 10.0},{25.0, 130.0},{25.0, 180.0},{25.0, 230.0}, {25.0, 280.0}, {25.0, 330.0} };
	tmnhs = { 50, 20, 20, 20, 20, 20};

	for (int i = 0; i < textos.size()-1; ++i) { 
		textos[i].setFont(font);
		textos[i].setString(opcoes[i]);
		textos[i].setCharacterSize(tmnhs[i]);
		textos[i].setOutlineColor(Color::Black);
		textos[i].setPosition(coords[i]);
	}
	textos[1].setOutlineThickness(4);
}

Menu::~Menu() {

}

void Menu::cima() {
	if (pos > 1 && !pressionado) {
		--pos;
		pressionado = true;
		textos[pos].setOutlineThickness(4);
		textos[pos + 1].setOutlineThickness(0);
		pressionado = false;
		std::cout << "posicao pos:" << pos << std::endl;
	}
}

void Menu::baixo() {
	if (pos < 5 && !pressionado) { //para nao ultrapassar os limites do menu
		++pos;
		pressionado = true;
		textos[pos].setOutlineThickness(4);
		textos[pos - 1].setOutlineThickness(0);
		pressionado = false;
		std::cout << "posicao pos" << pos << std::endl;
	}
}

bool Menu::doisJogadores() {
	if (dois_jogadores == true && !pressionado) {
		pressionado = true;
		dois_jogadores = false;
		textos[3].setString("Dois Jogadores? Y");
		pressionado = false;
	}
	if (dois_jogadores == true && !pressionado) {
		pressionado = true;
		dois_jogadores = true;
		textos[3].setString("Dois Jogadores? N");
		pressionado = false;
	}
	return(dois_jogadores);
}

int Menu::getOpcao() {
	return (pos);
}

void Menu::executar() {
	imprimir();  //Printa desenho de fundo
	for (int i = 0; i < textos.size(); ++i) {  //printa cada palavra do menu
		texto = textos[i];
		GGrafico->desenhar(texto);       
	}
}