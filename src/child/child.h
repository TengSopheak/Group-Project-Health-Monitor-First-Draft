#ifndef CHILD_H
#define CHILD_H

#include <string>
using namespace std;

class Child {
	public:
		bool isHeartRateNormal = false;
		bool isBloodPressureNormal = false;
		bool isTemperatureNormal = false;

		void heartRate(string ageGroup, int bpm);
		void bloodPressure(string ageGroup, int sys, int dia);
		void temperature(string ageGroup, double temp);
};

#endif
