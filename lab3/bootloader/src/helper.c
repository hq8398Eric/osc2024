#include "mini_uart.h"
void hex_to_string(unsigned int x, char* buf) {
	buf[0] = '0'; buf[1] = 'x';
	char arr[16] = "0123456789abcdef";
	for (int i = 0; i < 8; i++) {
		unsigned char ch = (x >> ((32-4) - i*4)) & 0xF;
		buf[i + 2] = arr[ch];
	}
	buf[10] = '\0';
}

int same (char* one, char* two) {
	for(int i = 0; ; i ++) {
		if(one[i] == '\0' && two[i] == '\0') return 1;
		if(one[i] != two[i]) return 0;
	}
}
