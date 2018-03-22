/***********************************************
#
#      Filename: backlog.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: 研究backlog参数对listen系统调用的实际影响
#        Create: 2018-03-07 20:26:27
# Last Modified: 2018-03-07 20:26:27
***********************************************/
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include <string.h>

static bool stop = false;
static void handle_term(int sig) {
	stop = true;
}
int main()
{
	signal(SIGTERM, handle_term);
	if (argc <= 3) {
		printf("usage: %s ip_address port_number backlog\n", basename(argv[0]));
		return 1;
	}
	const char *ip = argv[1];
	int port = atoi(argv[2]);
	int backlog = atoi(argv[3]);
	int sock = socket(PF_INET, SOCK_STREAM, 0);
	assert(sock >= 0);
	struct sockaddr_in address;
	bzero(&address, sizeof(address));
	address.sin_family = AF_INET;

	return 0;
}
