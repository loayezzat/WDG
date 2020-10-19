
#include <iostream>
#include "Graph.h"
#include <sstream>
#include <string>

using namespace std;
void Add_new_vertex();
int main() {
	char option ;
	//Graph<int> g ;
	//Print prompt msgs
	cout << "1) Create new graph of a specific type" <<endl ;
	cout << "2) Switch to a graph" <<endl ;
	cout << "3) Add a new vertex" <<endl ;
	cout << "4) Add a new edge" <<endl ;
	cout << "5) Remove an edge" <<endl ;
	cout << "6) Update vertex value" <<endl ;
	cout << "7) Print vertex value" <<endl ;
	cout << "8) Print the whole graph" <<endl ;
	cout << "9) Exit the program" <<endl ;

	//loop :
		//take input
	while(1){
		cout << "\nIN:\n" ;
		cin>> option ;
		cout << "\nOUT: \n" ;
		cout << option <<endl;
		switch(option) {
		case '3' : Add_new_vertex() ; break ;

		}
		//give output
	}
	return 0;
}


