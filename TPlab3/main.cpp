#include <iostream>
#include "Progr.h"
#include "Arifmetic.h"
#include "Geometric.h"
#include <fstream>

int counter, curId, newID, exitCh, feedback, typeCh;
int n;
float step, first;
int YN;

void main() {
	exitCh = 0;
	std::cout << "Enter the number of progresions" << std::endl;
	std::cin >> counter;
	if (counter <= 0) {
		std::cout << "But why... Anyway lets say that you printed 1..." << std::endl;
		counter = 1;
	}
	Progr** MAS;
	MAS = new Progr *[counter];
	std::ofstream fout;
	fout.open("TIlab3Output.txt", std::ofstream::app);
	while (!exitCh) {
		std::cout << "What should we do now?" << std::endl;
		std::cout << "1-Show the id of the current progression" << std::endl;
		std::cout << "2-Enter the progression's values" << std::endl;
		std::cout << "3-Find the summ" << std::endl;
		std::cout << "4-Change the current progression" << std::endl;
		std::cout << "0-Exit" << std::endl;

		std::cin >> feedback;
		switch (feedback)
		{
		case 1:
			system("cls");
			std::cout << "Current progression's id is " << curId << std::endl;
			break;
		case 2:
			system("cls");
			std::cout << "What type of the progression should it be" << std::endl;
			std::cout << "1-Arifmetic" << std::endl;
			std::cout << "2-Geometric" << std::endl;
			std::cin >> typeCh;
			if (typeCh == 1) {
				std::cout << "Please enter the first element value" << std::endl;
				std::cin >> first;
				std::cout << "Please enter the step value" << std::endl;
				std::cin >> step;
				MAS[curId] = new Arifmetic(first, step);
				std::cout << "The progression was added" << std::endl;
			}
			else if (typeCh == 2) {
				std::cout << "Please enter the first element value" << std::endl;
				std::cin >> first;
				std::cout << "Please enter the step value" << std::endl;
				std::cin >> step;
				MAS[curId] = new Geometric(first, step);
				std::cout << "The progression was added" << std::endl;
			}
			else {
				std::cout << "Really?" << std::endl;
			}
			

			break;
		case 3:
			system("cls");
			std::cout << "Please enter the number of elements" << std::endl;
			std::cin >> n;
			double sum;
			sum = MAS[curId]->find_summ(n);
			std::cout << "The summ of the first " << n << " elements is " << sum << std::endl;


			std::cout << "Do you wanna save the results" << std::endl;
			std::cout << "1-Yes" << std::endl;
			std::cout << "2-No" << std::endl;
			std::cin >> YN;
			if (YN == 1) {
				if (MAS[curId]->get_type() == 1)
					fout << "Arifmetic one. The first element is " << MAS[curId]->get_first() << ". The step is " << MAS[curId]->get_step() << ". The sum is " << sum << "\n";
				if (MAS[curId]->get_type() == 2)
					fout << "Geometric one. The first element is " << MAS[curId]->get_first() << ". The step is " << MAS[curId]->get_step() << ". The sum is " << sum << "\n";
			}
			
			else if (YN == 2) {
				std::cout << "Fine." << std::endl;
			}
			else if ((YN !=1) && (YN!=2)){
				std::cout << "Are you stupid or smt" << sum;
			}
			break;
		case 4:
			system("cls");
			std::cout << "Please enter the new id. Btw the id starts with 0" << std::endl;
			std::cin >> newID;
			if ((newID < 0) || (newID > (counter - 1))) {
				std::cout << "Dude, whats wrong with you" << std::endl;
			}
			else {
				curId = newID;
			}
			break;
		case 0:
			system("cls");
			exitCh = 1;

			
			break;
		default:
			break;
		}

	}
	delete[] MAS;
	fout.close();
}