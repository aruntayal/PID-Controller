#include "PID.h"
#include <math.h> 
#include <iostream>

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
	    this->Kp = Kp; // Proportionnal term
	  	this->Ki = Ki; // Integral term
		this->Kd = Kd; // Differential term
		p_error = d_error = i_error = 0.0;
}

void PID::UpdateError(double cte) {
	 d_error = cte - p_error;
     p_error = cte;
     i_error += cte;
     ++step;

}


double PID::TotalError() {
	double control = -Kp * p_error -Kd * d_error - Ki * i_error;
	return control;
}

