#include "../Cabecalhos/Principal.h"

Principal::Principal() /* :Tela(sf::VideoMode(640, 480), "Jogo Funcionando"), floor(false) */{
	
	

	Primeiro.setTela(&GGrafico);	Segundo.setTela(&GGrafico);	floor.setTela(&GGrafico);
	//Jogadores e Inimigos criados estaticamente para fins de teste
		
	Primeiro.setIntervalo(relogio);	Segundo.setIntervalo(relogio);

	Cacto.setTela(&GGrafico);
	Cogumelo.setTela(&GGrafico);
	Bomb.setTela(&GGrafico);
	Chefe.setTela(&GGrafico); Ped.setTela(&GGrafico); //chefe e seu projetil
}

Principal::~Principal() {
}

void Principal::executar(){
	
	while (GGrafico.getTela()->isOpen()) {
	
		sf::Event Eventos;
		while (GGrafico.getTela()->pollEvent(Eventos)) {
			if (Eventos.type == sf::Event::Closed) {
				GGrafico.getTela()->close();
			}
				relogio.restart();
				GGrafico.getTela()->clear();
				Primeiro.setIntervalo(relogio);
				Segundo.setIntervalo(relogio);
				floor.executar();
				Primeiro.executar();
				Segundo.executar2();

				Bomb.executar();
				Cogumelo.executar();
				Chefe.executar(); Ped.executar();
				Cacto.executar();

				//Gabriel.executar();	Ze.executar();
				GGrafico.getTela()->display();
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
					GGrafico.getTela()->close();
					return;// sai do loop infinito
				}
		}
	}
}

