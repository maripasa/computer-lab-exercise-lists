CC = gcc
CFLAGS = -Wall
BIN_DIR = bin

# Lista de arquivos .c (adicione mais conforme necessário)
SOURCES = $(wildcard *.c)

# Gera a lista de nomes dos executáveis correspondentes
EXECUTABLES = $(patsubst %.c,$(BIN_DIR)/%,$(SOURCES))

all: $(EXECUTABLES)

$(BIN_DIR)/%: %.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	# Não é necessário remover a pasta bin, pois já existe
	rm -f $(EXECUTABLES)