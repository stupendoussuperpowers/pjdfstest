#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(int argc, char *argv[])
{
	FILE *fp;
	char output[1024] = { 0 };
	char mesg[512] = { 0 };

	fp = fopen("/tmp/imfs_input", "w");
	if (!fp) {
		perror("fopen imfs_input");
		return 1;
	}

	for (int i = 1; i < argc; i++)
		fprintf(fp, "%s ", argv[i]);

	fprintf(fp, "\n");
	fclose(fp);

	fp = fopen("/tmp/imfs_output", "r");

	if (!fgets(output, sizeof(output), fp)) {
		fclose(fp);
	}

	fclose(fp);

	fclose(fp);
	printf("%s", output);
}