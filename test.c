#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <dirent.h>

int main(int argc, char *argv[])
{
	unsigned char buf[2];
	unsigned char tmp;
	long temp = 0x12345678;
	int bus;
	int addr;
	int offset;
	
	printf("temp = 0x%x \n", temp);
	bus = (temp >> 24) & 0x00ff;
	printf("temp = 0x%x \n", temp);
	addr = (temp >> 16) & 0x00ff;
	printf("temp = 0x%x \n", temp);
	offset = temp & 0xffff;

	printf("temp = 0x%x \n", temp);
	printf("bus = 0x%x \n", bus);
	printf("addr = 0x%x \n", addr);
	printf("offset = 0x%x \n", offset);
	
	return 0;
}