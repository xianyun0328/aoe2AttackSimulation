iCXX = g++
CXXFLAGS = -std=c++14 -Wall -Werror=vla -g -MMD
EXEC = aoe2AttackSimulator.exe
OBJECTS = main.o unit.o cavalry.o infantry.o camel.o pikeman.o knight.o mamluk.o observer.o aliveObserver.o time.o
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}
clean:
	del ${OBJECTS} ${EXEC} ${DEPENDS}
.PHONY: clean