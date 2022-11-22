#pragma once
#include "../Cabecalhos/Fase.h"
namespace Fases {
	class Fs_Summer :public Fase {
	
	private:
	public:
		Fs_Summer(sf::RenderWindow* tela); //Uma construtora com ponteiro pra tela pois = gambiarras, vou muar quando ver teu gerenciado gráfico
		~Fs_Summer();

		
		void executar();
		void mover();
	
	};
}
