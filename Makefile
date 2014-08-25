CMP = g++
CFLAGS = -W -Wall -g
LDFLAGS = -lSDL2 
INCFLAGS = -I ${INCLUDE_FILES}

#directories

ROOT = .
INCLUDE = ${ROOT}/includes
EXE = ${ROOT}/exe
BIN = ${ROOT}/bin
 

#files
INCLUDE_FILES = ${INCLUDE}/$(wildcard *.h)

clean :
	rm *.o
	
%.cc : %.o
	${CMP} ${CFLAGS} -c $< -o $@ 
    	
test : ${EXE}/test.o 
	${CMP} ${EXE}/test.o ${CFLAGS} ${LDFLAGS} -o test 
	mv test ${BIN}
   
main : ${EXE}/main.o
	${CMP} ${EXE}/main.o ${CFLAGS} ${LDFLAGS} -o main 
	mv main ${BIN}
