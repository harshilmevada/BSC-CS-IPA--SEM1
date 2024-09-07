#include <stdio.h>

struct State
{
      char state[50];
      int engineeringColleges;
      int medicalColleges;
      int managementColleges;
      int universities;
      int totalColleges;
};

int main()
{
      struct State states[100]; // Assuming a maximum of 100 states
      int n, i, highestColleges = 0, highestIndex = 0;

      printf("Enter the number of states: ");
      scanf("%d", &n);

      // Accept records of states
      for (i = 0; i < n; i++)
      {
            printf("\nEnter details for state %d:\n", i + 1);
            printf("State name: ");
            scanf("%s", &states[i].state);
            printf("Number of engineering colleges: ");
            scanf("%d", &states[i].engineeringColleges);
            printf("Number of medical colleges: ");
            scanf("%d", &states[i].medicalColleges);
            printf("Number of management colleges: ");
            scanf("%d", &states[i].managementColleges);
            printf("Number of universities: ");
            scanf("%d", &states[i].universities);

            states[i].totalColleges = states[i].engineeringColleges + states[i].medicalColleges + states[i].managementColleges + states[i].universities;
            if (states[i].totalColleges > highestColleges)
            {
                  highestColleges = states[i].totalColleges;
                  highestIndex = i;
            }
      }

      // Display state with the highest number of colleges
      printf("\nState with the highest number of colleges:\n");
      printf("State name: %s\n", states[highestIndex].state);
      printf("Total colleges: %d\n", highestColleges);

      // Calculate total colleges for each state and find the state with the highest number of colleges
      for (i = 0; i < n; i++)
      {
            int j;
            for (j = i + 1; j < n; j++)
            {
                  if (states[i].totalColleges < states[j].totalColleges)
                  {
                        struct State temp = states[i];
                        states[i] = states[j];
                        temp = states[i];
                  }
            }
      }

      for(i=0;i<n;i++)
      {
            printf("College Name : %s",states[i].state);
            printf("No Engineering Colleges : %d",states[i].engineeringColleges);
            printf("No Medical Colleges : %d",states[i].medicalColleges);
            printf("No Management Colleges : %d",states[i].managementColleges);
            printf("No Universities : %d",states[i].universities);
            printf("No Total Colleges In State : %d",states[i].totalColleges);
      }

      

      return 0;
}