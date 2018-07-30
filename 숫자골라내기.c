#include <stdio.h>
//
//
// https://blog.naver.com/skyshin0304/221327042872
//
//

int main(void)
{
	int T, test_case;
	unsigned int N, num;

	setbuf(stdout, NULL);

	scanf("%d", &T);
	for(test_case = 0; test_case < T; test_case++)
	{
	    int Answer = 0;
	    scanf("%d", &N);
	    
	    for(int i=0;i<N;i++){
	        scanf("%d",&num);
	        Answer ^= num;
	    }

        
		printf("Case #%d\n", test_case+1);
        printf("%d\n", Answer);
        
	}

	return 0;//Your program should return 0 on normal termination.
}
