

cc=gcc

INCLUDE_OBJ =\
  -I../testRunner\
  -I../Target\
  -I./include

OBJS = \
  Minus.o\
  CalcTest.o\
  testRunner.o


CFLAG_LM = ${CFLAG} -ggdb -Wall
CFLAG_OBJ = ${CFLAG} -ggdb -Wall

LIB_X = ${LIB}
LM = ./test2.exe

all: ${LM}

${LM}: ${OBJS}
	${CC} ${CFLAG_LM} ${CFLAG_OBJ} ${INCLUDE_OBJ} -o ${LM} ${OBJS} ${LIB_X}


Minus.o: ../Target/Minus.c
	${CC} ${CFLAG_OBJ} ${INCLUDE_OBJ} -c ../Target/Minus.c
CalcTest.o: ./CalcTest.c
	${CC} ${CFLAG_OBJ} ${INCLUDE_OBJ} -c ./CalcTest.c
testRunner.o: ../testRunner/testRunner.c
	${CC} ${CFLAG_OBJ} ${INCLUDE_OJB} -c ../testRunner/testRunner.c


clean:
	rm -rf ${LM} ${OBJS}

run: all
	${LM}

