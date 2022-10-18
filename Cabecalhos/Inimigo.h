#pragma once
#include "../Cabecalhos/Personagem.h"
using namespace Personagens;

class Inimigo : public Personagens::Personagem{

private:

public:
	Inimigo();
	Inimigo(float x, float y);
	~Inimigo();

	void executar();
	void mover();
};

