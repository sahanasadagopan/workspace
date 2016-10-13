#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "memory.h"
#include "sys/time.h"
int8_t my_memmove(uint8_t *src,uint8_t *dst,uint32_t length)
{	
	if(src!=NULL && dst!=NULL)
	{
		while(src<src+length)
		{
			if(dst>src && dst<src+length)
			{
				dst=dst+length;
				src=src+length;
				*dst=*src+length;
				dst--;
				src--;
			}
			else
			{
				*dst=*src;
				src++;
				dst++;
				length--;
			}
		}
	return 1;
	}
	else return 0;
	
	
}

void main(){
int t;
uint8_t src[5000], dst[5000];
struct timeval my_memmove_start,my_memmove_end,memmove_start,memmove_end,my_memzero_start,my_memzero_end,memset_start,memset_end, my_reverse_start, my_reverse_end;
long time,mtime, secs, usecs;
int32_t length=10;
gettimeofday(&my_memmove_start, NULL); // gets time in the start
my_memmove(src,dst,length); // executes function my_memove
gettimeofday(&my_memmove_end, NULL);// gets time in the end
secs  = my_memmove_end.tv_sec  - my_memmove_start.tv_sec;
usecs = my_memmove_end.tv_usec - my_memmove_start.tv_usec;
time = ((secs*1000000)+usecs); // calculates time in us
printf("Elapsed time for my_memove for %d bytes: %ld usec\n", length,time);
}
