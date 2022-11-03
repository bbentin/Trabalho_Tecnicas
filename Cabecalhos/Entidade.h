#pragma once
#include "Ente.h"
#include "SFML/System/Clock.hpp"

namespace Entidades {
	class Entidade :public Ente {

	protected:
		sf::Vector2f posicao;
		sf::Texture textura;
		sf::Sprite	personalidade;
	public:
		Entidade();
		~Entidade();

		virtual void executar() = 0;
		virtual void mover() = 0;
	};
}
