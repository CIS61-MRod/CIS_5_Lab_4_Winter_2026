#include <iostream>

using std::cout;
using std::endl;

int calculateSum(const int arr[], int size) {
	int total = 0;
	for (int i = 0; i < size; i++) {
		total += arr[i];
	}
	return total;
}

double getAverage(int sum, int size) {
	return static_cast<double>(sum) / size;
}

void addBonus(int arr[], int size, int bonus = 5) {
	for (int i = 0; i < size; i++) {
		arr[i] += bonus;
	}
}

int findHighest(const int* arr, int size) {
	int highest = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > highest) {
			highest = arr[i];
		}
	}
	return highest;
}

int countPassed(const int arr[], int size) {
	int count = 0;
	for (int i = 0; i < size; ++i) {
		if (arr[i] >= 70) {
			count++;
		}
	}
	return count;
}

int main() {
	const int SIZE = 5;
	int scores[SIZE] = {65, 82, 90, 45, 78};

	cout << "Original Scores: " << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << scores[i] << " ";
	}

	cout << "\nScores after adding bonus: " << endl;
	for (auto& num : scores) {
		num += 5;
	}

	for (int num : scores) {
		cout << num << " ";
	}

	int sum = calculateSum(scores, SIZE);
	double average = getAverage(sum, SIZE);

	int highest = findHighest(scores, SIZE);
	int passedCount = countPassed(scores, SIZE);

	cout << "\nOriginal Total Sum: " << sum << endl;
	cout << "Average Score: " << average << endl;
	cout << "Highest Score: " << highest << endl;
	cout << "Number of Students Passed: " << passedCount << endl;

	return 0;
}
