#pragma once
#include "Ente.h"

class Menu : public Ente {
private:
	int pos;
	bool pressionado, enter;
public:
	Menu();
	~Menu();

	void cima();
	void baixo();

	int getOpcao();

	void executar();
};