#include <syslog.h>
#include <stdio.h>

int main()
{
	/* Try opening a non-existent file */
	FILE *f;

	f = fopen("not_here", "r");
	if (!f)
		syslog(LOG_ERR | LOG_USER, "oops - %m\n");
	return (0);
}
