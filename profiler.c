#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "memory.h"
#include "sys/time.h"
int8_t* my_itoa(int8_t *str,int32_t data,int32_t base)
{
   int32_t rem;
   int num=data;
   int8_t i=0;
   int8_t beg,end;
   char temp;
   if(data<0)
   {
      data=-data; //if data is negative, make it positive and execute the code
   }
   else 
   {
      data=data;
   }			
   while(data!=0)
   {
      rem=data%base;
      if(rem>9)
      {	
	 *(str+i)=(rem-10)+'a';
      }
      else
      {
	 *(str+i)=rem+'0';
      }
      data=data/base;
      i++;
    }
	
    if(base==10 && num<0) //if data is negative append a '-' to the converted data
    {
       *(str+i)='-';
	i++;
    }
	
    //to reverse the string
    for(beg=0,end=i-1;beg<end;beg++,end--)
    {
       temp=*(str+beg);
       *(str+beg)=*(str+end);
       *(str+end)=temp;
    }
    *(str+i)='\0';
    i++;
    return str;
}
//Program to convert data from ASCII to Integer
/*      variable definitions
        str:pointer to output converted data*/
void main(){
int t;
int8_t src[5000]
int32_t dst[5000];
struct timeval my_atoi_start,my_atoi_end,my_itoa_start,my_itoa_end,my_ftoa_start,my_ftoa_end,atoi_start,atoi_end, itoa_start,itoa_end,ftoa_start,ftoa_end;
long time,mtime, secs, usecs;
int32_t length=10;
gettimeofday(&my_itoa_start, NULL); // gets time in the start
my_itoa(dst,src,length); // executes function my_memove
gettimeofday(&my_itoa_end, NULL);// gets time in the end
secs  = my_itoa_end.tv_sec  - my_itoa_start.tv_sec;
usecs = my_itoa_end.tv_usec - my_itoa_start.tv_usec;
time = ((secs*1000000)+usecs); // calculates time in us
printf("Elapsed time for my_atoi for %d bytes: %ld usec\n", length,time);
}
