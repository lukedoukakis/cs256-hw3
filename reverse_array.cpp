/*
 * reverse_array.cpp
 *
 *  Created on: Apr 19, 2018
 *      Author: Luke
 */

using namespace std;

int* reverseArray(int arr[], arr::size()){

	int *arr2 = new int[arr->size()];

	int inc;
	for(int i = arr->size(); i >= 0; i--){
		arr2[inc] = arr[i];
		inc++;

	}

	return arr2;
}

int main(){

	int sampleArray[3] = {1, 2, 3};

	int* output = reverseArray(sampleArray);

	for(int i = 0; i < output->size(); i++){
		cout<<output[i];
	}
}


