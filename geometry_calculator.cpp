/*
 * geometry_calculator.cpp
 *
 *  Created on: Apr 19, 2018
 *      Author: Luke
 */

using namespace std;

void calculateCircle(){

	double area;
	int radius;
	do{
		cout << "Enter radius: ";
		cin >> radius;
	}while(radius < 0);

	area = (double)(radius*radius)*3.14159;
	printf("The area is %f.\n", area);
}

void calculateRectangle(){

	int area;
	int length;
	int width;

	do{
		cout<< "Enter length: \n";
		cin >> length;
	}while(length < 0);

	do{
		cout << "Enter width: \n";
		cin >> width;
	}while(width < 0);


	area = length*width;
	printf("The area is %d.\n", area);
}

void calculateTriangle(){

	double area;
	int base;
	int height;

	do{
		cout<< "Enter base: \n";
		cin >> base;
	}while(base < 0);

	do{
		cout << "Enter height: \n";
		cin >> height;
	}while(height < 0);

	area = ((double)base*height)/2;
	printf("The area is %f.\n", area);
}


int main(){

	int input;
	cout << ("1. Calculate the area of a circle\n2. Calculate the area of a rectangle\n3. Calculate the area of a triangle\n4. Quit");
	cout << "\nEnter your choice (1-4): ";

	cin >> input;

	if(input > 1 || input < 4){
		if(input == 1){
				calculateCircle();
			}
		if(input == 2){
			calculateRectangle();
		}
		if(input == 3){
			calculateTriangle();
		}
		if(input == 4){
			return(0);
		}
	}else{
		cout << "Error: number entered not 1-4";
	}
}





