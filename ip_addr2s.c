/***********************************************
#
#      Filename: ip_addr2s.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: ip地址转换
#        Create: 2018-03-07 19:47:02
# Last Modified: 2018-03-07 19:47:02
***********************************************/
#include <arpa/inet.h>
#include <stdio.h>

/*
in_addr_t inet_addr(const char *strptr);
int inet_aton(const char *cp, struct in_addr *inp);
char *inet_ntoa(struct in_addr in);
*/

int main(){
	char *szValue1 = inet_ntoa("1.2.3.4");
	char *szValue2 = inet_ntoa("10.194.71.60");
	printf("address1: %s\n", szValue1);
	printf("address1: %s\n", szValue2);
}

