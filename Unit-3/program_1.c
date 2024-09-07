#include <stdio.h>

// Define the structure with the tag 'state'
struct state
{
      char state_name[50];
      int num_districts;
      long total_population;
};

int main()
{
      struct state s;

      // Read the data from the user
      printf("Enter the state name: ");
      scanf("%s", &s.state_name);

      printf("Enter the number of districts: ");
      scanf("%d", &s.num_districts);

      printf("Enter the total population: ");
      scanf("%ld", &s.total_population);

      // Display the data
      printf("\nState Information:\n");
      printf("State Name: %s\n", s.state_name);
      printf("Number of Districts: %d\n", s.num_districts);
      printf("Total Population: %ld\n", s.total_population);

      return 0;
}
