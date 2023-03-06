#include<stdio.h>
#include<omp.h>
#include<stdlib.h>
int main()
{
        int i;
        omp_set_num_threads(4);
        #pragma omp parallel for schedule(guided)
        for(i=0;i<10;i++)
        {
                printf("Thread %d processes iteration %d\n",omp_get_thread_num(),i);
        }
return 0;
}
