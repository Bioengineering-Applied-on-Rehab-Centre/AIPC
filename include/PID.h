#ifndef PID_H
#define PID_H

#include "../include/defines.h"

class PID{
    public:
        double Kp, Ki, Kd;
        double actPrp, actInt, actDer, ctrSig;
        double amostra, amostraAnterior;
        double setpoint;
        double lastProcess, lastErro;

        PID(double Kp, double Ki, double Kd);
        void setPoint(double sp);
        void setConstants(double Kp, double Ki, double Kd);
        void loadSample(double amostra);
        double getControlSignal();
        int signalValid(double ctrSig);
    };

#endif