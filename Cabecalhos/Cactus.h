#pragma once
#include "Obstaculo.h"
namespace Obstaculos {
	class Cactus
		:public Obstaculo {
	private:
		
	public:
		Cactus();
		~Cactus();

		void mover();
		void executar();
	};
}

