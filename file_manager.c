#include "file_manager.h"

file open_file(char file_name[]){
	file fp;
	if((fp=fopen(file_name, "w"))==NULL){
		printf("ERROR - COULD NOT OPEN FILE!");
		exit(1);
	}
	return fp;
}

void save_to_file(file fp, char name_value[], int _value){
	fprintf(fp, "%s: ", name_value);
	fprintf(fp, "%d\n", _value);
}

void close_file(file fp){
	fclose(fp);
}