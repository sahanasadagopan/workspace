#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "memory.h"
#include "sys/time.h"

void add_item(circbuffer *cb,uint8_t item)
{
	uint8_t buffcheck=buff_full(cb);
	if(buffcheck)
	{
		char s[]="Buffer is full, wrap around is done";
		//Log0(s,strlen(s));
		cb->num_elements=0;
		cb->head=cb->buffer;
	}
		*cb->head=item;
		char s[]="Success";
		//Log0(s,strlen(s));
		//printf("success");
		cb->head++;
		cb->num_elements++;
}
void main(){
	circbuffer cb,b;
	uint8_t i,length,item;
	//printf("\nEnter the length of the buffer");
	//scanf("%c",&length);
	char arr[30]="This is integer";
	char arr1[30];
	cb.size=10;
	cb.num_elements=0;
	cb.buffer=arr1;
	cb.tail=cb.buffer;
	cb.head=cb.buffer;
	
int t;
	float s;
	int dr,cr;
int8_t src;
int32_t dst;
struct timeval my_atoi_start,my_atoi_end,my_itoa_start,my_itoa_end,my_ftoa_start,my_ftoa_end,atoi_start,atoi_end, itoa_start,itoa_end,ftoa_start,ftoa_end;
long time,mtime, secs, usecs;
int32_t base=10;
gettimeofday(&ftoa_start, NULL); // gets time in the start
int32_t z=my_ftoa(s,dr,cr); // executes function my_memove
gettimeofday(&ftoa_end, NULL);// gets time in the end
secs  = ftoa_end.tv_sec  - ftoa_start.tv_sec;
usecs = ftoa_end.tv_usec - ftoa_start.tv_usec;
time = ((secs*1000000)+usecs); // calculates time in us
printf("Elapsed time for my_ftoi for %d bytes: %ld usec\n", base,time);
}
