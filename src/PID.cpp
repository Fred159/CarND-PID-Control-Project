#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
	Kp = Kp;
	Ki = Ki;
	Kd = Kd;
	prev_cte = 0;
}

void PID::UpdateError(double cte) {

	p_error = cte;

	i_error = i_error + cte;

	d_error = cte - prev_cte;

	prev_cte = cte;
	
}

double PID::TotalError() {

	return Kp * cte + Kd * d_error + Ki * i_error;

}

