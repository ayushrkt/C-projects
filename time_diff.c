#include <stdio.h>
int main(){
unsigned int h1, m1, s1, ms1, h2, m2, s2, ms2;
printf("Enter time t1:\n");
if(scanf("%u : %u : %u , %u", &h1, &m1, &s1, &ms1) != 4 || h1>23 || m1 > 59 || s1 >59 || ms1>999){
	printf("Invalid input.\n");
    return 0;
}


printf("Enter time t2:\n");
if(scanf("%u : %u : %u , %u", &h2, &m2, &s2, &ms2)!=4 || h2>23 || m2 > 59 || s2 >59 || ms2>999){
	printf("Invalid input.\n");
	return 0;
}


unsigned int absoltime_1 = ms1 + (1000*s1) + (60*1000*m1) + (60*60*1000*h1); //converts the entire time to milliseconds
unsigned int absoltime_2 = ms2 + (1000*s2) + (60*1000*m2) + (60*60*1000*h2); 
int time_difference= absoltime_2 - absoltime_1; 
if(time_difference< 0){ //sanitizes input.
	printf("Invalid input.\n");
	return 0;
}
int h, m, s, ms; //int initialization helps in getting integer solid values for final result
h= time_difference/(60*60*1000);
int left1 = time_difference%(60*60*1000);
m = left1/(60*1000);
int left2= left1%(60*1000);
s= left2/1000;
ms= left2%1000;


printf("Duration: %2d:%02d:%02d,%03d\n", h, m, s, ms); //result
return 0;
}
