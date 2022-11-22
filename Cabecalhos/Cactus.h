#pragma once
#include "Obstaculo.h"
namespace Obstaculos {
	class Cactus
		:public Obstaculo {
	private:
		int vida;

	public:
		Cactus();
		~Cactus();

		void mover();
		void executar();
	};
}

