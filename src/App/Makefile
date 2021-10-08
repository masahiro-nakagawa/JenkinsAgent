

cc=gcc

INCLUDE_OBJ =\
  -I../Target\
  -I./include

OBJS = \
  Calc.o\
  App.o


CFLAG_LM = ${CFLAG} -ggdb -Wall
CFLAG_OBJ = ${CFLAG} -ggdb -Wall

LIB_X = ${LIB}
LM = ./App.exe

all: ${LM}

${LM}: ${OBJS}
	${CC} ${CFLAG_LM} ${CFLAG_OBJ} ${INCLUDE_OBJ} -o ${LM} ${OBJS} ${LIB_X}


Calc.o: ../Target/Calc.c
	${CC} ${CFLAG_OBJ} ${INCLUDE_OBJ} -c ../Target/Calc.c
App.o: ./App.c
	${CC} ${CFLAG_OBJ} ${INCLUDE_OBJ} -c ./App.c


clean:
	rm -rf ${LM} ${OBJ}

run: all
	${LM}

