CFLAGS = -std=c++17
LDFLAGS = -lglfw -lvulkan
NAME = SE

SrakaEngine: *.cpp *.hpp
	g++ $(CFLAGS) -o $(NAME) *.cpp $(LDFLAGS)
	./$(NAME)

test: SrakaEngine
	./s
