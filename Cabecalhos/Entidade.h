#pragma once
#include "Ente.h"
#include "SFML/System/Clock.hpp"

namespace Entidades {
	class Entidade :public Ente {

	protected:
		sf::Vector2f posicao;
		sf::Vector2f max_min_x,max_min_y;
		sf::Texture textura;
		sf::Sprite	personagem;
	public:
		Entidade();
		~Entidade();

		virtual void executar() = 0;
		virtual void mover() = 0;
		void setMax_min();
		sf::Vector2f getLocal();
	};
}
