#pragma once
#include "../Cabecalhos/Entidade.h"
namespace Entidades {
	class Pedra :public Entidade {
	private:

	public:
		Pedra();
		~Pedra();
		
		void mover();
		void executar();
	};
}

