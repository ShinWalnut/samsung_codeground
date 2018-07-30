#include <stdio.h>
#include <math.h>

//
//  https://blog.naver.com/skyshin0304/221328447079
//

int scoreboard[20] = { 6, 13, 4, 18, 1, 20, 5, 12, 9, 14, 11, 8, 16, 7, 19, 3, 17, 2, 15, 10 };
int A, B, C, D, E, N;

int score(double angle) {
	int a = (int)(angle / 18.0);
	return scoreboard[a];
}

int reward(double r) {
	if (r > A && r<B) {
		return 1;
	}
	else if (r > B && r<C) {
		return 3;
	}
	else if (r > C && r<D) {
		return 1;
	}
	else if (r > D && r<E) {
		return 2;
	}
	else{
	    return 0;
	}
}

int compute_score(double r, double angle) {
	if (r < A) {
		return 50;
	}

	return score(angle)*reward(r);
}

int main(void)
{
	int T, test_case, i;
	double x, y, angle, r;

	setbuf(stdout, NULL);

	scanf("%d", &T);
	for (test_case = 0; test_case < T; test_case++)
	{
	    int Answer = 0;
		scanf("%d", &A);
		scanf("%d", &B);
		scanf("%d", &C);
		scanf("%d", &D);
		scanf("%d", &E);
		scanf("%d", &N);

		for (i = 0; i<N; i++) {
			scanf("%lf", &x);
			scanf("%lf", &y);

			r = sqrt((x*x) + (y*y));
			angle = atan2(y , x);
			angle = angle*(double)180 / 3.141592653 +9;
			if (angle<0) {
				angle += 360;
			}
			//printf("r : %.4lf  angle : %.4lf\n", r, angle);
			//printf("score : %d\n", compute_score(r, angle));
			Answer += compute_score(r, angle);
		}

		printf("Case #%d\n", test_case + 1);
		printf("%d\n", Answer);

	}

	return 0;//Your program should return 0 on normal termination.
}
