
#include "Patient.h" // header file reference
#include <iostream>

using namespace std;


bool Patient::setPatientType(char p)
{
	if (p == 'I' || p == 'O')
	{
		return true;
	}
	else
	{
		return false;
	}
}

char Patient::getPatientType()
{
	return patientType;
}


bool Patient::setDays(int d)
{
	if (validateInput(d) == false)
	{
		
		return false;
	}
	else
	{
		days = d;
		return true;
	}
}

int Patient::getDays()
{
	return days;
}

bool Patient::setRate(double r)
{
	if (validateInput(r) == false)
	{
		
		return false;
	}
	else
	{
		rate = r;
		return true;
	}

}

double Patient::getRate()
{
	return rate;
}


bool Patient::setServices(double s)
{
	if (validateInput(s) == false)
	{
		
		return false;
	}
	else
	{
		services = s;
		return true;
	}
}

double Patient::getServices()
{
	return services;
}

bool Patient::setMedication(double m)
{
	if (validateInput(m) == false)
	{
		
		return false;
	}
	else
	{
		medication = m;
		return true;
	}
}

double Patient::getMedication()
{
	return medication;
}


bool Patient::validateInput(double userInput)
{
	if (userInput >= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}



bool Patient::validateInput(int userInput)
{
	if (userInput >= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

double Patient::calcTotalCharges()
{
	return (days * rate) + medication + services;
}

