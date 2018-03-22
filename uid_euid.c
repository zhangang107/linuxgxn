/***********************************************
#
#      Filename: uid_euid.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: 测试进程的UID和EUID的区别
#        Create: 2018-03-13 19:38:42
# Last Modified: 2018-03-13 19:38:42
***********************************************/
#include <unistd.h>
#include <stdio.h>

int main()
{
	uid_t uid = getuid();
	uid_t euid = geteuid();
	printf("userid is：%d, effective userid is：%d\n", uid, euid);
	return 0;
}
