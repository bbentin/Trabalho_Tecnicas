#include "../Cabecalhos/Principal.h"

Principal::Principal() :Tela(sf::VideoMode(800, 800), "Jogo Funcionando"),Gabriel(100.0f,100.0f) {
	Primeiro.setTela(&Tela);	Segundo.setTela(&Tela);
	//Colisoes.setJogador(&Primeiro);
	Gabriel.setTela(&Tela); //Colisoes.InserirInimigo(&Gabriel);	//Jogadores e Inimigos criados estaticamente para fins de teste
	Ze.setTela(&Tela);//	Colisoes.InserirInimigo(&Ze);
	Primeiro.setIntervalo(relogio);	Segundo.setIntervalo(relogio);
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
			while (true) {// roda "liso"
				relogio.restart();
				Tela.clear();
				Segundo.setIntervalo(relogio);
				Primeiro.executar();
				Segundo.executar2();
				//Gabriel.executar();	Ze.executar();
				Tela.display(); 
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
					Tela.close();
					return;// sai do loop infinito
				}
			}
		}
	}
}
