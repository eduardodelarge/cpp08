# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caeduard <caeduard>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/26 12:39:45 by caeduard          #+#    #+#              #
#    Updated: 2023/10/18 01:11:45 by caeduard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC_DIR = .
BUILD_DIR = build

SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRCS))

EXECUTABLE = Span

.PHONY: all clean fclean re

all: $(BUILD_DIR) $(EXECUTABLE)

$(BUILD_DIR):
		mkdir -p $(BUILD_DIR)

$(EXECUTABLE): $(OBJS)
		$(CXX) $(CXXFLAGS) -o $(EXECUTABLE) $(OBJS)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
		$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
		rm -rf $(BUILD_DIR)

fclean: clean
		rm -f $(EXECUTABLE)

re: fclean all
