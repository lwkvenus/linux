
CURR_PATH := $(shell pwd)

OUTPUT := threadpool

CC := gcc 

INCLUDE := -I.

CFLAGS := -O2 #-Werror
CLIBS := -pthread 


SRCS := $(shell ls $(CURR_PATH)/*.c) 
OBJS := $(patsubst %.c,%.o,$(SRCS))

$(OUTPUT):$(OBJS) 
	$(CC)  $(CFLAGS) $(CLIBS) $(INCLUDE) -o $@ $^
	
	mkdir output 
	mv $(OUTPUT) $(CURR_PATH)/output
%.o:%.c
	$(CC) -c $(CFALGS) $(CLIBS) $(INCLUDE) -o $@ $<

clean:
	-rm -rf  *.o *~ $(CURR_PATH)/output/$(OUTPUT)
	-rm -rf output

