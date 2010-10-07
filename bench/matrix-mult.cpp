#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

float *
mmulf(float *a, float *b, float *r)
{
    r[0] =
	b[0] * a[0] +
        b[0+1] * a[4] +
        b[0+2] * a[8] +
        b[0+3] * a[12];
    r[0+1] =
	b[0] * a[1] +
        b[0+1] * a[5] +
        b[0+2] * a[9] +
        b[0+3] * a[13];
    r[0+2] =
	b[0] * a[2] +
        b[0+1] * a[6] +
        b[0+2] * a[10] +
        b[0+3] * a[14];
    r[0+3] =
	b[0] * a[3] +
        b[0+1] * a[7] +
        b[0+2] * a[11] +
        b[0+3] * a[15];
    r[4] =
	b[4] * a[0] +
        b[4+1] * a[4] +
        b[4+2] * a[8] +
        b[4+3] * a[12];
    r[4+1] =
	b[4] * a[1] +
        b[4+1] * a[5] +
        b[4+2] * a[9] +
        b[4+3] * a[13];
    r[4+2] =
	b[4] * a[2] +
        b[4+1] * a[6] +
        b[4+2] * a[10] +
        b[4+3] * a[14];
    r[4+3] =
	b[4] * a[3] +
        b[4+1] * a[7] +
        b[4+2] * a[11] +
        b[4+3] * a[15];
    r[8] =
	b[8] * a[0] +
        b[8+1] * a[4] +
        b[8+2] * a[8] +
        b[8+3] * a[12];
    r[8+1] =
	b[8] * a[1] +
        b[8+1] * a[5] +
        b[8+2] * a[9] +
        b[8+3] * a[13];
    r[8+2] =
	b[8] * a[2] +
        b[8+1] * a[6] +
        b[8+2] * a[10] +
        b[8+3] * a[14];
    r[8+3] =
	b[8] * a[3] +
        b[8+1] * a[7] +
        b[8+2] * a[11] +
        b[8+3] * a[15];
    r[12] =
	b[12] * a[0] +
        b[12+1] * a[4] +
        b[12+2] * a[8] +
        b[12+3] * a[12];
    r[12+1] =
	b[12] * a[1] +
        b[12+1] * a[5] +
        b[12+2] * a[9] +
        b[12+3] * a[13];
    r[12+2] =
	b[12] * a[2] +
        b[12+1] * a[6] +
        b[12+2] * a[10] +
        b[12+3] * a[14];
    r[12+3] =
	b[12] * a[3] +
        b[12+1] * a[7] +
        b[12+2] * a[11] +
        b[12+3] * a[15];
    return r;
}

float *
mmulf_new(float *a, float *b)
{
  float *r = new float[16];

    r[0] =
	b[0] * a[0] +
        b[0+1] * a[4] +
        b[0+2] * a[8] +
        b[0+3] * a[12];
    r[0+1] =
	b[0] * a[1] +
        b[0+1] * a[5] +
        b[0+2] * a[9] +
        b[0+3] * a[13];
    r[0+2] =
	b[0] * a[2] +
        b[0+1] * a[6] +
        b[0+2] * a[10] +
        b[0+3] * a[14];
    r[0+3] =
	b[0] * a[3] +
        b[0+1] * a[7] +
        b[0+2] * a[11] +
        b[0+3] * a[15];
    r[4] =
	b[4] * a[0] +
        b[4+1] * a[4] +
        b[4+2] * a[8] +
        b[4+3] * a[12];
    r[4+1] =
	b[4] * a[1] +
        b[4+1] * a[5] +
        b[4+2] * a[9] +
        b[4+3] * a[13];
    r[4+2] =
	b[4] * a[2] +
        b[4+1] * a[6] +
        b[4+2] * a[10] +
        b[4+3] * a[14];
    r[4+3] =
	b[4] * a[3] +
        b[4+1] * a[7] +
        b[4+2] * a[11] +
        b[4+3] * a[15];
    r[8] =
	b[8] * a[0] +
        b[8+1] * a[4] +
        b[8+2] * a[8] +
        b[8+3] * a[12];
    r[8+1] =
	b[8] * a[1] +
        b[8+1] * a[5] +
        b[8+2] * a[9] +
        b[8+3] * a[13];
    r[8+2] =
	b[8] * a[2] +
        b[8+1] * a[6] +
        b[8+2] * a[10] +
        b[8+3] * a[14];
    r[8+3] =
	b[8] * a[3] +
        b[8+1] * a[7] +
        b[8+2] * a[11] +
        b[8+3] * a[15];
    r[12] =
	b[12] * a[0] +
        b[12+1] * a[4] +
        b[12+2] * a[8] +
        b[12+3] * a[12];
    r[12+1] =
	b[12] * a[1] +
        b[12+1] * a[5] +
        b[12+2] * a[9] +
        b[12+3] * a[13];
    r[12+2] =
	b[12] * a[2] +
        b[12+1] * a[6] +
        b[12+2] * a[10] +
        b[12+3] * a[14];
    r[12+3] =
	b[12] * a[3] +
        b[12+1] * a[7] +
        b[12+2] * a[11] +
        b[12+3] * a[15];
    return r;
}

double *
mmuld(double *a, double *b, double *r)
{
    r[0] =
	b[0] * a[0] +
        b[0+1] * a[4] +
        b[0+2] * a[8] +
        b[0+3] * a[12];
    r[0+1] =
	b[0] * a[1] +
        b[0+1] * a[5] +
        b[0+2] * a[9] +
        b[0+3] * a[13];
    r[0+2] =
	b[0] * a[2] +
        b[0+1] * a[6] +
        b[0+2] * a[10] +
        b[0+3] * a[14];
    r[0+3] =
	b[0] * a[3] +
        b[0+1] * a[7] +
        b[0+2] * a[11] +
        b[0+3] * a[15];
    r[4] =
	b[4] * a[0] +
        b[4+1] * a[4] +
        b[4+2] * a[8] +
        b[4+3] * a[12];
    r[4+1] =
	b[4] * a[1] +
        b[4+1] * a[5] +
        b[4+2] * a[9] +
        b[4+3] * a[13];
    r[4+2] =
	b[4] * a[2] +
        b[4+1] * a[6] +
        b[4+2] * a[10] +
        b[4+3] * a[14];
    r[4+3] =
	b[4] * a[3] +
        b[4+1] * a[7] +
        b[4+2] * a[11] +
        b[4+3] * a[15];
    r[8] =
	b[8] * a[0] +
        b[8+1] * a[4] +
        b[8+2] * a[8] +
        b[8+3] * a[12];
    r[8+1] =
	b[8] * a[1] +
        b[8+1] * a[5] +
        b[8+2] * a[9] +
        b[8+3] * a[13];
    r[8+2] =
	b[8] * a[2] +
        b[8+1] * a[6] +
        b[8+2] * a[10] +
        b[8+3] * a[14];
    r[8+3] =
	b[8] * a[3] +
        b[8+1] * a[7] +
        b[8+2] * a[11] +
        b[8+3] * a[15];
    r[12] =
	b[12] * a[0] +
        b[12+1] * a[4] +
        b[12+2] * a[8] +
        b[12+3] * a[12];
    r[12+1] =
	b[12] * a[1] +
        b[12+1] * a[5] +
        b[12+2] * a[9] +
        b[12+3] * a[13];
    r[12+2] =
	b[12] * a[2] +
        b[12+1] * a[6] +
        b[12+2] * a[10] +
        b[12+3] * a[14];
    r[12+3] =
	b[12] * a[3] +
        b[12+1] * a[7] +
        b[12+2] * a[11] +
        b[12+3] * a[15];
    return r;
}

int
main (int argc, char **argv)
{
  float fm1[16], fm2[16], fm3[16];
  double dm1[16], dm2[16], dm3[16];

  for (int i = 0; i < 16; ++i) {
    fm1[i] = (float) rand();
    fm2[i] = (float) rand();
    fm3[i] = (float) rand();
    dm1[i] = (double) rand();
    dm2[i] = (double) rand();
    dm3[i] = (double) rand();
  }

  clock_t t0, t1;

  float *ff1 = new float[16];
  float *ff2 = new float[16];
  float *ff3 = new float[16];
  float *ftmp;

  memcpy(ff1, fm1, sizeof(float)*16);
  memcpy(ff2, fm2, sizeof(float)*16);
  memcpy(ff3, fm3, sizeof(float)*16);

  t0 = clock();
  for (int i = 0; i < 1000000; ++i) {
    mmulf(ff1, ff2, ff3);
    ftmp = ff3;
    ff3 = ff2;
    ff2 = ff1;
    ff1 = ftmp;
  }
  t1 = clock();

  printf ("floats (reuse): %d ms\n", (t1 - t0) * 1000 / CLOCKS_PER_SEC);

  memcpy(ff1, fm1, sizeof(float)*16);
  memcpy(ff2, fm2, sizeof(float)*16);
  memcpy(ff3, fm3, sizeof(float)*16);

  t0 = clock();
  for (int i = 0; i < 1000000; ++i) {
    ff3 = mmulf_new(ff1, ff2);

    ftmp = ff3;
    ff3 = ff2;
    ff2 = ff1;
    ff1 = ftmp;

    delete [] ff3;
  }
  t1 = clock();

  printf ("floats (no reuse): %d ms\n", (t1 - t0) * 1000 / CLOCKS_PER_SEC);

#if 0
  double *dd1 = dm1, *dd2 = dm2, *dd3 = dm3, *dtmp;
  t0 = clock();
  for (int i = 0; i < 1000000; ++i) {
    mmuld(dd1, dd2, dd3);
    dtmp = dd3;
    dd3 = dd2;
    dd2 = dd1;
    dd1 = dtmp;
  }
  t1 = clock();

  printf ("doubles: %d ms\n", (t1 - t0) * 1000 / CLOCKS_PER_SEC);
#endif

  return 0;
}
