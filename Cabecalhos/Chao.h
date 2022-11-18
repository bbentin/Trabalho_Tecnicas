#pragma once
#include "../Cabecalhos/Entidade.h"
namespace Entidades {
    class Chao :
        public Entidade{
    private:
     
    public:
        Chao();
        Chao(int tipo);
        ~Chao();

        void executar();
        void mover();
    };
}

