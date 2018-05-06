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
	std::cout << 'initialize finished' << endl;
}

void PID::UpdateError(double cte) {

	p_error = cte;

	i_error = i_error + cte;

	d_error = cte - prev_cte;

	prev_cte = cte;
	
	std::cout << "Update Error" << endl;

}

double PID::TotalError() {

	std::cout << "Return Total Error" << endl;

	return Kp * p_error + Kd * d_error + Ki * i_error;

}

