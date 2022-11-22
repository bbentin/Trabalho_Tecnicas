#pragma once
#include "Obstaculo.h"
namespace Obstaculos {
    class Lava :
        public Obstaculo {
    private:

    public:
        // essa classe vai ser agua por enquanto rs
        Lava();
        ~Lava();
        void executar();
        void mover();
    };
}

