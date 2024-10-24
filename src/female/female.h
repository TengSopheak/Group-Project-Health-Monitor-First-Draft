#ifndef FEMALE_H
#define FEMALE_H

#include "../child/child.h"
using namespace std;

class Female : public Child {
	public:
		bool isHeartRateNormal = false;
		bool isBloodPressureNormal = false;
		bool isTemperatureNormal = false;

		void heartRate(int age, int bpm);
		void bloodPressure(int age, int sys, int dia);
		void temperature(int age, double temp);
};

#endif
