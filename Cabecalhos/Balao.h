#pragma once
#include "../Cabecalhos/Personagem.h"
namespace Personagens {
	class Balao :public Personagem {

	private:
		int vida;

	public:
		Balao();
		~Balao();

		void mover();
		void executar();
	};
}
