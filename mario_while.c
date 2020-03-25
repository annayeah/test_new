#include <stdio.h>

int main(void)
{
	int required_length = 6;
	int current_length = 1;
	while (current_length <= required_length) {
		int hashes = current_length;
		int spaces = required_length - hashes;

		while (spaces > 0)
		{
			printf(" ");
			spaces--;
		}
		while (hashes > 0) 
		{
			printf("#");
			hashes--;
		}
		current_length++;
		printf("\n");
	}
}