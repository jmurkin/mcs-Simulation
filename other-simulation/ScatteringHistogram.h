#ifndef ScatteringHistogram_h
#define ScatteringHistogram_h

#include <ctime>
#include <string>
#include "TRandom3.h"
#include "TROOT.h"
#include "TH1.h"
#include "TF1.h"
#include "ScatteringEvent.cxx"
//#include "ScatteringEvent.h"



class ScatteringHistogram{
public:
	ScatteringHistogram(int NIn, int binsIn, double rangeIn, double MaterialLengthIn, double NominalMomentumIn, double MomentumVarianceIn, double AngularResolutionIn);
	ScatteringHistogram(int NIn, int binsIn, double rangeIn, double MaterialLengthIn, double NominalMomentumIn, double MomentumVarianceIn);
	~ScatteringHistogram();
	int N;
	int bins;
	double range;
	double MaterialLength;
	double NominalMomentum;
	double MomentumVariance;
	double AngularResolution;
	TH1D *calculateHistogram(double X0, char *IDstring, int colour);
	TH1D *calculateHistogram(double X0, char* IDstring, int colour, double AngularResolutionIn);
	double calculateProbability(double X01, double X02, char* IDString1, char* IDString2, int colour1, int colour2);
	double calculateProbability(double X01, double X02, char* IDString1, char* IDString2, int colour1, int colour2, double AngularResolutionIn);


};
#endif
