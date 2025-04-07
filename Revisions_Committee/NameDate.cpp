//Name and Date Function
#define _CRT_SECURE_NO_WARNINGS  // supress cTime error
#include <stdio.h> //includes a library for an input & output
#include <time.h> //includes a library for an input & output

using namespace std; // uses the standard namespace

int mainDate() //integer returns 0, mainDate
{

	time_t timer;
	struct tm * timeinfo;
	char buffer[80];
	time(&timer);
	timeinfo = localtime(&timer);

	strftime(buffer, 80, "Matthew Lynch ES115 C++: %A %B %d %I:%M%p %Y.", timeinfo); //display text, current date and time
	puts(buffer);

	return 0; //return 0


			  //		%a  /* Abbreviated weekday */
			  //		%A  /* Full weekday */
			  //		%b  /* Abbreviated month */
			  //		%B  /* Full month */
			  //		%c  /* Full date and time */
			  //		%d  /* Day of the month (1-31) */
			  //		%H  /* Hour (24 hour clock) */
			  //		%I  /* Hour (12 hour clock) */
			  //		%j  /* Day of the year (1-366)*/
			  //		%m  /* Month (1-12) */
			  //		%M  /* Minute (0-59) */
			  //		%p  /* AM/PM for 12 hour clock */
			  //		%S  /* Second (0-60) */
			  //		%U  /* Week number from Sunday */
			  //		%w  /* Weekday (0-6) from Sunday */
			  //		%W  /* Week number from Monday */
			  //		%x  /* Full date */
			  //		%X  /* Full time of day */
			  //		%y  /* Year without century */
			  //		%Y  /* Year with century */
			  //		%Z  /* Time zone */
			  //		%%  /* Print a % character */

} // the Body of the program ends