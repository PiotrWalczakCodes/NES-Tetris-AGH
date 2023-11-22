#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include <iostream>
#include <vector>


class Grid
{
public:
	
	Grid(sf::RenderWindow* window);
	void Initialise();
	void Print();
	void Draw();
	bool IsCellOutside(int row, int col);
	bool IsCellEmpty(int row, int col);

	int ClearFullRows();
	int ClearedRows;

	void Clear();

	int grid[20][10];
private:

	bool isRowFull(int row);
	void ClearRow(int row);
	void MoveRowDown(int row, int numOfRows);

	int rows;
	int cols;
	float blockSize;
	std::vector<sf::Color> colors = { 
		sf::Color::Black, sf::Color::White, sf::Color::White, 
		sf::Color::White, sf::Color::White, sf::Color::White, 
		sf::Color::White, sf::Color::White 
	};


	sf::RenderWindow* currentWindow;
};