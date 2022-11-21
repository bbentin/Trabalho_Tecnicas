#include "../Cabecalhos/Principal.h"

using namespace sf;

Principal::Principal() : estado(0), pause(false) /*, floor(false) */ { // Para estado: "0" = menu; "1" = fase 1; "2" = fase 2;
	
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
						case Keyboard::Escape: {
							cout << "Apertou esc" << endl;
							if (pause)
								pause = false;
							else 
								pause = true;
							break;
						}
						case Event::Closed: {  // TALVEZ SEJA AQUI QUE ESTEJA FECHANDO O JOGO APERTANDO A
							GGrafico.getTela()->close();
							cout << "Apertou para sair" << endl;
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
			floor.executar();
			Primeiro.executar(); //ENTENDER O PQ TA BUGANDO AO APERTAR "A"
			Segundo.executar2();

			Bomb.executar();
			Cogumelo.executar();
			Chefe.executar(); Ped.executar();
			Cacto.executar();

			GGrafico.getTela()->display();
		}
	}
}

