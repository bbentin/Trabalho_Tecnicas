#include "../Cabecalhos/Principal.h"
using namespace sf;

Principal::Principal() : pressionado(false), enter(false), pause(false) ,estado(0)   , floor(false) { // Para estado: "0" = menu; "1" = fase 1; "2" = fase 2;
	
	MenuPrincipal.setTela(&GGrafico);

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
	
		Event Eventos;

		while (GGrafico.getTela()->pollEvent(Eventos)) {
			switch (Eventos.type){
				case Event::KeyReleased:
					switch (Eventos.key.code) {
						case Keyboard::Up: {
							MenuPrincipal.cima();
							cout << "cima" << endl;
							break;
						}
						case Keyboard::Down: {
							MenuPrincipal.baixo();
							cout << "baixo" << endl;
							break;
						}
						case Keyboard::Space: {
							if (!pressionado) { //para evitar pressionamentos rapidos
								pressionado = true;
								estado = MenuPrincipal.getOpcao();
								pressionado = false;

								switch (estado) {
									case 1: {
										cout << "case 1 e estado:" << estado << endl;
										break;
									}
									case 2: {
										cout << "case 2" << endl;
										break;
									}
									case 3: {

										break;
									}
									case 4: {

										break;
									}
									case 5: {

										break;
									}
								}
							}
							break;
						}
						case Keyboard::Escape: { //PAUSE
							cout << "Apertou esc" << endl;
							if (pause)
								pause = false;
							else 
								pause = true;
							break;
						}
						case Keyboard::BackSpace: { //APERTAR BACKSPACE PRA FECHAR JOGO
							GGrafico.getTela()->close();
							cout << "Apertou Backspace" << endl;
							break;
						}
					}
				break;
			}
		}



		if (!pause) {	// a partir daqui executa as sprites e fisicas do jogo 
			relogio.restart();
			GGrafico.getTela()->clear();
			Primeiro.setIntervalo(relogio);
			Segundo.setIntervalo(relogio);
			MenuPrincipal.executar();
			floor.executar();
			Primeiro.executar(); 
			if(dois_jogadores) 
				Segundo.executar2();
			Bomb.executar();
			Cogumelo.executar();
			Chefe.executar(); Ped.executar();
			Cacto.executar();

			GGrafico.getTela()->display();
		}
	}
}

