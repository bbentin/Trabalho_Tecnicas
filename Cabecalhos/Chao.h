#pragma once
#include "../Cabecalhos/Entidade.h"
namespace Entidades {
    class Chao :
        public Entidade{
    private:
        static bool chao2;
    public:
        Chao();
        Chao(bool tipo);
        ~Chao();

        void executar();
        void mover();
    };
}

