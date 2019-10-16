#include<stdio.h>
#include<time.h>

void printlocaltime(void)
{
	struct tm *timeptr;
	time_t		secsnow;
	time(&secsnow);
	timeptr = localtime(&secsnow);
	printf("the data is %d-%d-20%02d\n",
			(timeptr->tm_mon) + 1,
			(timeptr->tm_day),
			(timeptr->tm_year));
	printf("local time is %02d:%02d:%02d\n",
			timeptr->tm_hour,
			timeptr->tm_min,
			timeptr->tm_sec);
}
