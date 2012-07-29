#include <stdio.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define STEP() do{ ans = max(ans,n3*n2*n1*grid[i][j]); \
                   n3 = n2; \
                   n2 = n1; \
                   n1 = grid[i][j]; \
                 } while (0);
#define RESET() do{n1 = n2 = n3 = 0;} while (0);

int grid[20][20];

int main () {
	int i=0,j=0,n1=0,n2=0,n3=0,ans=0,si=0,sj=0;
	// input and horisontal
	for (i=0;i<20;i++) {
		RESET();
		for (j=0;j<20;j++) {
			scanf("%d",&grid[i][j]);
			STEP();
		}
	}
	// vertical
	for (j=0;j<20;j++) {
		RESET();
		for (i=0;i<20;i++) {
			STEP();
		}
	}
	// diagonals starting from top row, in direction of main diagonal
	for (sj=0; sj<20; sj++) {
		i = 0; j = sj;
		RESET();
		while (i<20 && j<20) {
			STEP();
			i++; j++;
		}
	}
	// diagonals starting from top row, perpendicular to main diagonal
	for (sj=0; sj<20; sj++) {
		i = 0; j = sj;
		RESET();
		while (i<20 && j<20) {
			STEP();
			i++; j--;
		}
	}
	// diagonals starting from left, in direction of main diagonal
	for (si=0; si<20; si++) {
		i=si; j=0;
		RESET();
		while (i<20 && j<20) {
			STEP();
			i++; j++;
		}
	}
	// diagonals starting on the right, perpendicular to main diagonal
	for (si=0; si<20; si++) {
		i=si; j=19;
		RESET();
		while (i<20 && j<20) {
			STEP();
			i++; j--;
		}
	}
	printf("%d\n",ans);
}
