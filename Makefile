CXX = g++  # Defina o compilador C++
CXXFLAGS = -std=c++20 -Wall  # Opções do compilador

TARGET = programa  # Nome do executável

# Lista de arquivos-fonte
SRCS = main.cpp RSA.cpp encriptar.cpp utils.cpp

# Gera nomes de arquivos-objeto a partir dos arquivos-fonte
OBJS = $(SRCS:.cpp=.o)

# Regra padrão para criar o executável
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Regra para cada arquivo-objeto
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regra para limpar os arquivos gerados durante a compilação
clean:
	rm -f $(TARGET) $(OBJS)
