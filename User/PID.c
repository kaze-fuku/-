#include "stm32f10x.h"                  // Device header
#include "PID.H"
void PID_Update(PID_t *p)
{
	p->Error1=p->Error0;
	p->Error0=p->Target-p->Actual;
	
	if(p->Ki!=0)
	{
		p->Errorint+=p->Error0;
	}
	else
	{
		p->Errorint=0;
	}
	p->Out=p->Kp*p->Error0
	      +p->Ki*p->Errorint
	      +p->Kd*(p->Error0-p->Error1);
	
		if(p->Out>p->OutMax){p->Out=p->OutMax;}
		if(p->Out<p->OutMin){p->Out=p->OutMin;}
}
