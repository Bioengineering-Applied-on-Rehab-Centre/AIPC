#ifndef BOMBA_H
#define BOMBA_H

#include "../include/defines.h"
#include "../include/PID.h"

class Bomba {
    private:
        PID pid;
        int numBomba;
    public:
        Bomba();
        Bomba(int numBomba);
        void aciona(float pressaoDesejada);
        void desliga();
};

#endif