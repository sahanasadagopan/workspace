#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "memory.h"
#include "sys/time.h"
#include "buffer.h"
void release(char *s)
{
	free(s);
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
	char s;
	int dr,cr;
int8_t src;
int32_t dst;
struct timeval release_start,release_end,del_item_start,del_item_end,my_ftoa_start,my_ftoa_end,atoi_start,atoi_end, itoa_start,itoa_end,ftoa_start,ftoa_end;
long time,mtime, secs, usecs;
int32_t base=10;
gettimeofday(&release_start, NULL); // gets time in the start
release(s); // executes function my_memove
gettimeofday(&release_end, NULL);// gets time in the end
secs  = release_end.tv_sec  - release_start.tv_sec;
usecs = release_end.tv_usec - release_start.tv_usec;
time = ((secs*1000000)+usecs); // calculates time in us
printf("Elapsed time for free for : %ld usec\n",time);
}
