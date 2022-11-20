#include "../Cabecalhos/Summer.h"
#include "../Cabecalhos/Fase_1.h"
using namespace Fases;

Summer::Summer() {
	tilemap[17][18] = 1; tilemap[17][19] = 1;	tilemap[18][18] = 1; tilemap[18][19] = 1;	tilemap[19][18] = 1; tilemap[19][19] = 1;
	tilemap[16][17] = 1; tilemap[16][16] = 2;	tilemap[15][16] = 1;

}
Summer::~Summer() {

}

void Summer::criar_fase() {
}
