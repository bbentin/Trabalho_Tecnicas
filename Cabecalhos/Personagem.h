#pragma once
#include "../Cabecalhos/Entidade.h"
using namespace Entidades;
namespace Personagens {
	class Personagem :public Entidade {

	protected:
		int num_vidas;
	public:
		Personagem();
		~Personagem();

	};
}
