#include <stdio.h>
#include <time.h>

class Clock 
{
	float  elapsed;
	int hours;
	int seconds;
};

int main () {
	time_t rawtime; 
	struct tm * timeinfo;

	time ( &rawtime );
	timeinfo = localtime ( &rawtime );
	printf ( "Current local time and date: %s", ctime (&rawtime) );

	return 0;
}
