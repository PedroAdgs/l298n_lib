#ifndef L298N_H
#define L298N_H

//#include "Arduino.h"

class L298N{

    private:
        int ENA;
        int ENB;
        int IN1;
        int IN2;
        int ENB;
        int IN3;
        int IN4;

    public:
        L298N(int ena, int in1, int in2, int enb, int in3, int in4);
        void setSpeed(int motor, int speed);
        void forward();
        void backward();
        void left();
        void right();
        void stop();
};

#endif