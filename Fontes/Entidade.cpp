#include "../Cabecalhos/Entidade.h"
using namespace Entidades;

Entidade::Entidade():Ente(),V_esq(-3.0,0.0),V_dir(3.0,0.0),V_cima(0.0,-6.0),gravidade(0.0,3.0){ //velocidades padrao para se mover
	x = 0; y = 0;	tem_gravidade = false;
}

Entidade::~Entidade(){
}
