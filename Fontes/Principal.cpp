#include "../Cabecalhos/Principal.h"

Principal::Principal() :Tela(sf::VideoMode(640, 480), "Jogo Funcionando"),fase1(&Tela) {
	Primeiro.setTela(&Tela);	Segundo.setTela(&Tela);	
	//Jogadores e Inimigos criados estaticamente para fins de teste
		

		//chefe e seu projetil
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
				Tela.clear();
				
				Primeiro.executar();
				Segundo.executar2();
				fase1.executar();

				//Gabriel.executar();	Ze.executar();
				Tela.display(); 
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
					Tela.close();
					return;// sai do loop infinito
				}
		}
	}
}

