#include <stdio.h>
#include <stdlib.h>

#include "shifter.h"
#include "file_manager.h"

void write_binary(int);
void line(void);

int main (void){
	file fp = open_file("shift_tracking.txt");
	
	int _no_shift;
	int _shifter; 

	printf("INPUT VALUE TO SHIFT:\t");
	scanf("%d", &_no_shift);
	write_binary(_no_shift);
	save_to_file(fp, "START VALUE:", _no_shift);
	line();
	printf("SHIFT FOR:\t");
	scanf("%d", &_shifter);
	save_to_file(fp, "SHIFT VALUE:", _shifter);

	int _shift_left = shifter_left(_no_shift, _shifter);
	save_to_file(fp, "VALUE AFTER LEFT SHIFT:", _shift_left);

	int _shift_right = shifter_right(_no_shift, _shifter);
	save_to_file(fp, "VALUE AFTER RIGHT SHIFT:", _shift_right);

	printf("LEFT SHIFT: \t%d\n", _shift_left);
	write_binary(_shift_left);
	line();
	printf("RIGHT SHIFT: \t%d\n", _shift_right);
	write_binary(_shift_right);
	line();
	getchar();
	getchar();

	close_file(fp);
	return 0;
}


void write_binary(int _to_binary){
	while(_to_binary){
		if(_to_binary & 1)
			printf("1");
		 else
			printf("0");
			
		_to_binary>>=1;
	}
}

void line(void){
	printf("\n");
}