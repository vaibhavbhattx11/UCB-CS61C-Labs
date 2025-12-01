#include "transpose.h"

/* The naive transpose function as a reference. */
void transpose_naive(int n, int blocksize, int *dst, int *src) {
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n; y++) {
            dst[y + x * n] = src[x + y * n];
        }
    }
}

/* Implement cache blocking below. You should NOT assume that n is a
 * multiple of the block size. */
int min(int x, int y){
    if(x<y) return x;
    return y;
}
void transpose_blocking(int n, int blocksize, int *dst, int *src) {
    for(int x=0; x<n; x+=blocksize){
        int rx = min(n, x+blocksize);
        for(int y=0; y<n; y+=blocksize){
            int ry = min(n, y+blocksize);
            for(int i=x; i<rx; i++) for(int j=y; j<ry; j++) dst[j + i * n] = src[i + j * n];
        }
    }
}
