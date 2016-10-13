#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "memory.h"
#include "sys/time.h"
void reverse(char *str, int len)
{
    int i=0, j=len-1, temp;
    while (i<j)
    {
        temp = *(str+i);
        *(str+i) = *(str+j);
        *(str+j) = temp;
        i++; j--;
    }
}

// Converts integer to ascii
int my_itoa(char *str, int data, int d)
{
    int i = 0,count=0;
    if(data<0)
    {
        count++;
        data=-data;
    }
    while (data)
    {
        *(str+i++) = (data%10) + '0';
        data = data/10;
    }

    // If number of digits required is more, then
    // add 0s at the beginning
    while (i < d)
        *(str+i++) = '0';
    if(count==1)
        *(str+i++)='-';
    reverse(str, i);
    *(str+i) = '\0';
    return i;
}

// Converts a floating point number to string.
void my_ftoa(float data, char *str, int number_after_decimal)
{
    // Extract integer part
    int before_decimal = (int)data;
    
    float after_decimal;
    // Extract floating part
    if (data<0)
	 after_decimal= (float)before_decimal-data;
    
    else
    	after_decimal = data-(float)before_decimal;

    // convert integer part to string
    int i = my_itoa(str,before_decimal, 0);

    // check for numbers after point
    if (number_after_decimal != 0)
    {
        *(str+i) = '.';  // add dot

        // Get the value of fraction part
        after_decimal = after_decimal * pow(10, number_after_decimal);

        my_itoa(str+i+1,(int)after_decimal, number_after_decimal);
    }
}
void main(){
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
