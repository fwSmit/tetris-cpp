#pragma once
#include <SFML/Graphics.hpp>

class Tetris{
	const static size_t board_width = 10;
	const static size_t board_height = 40;
	const static size_t board_height_visible = 20;
	const static size_t n_pieces = 7;
	const float lock_delay = 0.5; // seconds
	int board[board_width][board_height];
	int pieces_bag [n_pieces];
	int stored_piece = -1;

	void draw(sf::RenderWindow& window);
	void hold_piece();
	void generate_new_bag();
	void rotate_piece();
	
};
