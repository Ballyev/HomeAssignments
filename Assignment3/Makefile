PROJECT = transformer_tests
CXX = g++
SRC = transformer.cpp autobot.cpp decepticon.cpp maximal.cpp test_transformers.cpp
OBJS = $(SRC:.cpp=.o)
GTEST_LIBS = -lgtest -lgtest_main - pthread
$(PROJECT): $(OBJS)
	$(CXX) $(PROJECT) -o $@ $(OBJS) $(GTEST_LIBS)
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS) $(PROJECT)	