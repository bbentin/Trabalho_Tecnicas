#pragma once
#include "Ente.h"

namespace Entidades {
	class Entidade :public Ente {

	protected:
		int x;	int y;
		const sf::Vector2f gravidade;
		bool tem_gravidade;
		sf::Vector2f V_esq, V_dir, V_cima;
	public:
		Entidade();
		~Entidade();

		virtual void executar() = 0;
		virtual void mover() = 0;
	};
}
