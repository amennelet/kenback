CC=clang
CFLAGS=-O0
TESTLIBS=-lcriterion

SRC=src
OBJ=obj
TEST=test
TESTBIN=$(TEST)/bin

SRCS=$(wildcard $(SRC)/*.c)
INCLS=$(wildcard $(SRC)/*.h)
OBJS=$(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SRCS))
TESTS=$(wildcard $(TEST)/*.c)
TESTOBJS=$(patsubst $(TEST)/%.c, $(TESTBIN)/%.o, $(TESTS))
TESTOUT=$(TESTBIN)/test.out

all: $(OBJ) $(TESTBIN) $(OBJS)

$(OBJ):
	mkdir $(OBJ)

$(TESTBIN):
	mkdir $(TESTBIN)

$(OBJS): $(SRCS) $(OBJ)
	$(CC) $(CFLAGS) -MD -c $< -o $@

$(TESTOBJS): $(TESTS) $(OBJS) $(TESTBIN)
	$(CC) $(CFLAGS) -MD -c $< -o $@

test:$(TESTOBJS)
	$(CC) $(CFLAGS) $(TESTLIBS) $(SRCS) $(TESTS) -o $(TESTOUT)
	@@$(TESTOUT)

displaypaths:
	@echo $(SRCS)
	@echo $(OBJS)
	@echo $(TESTS)
	@echo $(TESTOBJS)
	@echo $(TESTOUT)

clean:
	rm -R $(OBJ) $(TESTBIN)
