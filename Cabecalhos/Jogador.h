#pragma once
#include "Personagem.h"
#include <iostream>
using namespace std;
namespace Personagens {
	class Jogador :public Personagem {

	private:
		static bool Jogador2;	//variavel para saber se tera um ou dois jogadores
	public:

		Jogador();
		~Jogador();

		void executar();
		void executar2();
		void mover();
		void mover2();

	};

}
