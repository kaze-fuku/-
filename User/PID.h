#ifndef _PID_H__
#define _PID_H__
typedef struct{
	float Target;
	float Actual;
	float Out;
	
	float Kp;
	float Ki;
	float Kd;
	
	float Error0;
	float Error1;
	float Errorint;
	
	float OutMax;
	float OutMin;
}PID_t;

void PID_Update(PID_t *p);

#endif
