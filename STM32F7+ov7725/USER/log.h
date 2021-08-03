#ifndef __LOG_H
#define __LOG_H 
#include "usart.h"
#define INFO 1
#define ERROR 2
#define DEBUG 3
//
void app_log(int priority,const char* fmt,...);

#endif

