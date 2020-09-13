# OBJS specifies which files to compile as part of the project
OBJS = draw.c main.c init.c input.c

# CC specifies which compiler we're using
CC = gcc

# COMPILER_FLAGS specifies the additional compilation options we're using
# -w supresses all warnings
COMPILER_FLAGS = -Wl,--allow-multiple-definition -g #-v 

# LINKER_FLAGS specifies the libraries we're linking against
LINKER_FLAGS = -lSDL2

# OBJ_NAME specifies the name of our executable
OBJ_NAME = Game01

# This is the target that compiles our executables
all : $(OBJS)
	$(CC) $(COMPILER_FLAGS) $(OBJS) $(LINKER_FLAGS) -o $(OBJ_NAME)