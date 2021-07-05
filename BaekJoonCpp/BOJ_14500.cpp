#include <cstdio>

int mymax(int a, int b){return a > b ? a : b;};
int main(void){
	int m,n,maxval = 0; scanf("%d %d",&m, &n);
	int tetro[m][n];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			scanf("%d",&tetro[i][j]);
	for (int i = 0; i < m; i++){
		for (int j = 0; j <= n-4; j++){
			int hrz= 0, vrt=0;
			for (int h = j; h < j+4; h++) hrz += tetro[i][h];
			maxval = mymax(maxval,hrz);
		}
	}// 긴 녀석 가로이동
	for (int i = 0; i < n; i++){
		for (int j = 0; j <= m-4; j++){
			int vrt = 0;
			for (int h = j; h < j+4; h++) vrt += tetro[h][i];
			maxval = mymax(maxval,vrt);
		}
	}// 긴 녀석 세로이동

	for (int i = 0; i < m-1; i++){
		for (int j = 0; j <= n-2; j++){
			int sqr=0;
			for (int h = j; h < j+2; h++) sqr += (tetro[i][h]+tetro[i+1][h]);
			maxval = mymax(maxval,sqr);
		}
	}// 네모 녀석 이동
	
	for (int i = 0; i < m-1; i++){
		for (int j = 0; j <= n-3; j++){
			int tspin_up = 0,tspin_down = 0,times = 0,md,mu;
			for (int h = j; h < j+3; h++){
				times++;
				if(times == 2) md = tetro[i+1][h];
				tspin_down += tetro[i][h];
			}
			times = 0;
			for (int h = j; h < j+3; h++){
				times++;
				if(times == 2) mu = tetro[i][h];
				tspin_up += tetro[i+1][h];
			}
			maxval = mymax(maxval,mymax(tspin_down + md,tspin_up + mu));
		}
	}// 티스핀 가로 이동
	for (int i = 0; i < n-1; i++){
		for (int j = 0; j <= m-3; j++){
			int tspin_right = 0,tspin_left = 0,times = 0,mr,ml;
			for (int h = j; h < j+3; h++){
				times++;
				if(times == 2) mr = tetro[h][i+1];
				tspin_right += tetro[h][i];
			}
			times = 0;
			for (int h = j; h < j+3; h++){
				times++;
				if(times == 2) ml = tetro[h][i];
				tspin_left += tetro[h][i+1];
			}
			maxval = mymax(maxval,mymax(tspin_right + mr,tspin_left + ml));
		}
	}// 티스핀 세로 이동

	for (int i = 0; i < m-1; i++){
		for (int j = 0; j <= n-3; j++){
			int lspin1 = 0,lspin2=0, times = 0, dl, dr,ul,ur;
			for (int h = j; h < j+3; h++){
				times++;
				if(times == 1) dl = tetro[i+1][h];
				if(times == 3) dr = tetro[i+1][h];
				lspin1 += tetro[i][h];
			}
			maxval = mymax(maxval, mymax(lspin1+dl,lspin1+dr));
			times = 0;
			for (int h = j; h < j+3; h++){
				times++;
				if(times == 1) ul = tetro[i][h];
				if(times == 3) ur = tetro[i][h];
				lspin2 += tetro[i+1][h];
			}
			maxval = mymax(maxval, mymax(lspin2+ul,lspin2+ur));
		}
	}//엘스핀 3바닥 이동

	for (int i = 0; i < n-1; i++){
		for (int j = 0; j <= m-3; j++){
			int lspin1 = 0,lspin2=0, times = 0, ru, rd,lu,ld;
			for (int h = j; h < j+3; h++){
				times++;
				if(times == 1) ru = tetro[h][i+1];
				if(times == 3) rd = tetro[h][i+1];
				lspin1 += tetro[h][i];
			}
			maxval = mymax(maxval, mymax(lspin1+ru,lspin1+rd));
			times = 0;
			for (int h = j; h < j+3; h++){
				times++;
				if(times == 1) lu = tetro[h][i];
				if(times == 3) ld = tetro[h][i];
				lspin2 += tetro[h][i+1];
			}
			maxval = mymax(maxval, mymax(lspin2+lu,lspin2+ld));
		}
	}// 엘스핀 2바닥
	for (int i = 1; i < m-1; i++){
		for (int j = 0;j <= n-2;j++){
			int zspin1 = 0, times = 0, lu,rd,ru,ld;
			for (int h = j; h < j+2; h++){
				times++;
				if(times == 1) {
					lu = tetro[i-1][h];
					ld = tetro[i+1][h];
				}
				if(times == 2) {
					rd = tetro[i+1][h];
					ru = tetro[i-1][h];
				}
				zspin1 += tetro[i][h];
			}
			maxval = mymax(maxval,mymax(zspin1 + lu + rd,zspin1 + ld + ru));
		}
	}//z스핀 서있을때 이동
	for (int i = 1; i < n-1; i++){
		for (int j = 0;j <= m-2;j++){
			int zspin1 = 0, times = 0, lu,rd,ru,ld;
			for (int h = j; h < j+2; h++){
				times++;
				if(times == 1) {
					lu = tetro[h][i-1];
					ru = tetro[h][i+1];
				}
				if(times == 2) {
					ld = tetro[h][i-1];
					rd = tetro[h][i+1];
				}
				zspin1 += tetro[h][i];
			}
			maxval = mymax(maxval,mymax(zspin1 + lu + rd,zspin1 + ld + ru));
		}
	}//z스핀 누웠을 때 이동
	printf("%d",maxval);
	return 0;
}