PROJ_NAME = Conversion
TEST_PROJ_NAME = Test_$(PROJ_NAME)

SRC = src/Binary_to_Decimal.c\
src/Binary_to_Octal.c\
src/Binary_to_Hexadecimal.c\
src/Decimal_to_Binary.c\
src/Decimal_to_Octal.c\
src/Decimal_to_Hexadecimal.c

TEST_SRC = test/test_conversion.c \
unity/unity.c
INC_H = inc
INC_T = unity

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif
.PHONY: run clean test doc all

all:
	gcc -I $(INC_H) $(SRC) main.c -o $(call FixPath,$(PROJ_NAME).$(EXEC))

run:
	$(call FixPath,$(PROJ_NAME).$(EXEC))
test:
	gcc -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
	./$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))

coverage:
	gcc -fprofile-arcs -ftest-coverage -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
	gcov -a  test/test.c

cppcheck:
	cppcheck --enable=all $(SRC) main.c
debug:
	gcc -I $(INC_H) $(SRC) main.c -g -o $(PROJ_NAME).$(EXEC)
	gdb $(PROJ_NAME).$(EXEC)

valgrind:
	valgrind ./$(PROJ_NAME).$(EXEC)


clean:
	del *.$(EXEC)
	del *.gcda
	del *.gcno