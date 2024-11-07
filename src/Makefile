
CC=gcc

# Why are we depending on print and load csv?
INCS := -I../inc/ 
INCS += -I${RSUTILS_SRC_ROOT}/inc/
INCS += -I${RSLUTILS_SRC_ROOT}/inc/
INCS += -I/usr/include/lua5.1/ 

MYLIBS := -I${RSUTILS_SRC_ROOT}/src/librsutils.so
MYLIBS += -I${RSLUTILS_SRC_ROOT}/src/librslutils.so
all: libcmem.so 

clean:
	rm -f *.so *.o _* ${OBJS}
		
SRCS := cmem.c
SRCS += aux_cmem.c

OBJS = $(SRCS:.c=.o)

# QCFLAGS += -DVERBOSE # NOTE: Add -DVERBOSE for verbosity
.c.o : 
	$(CC) -c -o $@ $< ${QCFLAGS} $(INCS) 

${CGUTILS_SO} :
	make -C ../../../QJIT/GUTILS/

libcmem.so:   ${OBJS} 
	$(CC) ${OBJS} -shared -o libcmem.so ${MYLIBS} \
	  	${CGUTILS_SO} 
