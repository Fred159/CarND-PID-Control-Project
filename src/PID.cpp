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
	cte = Kp * cte + Kd * diff_cte / delta_t + Ki * sum_cte;
	return cte;
}

