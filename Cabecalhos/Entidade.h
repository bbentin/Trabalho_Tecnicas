#pragma once
#include "Ente.h"
#include "SFML/System/Clock.hpp"

namespace Entidades {
	class Entidade :public Ente {

	protected:
		sf::Vector2f posicao;
		sf::Time intervalo;
	public:
		Entidade();
		~Entidade();

		virtual void executar() = 0;
		virtual void mover() = 0;
	};
}
