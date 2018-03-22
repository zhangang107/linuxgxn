/***********************************************
#
#      Filename: byteorder.c
#
#        Author: zg107uc@ustc.mail.edu.cn
#   Description: 判断机器字节序
#        Create: 2018-03-07 19:32:19
# Last Modified: 2018-03-07 19:32:19
***********************************************/
#include <stdio.h>

void byteorder() {
	union {
		short value;
		char union_bytes[sizeof(short)];
	} test;
	test.value = 0x0102;
	if ((test.union_bytes[0] == 1) && (test.union_bytes[1] == 2))
		printf("big endian\n");
	else if ((test.union_bytes[0] == 2) && (test.union_bytes[1] == 1))
		printf("little endian\n");
	else
		printf("unkown... \n");
}

int main()
{
	byteorder();
	return 0;
}
