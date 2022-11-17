#pragma once
#include "../Cabecalhos/Inimigo.h"

namespace Personagens {
	class Bomba :public Inimigo {

	private:
		int vida;

	public:
		Bomba();
		~Bomba();

		void mover();
		void executar();
	};
}
