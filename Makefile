# My third makefile

# Name of the project
PROJ_NAME=main

# .c files
C_LIB=$(wildcard ./lib/*.c)

# .h files
H_LIB=$(wildcard ./lib/*.h)

# Object files
OBJ=$(subst .c,.o,$(subst lib,objects,$(C_LIB)))

# Compiler and linker
CC=gcc

# Flags for compiler
CC_FLAGS=-c         \
         -W         \
         -Wall      \
         -ansi      \
         -pedantic

ifeq ($(OS),Windows_NT)
RM = rd /s /q
else
# Command used at clean target
RM = rm -rf
endif
#
# Compilation and linking
#
all: objFolder $(PROJ_NAME)

$(PROJ_NAME): $(OBJ) ./objects/main.o
	@ echo 'Building binary using GCC linker: $@'
	$(CC) $^ -o $@
	@ echo 'Finished building binary: $@'
	@ echo ' '

./objects/%.o: ./lib/%.c ./lib/%.h 
	@ echo 'Building target using GCC compiler: $<'
	$(CC) $< $(CC_FLAGS) -o $@
	@ echo ' '

./objects/main.o: ./mario_song.c $(H_LIB)
	@ echo 'Building target using GCC compiler: $<'
	$(CC) $< $(CC_FLAGS) -o $@
	@ echo ' '

objFolder:
	@ mkdir -p objects

clean:
	@ $(RM) ./objects/*.o
	@ rmdir ./objects

.PHONY: all clean