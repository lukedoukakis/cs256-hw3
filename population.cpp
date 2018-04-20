/*
 * population.cpp
 *
 *  Created on: Apr 19, 2018
 *      Author: Luke
 */

using namespace std;

int calculatePop(int starting, int birthrate, int deathrate, int years){

	int final_pop = starting + years*(birthrate - deathrate);
	return final_pop;

}



int main(){

	int starting;
	int birthrate;
	int deathrate;
	int years;

	int final;

	do{
		cout<<"What is the starting size of the population?";
		cin>>starting;
	}while(starting < 2);

	do{
		cout<<"What is the birth rate";
		cin>>birthrate;
	}while(birthrate < 0);

	do{
		cout<<"What is the death rate?";
		cin>>deathrate;
	}while(deathrate < 0);

	do{
		cout<<"How many years to calculate?";
		cin>>years;
	}while(years < 1);

	final = calculatePop(starting, birthrate, deathrate, years);
	printf("The population is: %d", final);

}


