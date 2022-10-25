#pragma once
#include "../Cabecalhos/Entidade.h"
using namespace Entidades;
namespace Personagens {
	class Personagem :public Entidade {

	protected:
		int num_vidas;
		sf::Vector2f velocidade, aceleracao, forca_resultante;
		const static sf::Vector2f gravidade, v_Cima, v_Direita, v_Esquerda;
		float massa;
		sf::Time intervalo;
	public:
		Personagem();
		~Personagem();


		void calcular_velocidade(sf::Time temp, sf::Vector2f acelera);
		void calcular_aceleracao(sf::Vector2f forca);
		void somar_forca(sf::Vector2f forcaext);
		void calcular_posicao(sf::Time temp, sf::Vector2f velocidad);
		void setIntervalo(sf::Clock passado);
		void calcular_Fisica();

	};
}
