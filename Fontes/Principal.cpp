#include "../Cabecalhos/Principal.h"

Principal::Principal() :Tela(sf::VideoMode(640, 480), "Jogo Funcionando"),Gabriel(100.0f,100.0f),floor(false) {
	Primeiro.setTela(&Tela);	Segundo.setTela(&Tela);	floor.setTela(&Tela);
	Colisoes.setJogador(&Primeiro);
	Gabriel.setTela(&Tela); Colisoes.InserirInimigo(&Gabriel);	//Jogadores e Inimigos criados estaticamente para fins de teste
	Ze.setTela(&Tela);	Colisoes.InserirInimigo(&Ze);
	Primeiro.setIntervalo(relogio);	Segundo.setIntervalo(relogio);
	Cacto.setTela(&Tela);
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
				relogio.restart();
				Tela.clear();
				Primeiro.setIntervalo(relogio);
				Segundo.setIntervalo(relogio);
				floor.executar();
				Primeiro.executar();
				Segundo.executar2();
				Cacto.executar();

				//Gabriel.executar();	Ze.executar();
				Tela.display(); 
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
					Tela.close();
					return;// sai do loop infinito
				}
		}
	}
}

