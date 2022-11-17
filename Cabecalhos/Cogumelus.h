#pragma once
#include "Inimigo.h"

namespace Personagens {
	class Cogumelus :public Inimigo {
	private:
		int vida;
		//float velocidade; ???

	public:
		Cogumelus();
		~Cogumelus();

		void mover();
		void executar();
	};
}

