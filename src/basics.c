#include "basics.h"

String fileContents(String filename){
	FILE *f=fopen(filename,"r");
	fseek (f, 0, SEEK_END);
	long length = ftell (f);
	rewind(f);
	String buffer = initn(char,length);
	if(buffer)fread (buffer, 1, length, f);
	fclose(f);
	return buffer;
}

int str_repetition(String base, String pattern){
	int i=0,count=0,j;
	if(strlen(pattern)>strlen(base))return -1;
	while('\0'!=base[i]){
		j=0;
		while(base[i+j]==pattern[j]){
			j++;
		}
		if('\0'==pattern[j])count++;
		i++;
	}
	return count;
}

