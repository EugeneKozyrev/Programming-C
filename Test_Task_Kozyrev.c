#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef enum{
	CRC_FAILED = 0,
	SUCCESS = 1
}status;

const uint32_t preamble = 0b00000001000000100000001100000100; // 0x01 0x02 0x03 0x04

uint8_t* sendMessage(uint8_t* message, uint8_t lenghtMessage, uint8_t resiverAddr);
status getMessage(uint8_t** fullMessage, uint8_t* getLen, uint8_t* getRecievAddr, uint8_t* getSenderAddr);
status readMessage(uint8_t** message, uint8_t* getLen, uint8_t* getRecievAddr, uint8_t* getSenderAddr);

int main(int argc, char const *argv[]){
	/*
	*	Я не совсем понимаю как я должен реализовать проверку моего алгоритма, да и в целом было непросто написать даже это	
	*/
	return 0;
}

status getMessage(uint8_t** fullMessage, uint8_t* getLen, uint8_t* getRecievAddr, uint8_t* getSenderAddr){
	uint32_t preambleBuff = 0;
	int i = 0;
	unsigned char c;
	while(1){
		scanf("%c", &c);
		preambleBuff = preambleBuff << 8 | (uint32_t) c;
		i++;
		if(preambleBuff == preamble){
			if(readMessage(fullMessage, getLen, getRecievAddr, getSenderAddr) == SUCCESS){
				return SUCCESS;
			}
			return CRC_FAILED;
		}
	}
}

status readMessage(uint8_t** message, uint8_t* getLen, uint8_t* getRecievAddr, uint8_t* getSenderAddr){
	uint8_t len, recievAddr, senderAddr, crc; 
	scanf("%c", (char*)&len);
	scanf("%c", (char*)&senderAddr);
	scanf("%c", (char*)&recievAddr);
	uint8_t x = recievAddr ^ senderAddr;
	uint8_t* messageStore = (uint8_t* ) malloc(sizeof(uint8_t) * len);
	for(int k = 0; k < len; ++k){
		scanf("%c", (char*)&messageStore[k]);
		x = x ^ messageStore[k];
	}
	scanf("%c", (char*)&crc);
	if(x == crc){
		*message = messageStore;
		*getLen = len;
		*getRecievAddr = recievAddr;
		*getSenderAddr = senderAddr;
		return SUCCESS;
	} 
	return CRC_FAILED;
}