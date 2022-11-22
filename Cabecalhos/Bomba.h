#pragma once
#include "../Cabecalhos/Inimigo.h"

namespace Personagens {
	class Bomba :public Inimigo {

	private:

	public:
		Bomba();
		~Bomba();

		void mover();
		void executar();
	};
}
