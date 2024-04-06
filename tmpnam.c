#include <stdio.h>

int main()
{
	char tmpname[L_tmpnam];
	char *filename;
	FILE *tmpfp;

	filename = mkstemp(tmpname);  // was tmpnam

	printf("Temporary file name is: %s\n", filename);

	tmpfp = tmpfile();
	if (tmpfp)
		printf("Opened a temporary file OK\n");
	else
		perror("tmpfile");
	return (0);
}
