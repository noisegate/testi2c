#include <wiringPi.h>
#include <mcp23016.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int fd;
	printf ("Testing wiringpi stuff and i2c\n");
	fd = mcp23016Setup(65, 0x20);
	pinMode(65,1);
	digitalWrite(65,1);
	printf("setup returns %i\n", fd);
	return 0;
}
