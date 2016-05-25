#ifndef DEBUG_H
#define  DEBUG_H

//#include <stdio.h>

#ifdef _cplusplus
extern "C" {
#endif 

#define  TRACE_IN()    		do						\
							{						\
								printf("[  %s:%s ] enter into %s:%s:%d", __DATE__, __TIME__, __FILE__, __FUNCTION__, __LINE__); \
							}while(0);

#define  TRACE_OUT()    		do						\
							{						\
								printf("[  %s:%s ] leave from %s:%s:%d", __DATE__, __TIME__, __FILE__, __FUNCTION__, __LINE__); \
							}while(0);

#ifdef _cplusplus
}
#endif

#endif

