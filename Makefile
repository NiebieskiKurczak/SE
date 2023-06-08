CFLAGS = -std=c++17
LDFLAGS = -lglfw -lvulkan
NAME = SE

SrakaEngine: main.cpp
	g++ $(CFLAGS) -o $(NAME) main.cpp $(LDFLAGS)
	./$(NAME)

test: SrakaEngine
	./s
