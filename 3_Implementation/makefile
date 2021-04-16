PROJ_NAME = Conversion
TEST_PROJ_NAME = Test_$(PROJ_NAME)

BUILD_DIR = Build

SRC = src/Binary_to_Decimal.c\
src/Binary_to_Octal.c\
src/Binary_to_Hexadecimal.c\
src/Decimal_to_Binary.c\
src/Decimal_to_Octal.c\
src/Decimal_to_Hexadecimal.c\
src/Power.c

COV_SRC = test_conversion.c

TEST_SRC = test/test_conversion.c \
unity/unity.c
INC_H = -Iinc
INC_T = -Iunity

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

all:$(BUILD_DIR)
	gcc $(INC_H) $(SRC) main.c -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

run:
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))
test:
	gcc $(INC_H) $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
	./$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))

coverage:
	gcc -fprofile-arcs -ftest-coverage $(INC_H) $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath, ./$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(COV_SRC)
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
	$(RM) test_conversion.c


cppcheck:
	cppcheck --enable=all $(SRC) main.c
debug:
	gcc -I $(INC_H) $(SRC) main.c -g -o $(PROJ_NAME).$(EXEC)
	gdb $(PROJ_NAME).$(EXEC)

valgrind:
	valgrind ./$(TEST_PROJ_NAME).$(EXEC)

$(BUILD_DIR):
	mkdir $(BUILD_DIR)


clean:
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
	$(RM) $(call FixPath, $(BUILD_DIR)/*)
	rmdir $(BUILD_DIR)
