#include <iostream>

int main() {
	std::cout << "The Terrible Trivia" << '\n' << "A Digital Technologies 1.1 Outcome." << std::endl; // A title for the text-based game.

	const std::string questions[6] = { // Array containing the 5 questions.
		"How many legs do spiders have: ",
		"What is the capital of Australia: ",
		"What year did the iPhone 8 release: ",
		"Which planet is the closest to the sun: ",
		"What is the chemical symbol for gold: ",
		"How many years did WW2 last: ",
	};
	const std::string possibleAnswers[6][4] = { // 2D array storing 4 options for 5 questions.
		{"2", "4", "6", "8"},
		{"Sydney", "Canberra", "Adelaide", "Brisbane"},
		{"2015", "2016", "2017", "2018"},
		{"Mercury", "Earth", "Mars", "Neptune"},
		{"G", "Gd", "Go", "Au"},
		{"3", "4", "5", "6"}
	};
	const std::string answers[6]{
		"8", "Canberra", "2017", "Mercury", "Au", "6", // The answers to the questions
	};

	int score = 0; // Keep track of score
	std::string input; // A string variable for getting user input

	for (int i = 0; i < std::size(questions); i++) {
		std::cout << '\n' << questions[i]; // Output the questions
		for (int j = 0; j < std::size(possibleAnswers[i]); j++) {
			std::cout << possibleAnswers[i][j] << ", "; // Output the 4 options the user can guess from.
		};
		std::cout << '\n' << "Your Answer: ";
		std::cin >> input; // User input
		if (input == answers[i]) {
			score++; // If the answer is right, increase the score by 1.
		}
		else {
			continue; // If incorrect, continue the for loop	
		}
	}
	if (score >= 3) {
		std::cout << "You passed with a score of " << score << " out of 6." << std::endl;
	}
	else {
		std::cout << "You failed with a score of " << score << " out of 6." << std::endl;
	}
	std::cin.ignore();
	std::cin.get(); // Wait for user to press a key before closing the terminal.
	return 0;
}	
