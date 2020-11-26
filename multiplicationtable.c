#include <stdio.h>

int main(){
	int num;
	printf("Limit:\n");
	if( scanf("%d", &num) != 1 || num<= 0){
	
		printf("Invalid input.\n");
		return 0;
	}
	int numsq = num*num;
	int digits = 0;
	
	/*to find number of digits of square */
	do
    {
        /* Increment digit count */
        digits++;

        /* Remove last digit of 'num' */
        numsq /= 10;
    } while(numsq != 0);
    
    
    
    /* first line */
    int dash = 0;
    while(dash<digits){
    	printf(" ");
    	dash ++;
	}
	printf("|");
	int fl = num;
	while(  fl>0 ){
		int again = digits + 1;
		printf("%*d", again, fl);
		--fl;
	}
	printf("\n");
	
	/*end of first line*/
	
	
	
	/*second line*/
	int sl= 0;
	while(sl<digits){
		printf("-");
		sl++;
	}
	printf("+");
	int finally = digits +1;
	int dashes = finally*num;
	int sl1 = 0;
	while(sl1<dashes){
		printf("-");
		sl1++;
	}
	printf("\n");
	/*end of second line*/
	
	
	/*every other line */
	int ins = 1;
	int out = num;
	while( ins<=num ){
		printf("%*d", digits, ins);
		printf("|");
		
		while(out>=ins ){
			int val = ins*out;
			printf("%*d",finally, val );
			out --;
		}
		out= num;
		printf("\n");
		ins ++;
	}
		
	return 0;
}
