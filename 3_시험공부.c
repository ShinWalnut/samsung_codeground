#include <stdio.h>
#include <stdlib.h>

//
//  https://blog.naver.com/skyshin0304/221328054142
//

int static compare(const void *first, const void *second)
{   //내림차순
	if (*(int*)first > *(int*)second)
		return -1;
	else if (*(int*)first < *(int*)second)
		return 1;
	else
		return 0;
}

int main(void)
{
	int T, test_case;

	setbuf(stdout, NULL);

	scanf("%d", &T);
	
	for(test_case = 0; test_case < T; test_case++)
	{
		int Answer=0, N, i, K; 
		
		scanf("%d",&N);
		scanf("%d",&K);
		int* arr = (int*)malloc(sizeof(int)*N);
		
		for(i=0;i<N;i++){
		    scanf("%d",&arr[i]);
		}
		
		qsort(arr,N,sizeof(int),compare);
		
		for(i=0;i<K;i++){
		    Answer += arr[i];
		}
        
		printf("Case #%d\n", test_case+1);
        printf("%d\n", Answer);
        
	}

	return 0;//Your program should return 0 on normal termination.
}
