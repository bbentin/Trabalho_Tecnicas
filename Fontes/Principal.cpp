#include "../Cabecalhos/Principal.h"

Principal::Principal() :Tela(sf::VideoMode(800, 800), "Jogo Funcionando"),Gabriel(100.0f,100.0f) {
	Primeiro.setTela(&Tela);	Segundo.setTela(&Tela);
	Colisoes.setJogador(&Primeiro);
	Gabriel.setTela(&Tela); Colisoes.InserirInimigo(&Gabriel);
	Ze.setTela(&Tela);	Colisoes.InserirInimigo(&Ze);
	Tela.setVerticalSyncEnabled(true);
}
Principal::~Principal() {
}

void Principal::executar(){
	
	while (Tela.isOpen()) {
		sf::Event Eventos;
		while (Tela.pollEvent(Eventos)) {
			if (Eventos.type == sf::Event::Closed) {
				Tela.close();
			}
			
			Tela.display();
			Tela.clear();
			Colisoes.getColisao();
			Primeiro.executar();	Segundo.executar2();
			Gabriel.executar();	Ze.executar();
			//Tela.display();
		}
	}
}
