// solution-1
#include <stdio.h>

void reverse(int arr[], int start, int end) {
  while (start < end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

void rotate_array(int arr[], int n, int m) {
  // If m is greater than or equal to n,
  // then one full rotation is completed
  m = m % n;
  // If no rotation is needed, return the original array
  if (m == 0) {
    return;
  }
  // Reverse the first n-m elements
  reverse(arr, 0, n - m - 1);
  // Reverse the last m elements
  reverse(arr, n - m, n - 1);
  // Reverse the whole array
  reverse(arr, 0, n - 1);
}

int main() {
  int n, m;
  printf("Enter an array size: ");
  scanf("%d", &n);
  printf("Enter number of rotation: ");
  scanf("%d", &m);
  int arr[n];
  printf("Enter numbers for your array: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  rotate_array(arr, n, m);
  printf("Results: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}

// Solution-2
#include <stdio.h>

int main() {
  int road_length, num_areas;
  printf("Enter the length of the road: ");
  scanf("%d", &road_length);
  printf("Enter how many areas are needed for new facilities: ");
  scanf("%d", &num_areas);

  int trees[road_length + 1]; // Array to store tree positions
  for (int i = 0; i <= road_length; i++) {
    trees[i] = 0;
  }

  // Loop through each area and mark trees
  int start, end;
  for (int i = 0; i < num_areas; i++) {
    printf("area #%d starting point & ending point: ", i + 1);
    scanf("%d %d", &start, &end);
    for (int j = start; j <= end; j++) {
      trees[j] = 1;
    }
  }

  // Count number of trees to move
  int num_to_move = 0;
  for (int i = 0; i <= road_length; i++) {
    if (trees[i] == 1) {
      num_to_move++;
    }
  }

  printf("Result of number of trees needed to move: %d\n", num_to_move);

  return 0;
}

// Solution-3
#include <stdio.h>
int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  if (num % 3 == 0 && num % 5 == 0 && num % 7 == 0) {
    printf("Divisible by 3, 5, and 7");
  } else if (num % 3 == 0 && num % 5 == 0) {
    printf("Divisible by 3 and 5");
  } else if (num % 3 == 0 && num % 7 == 0) {
    printf("Divisible by 3 and 7");
  } else if (num % 5 == 0 && num % 7 == 0) {
    printf("Divisible by 5 and 7");
  } else if (num % 3 == 0) {
    printf("Divisible by 3");
  } else if (num % 5 == 0) {
    printf("Divisible by 5");
  } else if (num % 7 == 0) {
    printf("Divisible by 7");
  } else {
    printf("NOT");
  }

  return 0;
}

// Solution-4

// Solution-5:
#include <stdio.h>

void print_hailstone_sequence(int n) {
  printf("%d ", n);
  while (n != 1) {
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = 3 * n + 1;
    }
    printf("%d ", n);
  }
}

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Hailstone sequence: ");
  print_hailstone_sequence(n);
  return 0;
}
