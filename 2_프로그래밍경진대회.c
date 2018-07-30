#include <stdio.h>
#include <stdlib.h>
//////////////////////////////////
//
// https://blog.naver.com/skyshin0304/221327061898
//
/////////////////////////////////

int static compare(const void *first, const void *second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

int main(void)
{
	int T, test_case;

	setbuf(stdout, NULL);

	scanf("%d", &T);

	for (test_case = 0; test_case < T; test_case++)
	{
		int Answer, N, max = 0, count = 0, i, n;
		scanf("%d", &N);

		int* arr = (int*)malloc(sizeof(int)*N);

		for (i = 0; i<N; i++) {
			scanf("%d", &n);
			arr[i] = n;
		}

		qsort(arr, N, sizeof(int), compare);
		
		for(i= 0; i < N; i++){
		    if(arr[i] + N - i > max){
		        max = arr[i] + N - i;
		    }
		}

		for (i = 0; i < N; i++) {
			if (arr[i] + N < max) {
				count++;
			}
			else{
			    Answer = N - count;
			    break;
			}
		}

		
		printf("Case #%d\n", test_case + 1);
		printf("%d\n", Answer);
		free(arr);

	}
	return 0;//Your program should return 0 on normal termination.
}
