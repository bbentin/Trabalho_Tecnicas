#pragma once
#include "Inimigo.h"

namespace Personagens {
	class Cogumelus :public Inimigo {
	private:
		//float velocidade; ???

	public:
		Cogumelus();
		~Cogumelus();

		void mover();
		void executar();
	};
}

