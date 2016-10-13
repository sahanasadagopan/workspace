#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "memory.h"
#include "sys/time.h"
int32_t my_atoi(int8_t *str)
{
	if(str!=NULL)
	{
		while(*str!='\0')
		{
		if(*str>='0' && *str<='9' || *str=='-')
		{
			printf("%d",*str);
		}
		else return 0;
		str++;	
	}
	}
	*str=0;
}

//Program to convert data from ASCII to Integer
/*      variable definitions
        str:pointer to output converted data*/
void main(){
int t;
int8_t src;
int32_t dst;
struct timeval my_atoi_start,my_atoi_end,my_itoa_start,my_itoa_end,my_ftoa_start,my_ftoa_end,atoi_start,atoi_end, itoa_start,itoa_end,ftoa_start,ftoa_end;
long time,mtime, secs, usecs;
int32_t base=10;
gettimeofday(&atoi_start, NULL); // gets time in the start
int8_t z=my_atoi(&src); // executes function my_memove
gettimeofday(&atoi_end, NULL);// gets time in the end
secs  = atoi_end.tv_sec  - atoi_start.tv_sec;
usecs = atoi_end.tv_usec - atoi_start.tv_usec;
time = ((secs*1000000)+usecs); // calculates time in us
printf("Elapsed time for my_atoi for %d bytes: %ld usec\n", base,time);
}
