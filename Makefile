
NAME			= ft_container_tester

SOURCES_FOLDER	= ./tester/

SOURCES			=	main.cpp \
					vector_test.cpp \
#					tester_vector.cpp \
#					tester.cpp \
					tester_map.cpp \
					tester_list.cpp \
					tester_deque.cpp \
					tester_queue.cpp \
#					tester_stack.cpp
					

# INCLUDES =====================================================================
INCLUDE 		= ./tester/tester.hpp
# ==============================================================================

# FLAGS ========================================================================
FLAGS 			= -Wall -Wextra -Werror --std=c++98
# ==============================================================================

# OBJECTS ======================================================================
OBJECTS_FOLDER 	= ./tester/objects/

OBJECT			= $(SOURCES:.cpp=.o)
OBJECTS		 	= $(addprefix $(OBJECTS_FOLDER), $(OBJECT));
# ==============================================================================

# TESTER =======================================================================

$(OBJECTS_FOLDER)%.o :	$(SOURCES_FOLDER)%.cpp	$(INCLUDE) 
	@mkdir -p	$(OBJECTS_FOLDER)
	@echo "Compiling: $<"
	@clang++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	@clang++ $(FLAGS) -o $(NAME) $(OBJECTS)

all: $(NAME)

clean:
	@echo "Cleaning: $(OBJECTS_FOLDER)"
	@rm -rf $(OBJECTS_FOLDER)
	@echo "Cleaning: ./tester/vectors_output"
	@rm -rf ./tester/vectors_output
	@echo "Cleaning: ./tester/lists_output"
	@rm -rf ./tester/lists_output
	@echo "Cleaning: ./tester/stacks_output"
	@rm -rf ./tester/stacks_output
	@echo "Cleaning: ./tester/queues_output"
	@rm -rf ./tester/queues_output
	@echo "Cleaning: ./tester/deques_output"
	@rm -rf ./tester/deques_output
	@echo "Cleaning: ./tester/maps_output"
	@rm -rf ./tester/maps_output

fclean: clean
	@echo "Cleaning: $(NAME)"
	@rm -f $(NAME)

re: fclean all


run: $(NAME)
	@./$(NAME)

