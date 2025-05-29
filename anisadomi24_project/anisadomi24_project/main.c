#include <stdio.h>

#define S 8
#define Q 10

// Function prototypes
void grade_tests(char answers[S][Q], char key[Q], int scores[S]);
void display_results(int scores[S]);

int main() {
    // Correct answer key
    char key[Q] = {'D', 'B', 'D', 'C', 'C', 'D', 'A', 'E', 'A', 'D'};

    // Students' answers (Final update with all requested changes)
    char answers[S][Q] = {
        {'A', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}, // Student 1
        {'D', 'B', 'A', 'B', 'C', 'A', 'E', 'E', 'A', 'D'}, // Student 2
        {'E', 'D', 'D', 'A', 'C', 'B', 'E', 'E', 'A', 'D'}, // Student 3
        {'C', 'B', 'A', 'E', 'D', 'C', 'E', 'E', 'A', 'D'}, // Student 4
        {'A', 'B', 'D', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}, // Student 5
        {'B', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}, // Student 6
        {'B', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}, // Student 7
        {'E', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}  // Student 8
    };

    int scores[S] = {0};

    // Grade the tests
    grade_tests(answers, key, scores);

    // Display results
    display_results(scores);

    return 0;
}
// Function to grade the tests
void grade_tests(char answers[S][Q], char key[Q], int scores[S]) {
    for (int i = 0; i < S; i++) {
        int correct_count = 0;
        for (int j = 0; j < Q; j++) {
            if (answers[i][j] == key[j]) {
                correct_count++;
            }
        }
        scores[i] = correct_count;
    }
}
// Function to display the results
void display_results(int scores[S]) {
    for (int i = 0; i < S; i++) {
        printf("Student %d's correct count is %d\n", i, scores[i]);
    }
}
