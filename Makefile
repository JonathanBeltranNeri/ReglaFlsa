CC := c++
CFLAGS := -std=c++11 -Wall
LIBS := -lcurses -lexprtk
INCLUDE := -I include
LIBRARY_PATH := -L lib
SOURCE_DIR := src
BUILD_DIR := bin
EXECUTABLE := Reglafalsa

# Lista de archivos fuente
SOURCES := $(wildcard $(SOURCE_DIR)/*.cpp)

# Lista de archivos objeto generados
OBJECTS := $(patsubst $(SOURCE_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SOURCES))

# Compilación del ejecutable
$(BUILD_DIR)/$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $(INCLUDE) $(LIBRARY_PATH) $^ -o $@ $(LIBS)

# Regla para compilar los archivos objeto
$(BUILD_DIR)/%.o: $(SOURCE_DIR)/%.cpp
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

# Regla para limpiar archivos generados
clean:
	rm -rf $(BUILD_DIR)/*

# Regla para ejecutar el programa
run: $(BUILD_DIR)/$(EXECUTABLE)
	./$<

# Regla por defecto
.DEFAULT_GOAL := run

