#include "../Cabecalhos/Principal.h"
using namespace sf;

Principal::Principal() : dois_jogadores(false), pressionado(false), enter(false), pause(false) ,estado(0) , floor(false) { // Para estado: "0" = menu; "1" = fase 1; "2" = fase 2;

	//MenuPrincipal.setTela(&G_Grafico);

	Primeiro.setTela(&G_Grafico);	Segundo.setTela(&G_Grafico);	floor.setTela(&G_Grafico);
	//Jogadores e Inimigos criados estaticamente para fins de teste
		
	Primeiro.setIntervalo(relogio);	Segundo.setIntervalo(relogio);

	Cacto.setTela(&G_Grafico);
	Cogumelo.setTela(&G_Grafico);
	Bomb.setTela(&G_Grafico);
	Chefe.setTela(&G_Grafico); Ped.setTela(&G_Grafico); //chefe e seu projetil
}

Principal::~Principal() {
}

void Principal::executar(){
	
	while (G_Grafico.getTela()->isOpen()) {
	
		Event Eventos;

		while (G_Grafico.getTela()->pollEvent(Eventos)) {
			switch (Eventos.type){
				case Event::KeyReleased:
					switch (Eventos.key.code) {
						case Keyboard::Up: {
						//	MenuPrincipal.cima();
							cout << "cima" << endl;
							break;
						}
						case Keyboard::Down: {
						//	MenuPrincipal.baixo();
							cout << "baixo" << endl;
							break;
						}
						case Keyboard::Space: {
							if (!pressionado) { //para evitar pressionamentos rapidos
								pressionado = true;
							//	estado = MenuPrincipal.getOpcao();
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
							G_Grafico.getTela()->close();
							cout << "Apertou Backspace" << endl;
							break;
						}
					}
				break;
			}
		}



		if (!pause) {	// a partir daqui executa as sprites e fisicas do jogo 
			relogio.restart();
			G_Grafico.getTela()->clear();
			Primeiro.setIntervalo(relogio);
			Segundo.setIntervalo(relogio);
		//	MenuPrincipal.executar();
			floor.executar();
			Primeiro.executar(); 
			if(dois_jogadores) 
				Segundo.executar2();
			Bomb.executar();
			Cogumelo.executar();
			Chefe.executar(); Ped.executar();
			Cacto.executar();
			G_Grafico.getTela()->display();
		}
	}
}

