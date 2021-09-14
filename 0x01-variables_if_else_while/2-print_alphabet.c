#include <stdio.h>
/**
 * main - 
 * 
 * Description: 
 * 
 * Return: Always 0.
 */
int main(void)
{
        int az;
	int nl;
	
	nl = '\n';
	for(az = 'a'; az <= 'z'; az++) {
		putchar(az);
	}
		putchar(nl);
        return (0);
}
