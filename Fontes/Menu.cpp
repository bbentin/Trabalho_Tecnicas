#include "../Cabecalhos/Menu.h"
#define N_ITENS 5

Menu::Menu() : tmnhs(NULL), dois_jogadores(false), opcoes(NULL), pos(1), pressionado(false) {

	corpo.setSize(sf::Vector2f(640.0, 480.0));
	corpo.setPosition(0.0, 0.0);

	font.loadFromFile("Fonte_Texto/Fruit_Days.otf");
	image.loadFromFile("Images/MenuPrincipal/Menu_Principal_2.gif");

	corpo.setTexture(&image);

	opcoes = {"Dino Seasons", "Jogar Fase Summer", "Jogar Fase Autumn", "Dois Jogadores: N", "Ranking"};
	//textos.resize(N_ITENS);
	coords = { {200.0, 10.0},{25.0, 130.0},{25.0, 180.0},{25.0, 230.0}, {25.0, 280.0} };
	tmnhs = { 50, 20, 20, 20, 20};

	for (int i = 0; i < N_ITENS; ++i) {
		std::cout << "a" << std::endl;
		sf::Text* aux = new sf::Text;
		//aux->setFont(font);
		//aux->setString(opcoes[i]);
		//aux->setCharacterSize(tmnhs[i]);
		//aux->setOutlineColor(Color::Black);
		//aux->setPosition(coords[i]);
		std::cout << "b" << std::endl;
		//textos.push_back(aux);
		std::cout << "c" << std::endl;
	}

	//textos[1]->setOutlineThickness(4);
	
}

Menu::~Menu() {
	for (int i = 0; i < N_ITENS; ++i) {
		if (textos[i])
			delete textos[i];
	}
}

void Menu::cima() {
	if (pos > 1 && !pressionado) {
		--pos;
		pressionado = true;
		textos[pos]->setOutlineThickness(4);
		textos[pos + 1]->setOutlineThickness(0);
		pressionado = false;
		std::cout << "posicao pos:" << pos << std::endl;
	}
}

void Menu::baixo() {
	if (pos < 4 && !pressionado) { //para nao ultrapassar os limites do menu
		++pos;
		pressionado = true;
		textos[pos]->setOutlineThickness(4);
		textos[pos - 1]->setOutlineThickness(0);
		pressionado = false;
		std::cout << "posicao pos" << pos << std::endl;
	}
}

bool Menu::doisJogadores() {
	if (dois_jogadores == true && !pressionado) {
		pressionado = true;
		dois_jogadores = false;
		textos[3]->setString("Dois Jogadores? Y");
		pressionado = false;
	}
	if (dois_jogadores == true && !pressionado) {
		pressionado = true;
		dois_jogadores = true;
		textos[3]->setString("Dois Jogadores? N");
		pressionado = false;
	}
	return(dois_jogadores);
}

int Menu::getOpcao() {
	return (pos);
}

void Menu::executar() {
	imprimir();								//Printa desenho de fundo
	for (int i = 0; i < N_ITENS; i++) {		//printa cada palavra do menu
		GGrafico->desenhar(textos[i]);
	}
}