// @ description
// receive three characters, then transform them to lower case and print them in reverse order
// @type
// learning ascii 
#include <stdio.h>
 
#define GAP 'A'-'a'
 
int main(void) {
	char a,b,c;
	scanf("%c %c %c",&a,&b,&c);
	a += GAP;
	b += GAP;
	c += GAP;
	printf("%c %c %c",c,b,a);
	return 0;
}