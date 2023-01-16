#include "permitType.h"

void permitType::setAnnual(char a) 
{
	if (a == 'A')
	{
		permit = "annual";
	}
}

void permitType::setSemester(char s) 
{
	if (s == 'S')
	{
		permit = "semester";
	}
}

void permitType::setOneDay(char od) 
{	
	if (od == 'O')
	{
		permit = "one day";
	}
}

void permitType::setParkNRide(char pr) 
{
	if (pr == 'P')
	{
		permit = "park n ride";
	}
}

void permitType::setCommuter(char c) 
{
	if (c == 'C')
	{
		permit = "commuter";
	}
}

