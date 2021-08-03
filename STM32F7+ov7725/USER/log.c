#include "log.h"
#include "stdarg.h"
void app_log(int priority,const char* fmt,...)
{		
		va_list argPt;
		char *t;
		if(priority == INFO){
			t = "Info";
		}else if(priority == ERROR){
			t = "Error";	
		}else{
			t = "Debug";
		}
		
		
		va_start(argPt, fmt);
		printf("[%s]",t);
		vprintf(fmt,argPt);
		
		va_end(argPt);
		
}

