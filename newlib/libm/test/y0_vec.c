#include "test.h"
 one_line_type y0_vec[] = {
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbff33333, 0x33333333},			/* 64.0000=f(-1.20000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbff30a3d, 0x70a3d70a},			/* 64.0000=f(-1.19000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbff2e147, 0xae147ae1},			/* 64.0000=f(-1.18000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbff2b851, 0xeb851eb8},			/* 64.0000=f(-1.17000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbff28f5c, 0x28f5c28f},			/* 64.0000=f(-1.16000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbff26666, 0x66666666},			/* 64.0000=f(-1.15000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbff23d70, 0xa3d70a3d},			/* 64.0000=f(-1.14000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbff2147a, 0xe147ae14},			/* 64.0000=f(-1.13000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbff1eb85, 0x1eb851eb},			/* 64.0000=f(-1.12000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbff1c28f, 0x5c28f5c2},			/* 64.0000=f(-1.11000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbff19999, 0x99999999},			/* 64.0000=f(-1.10000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbff170a3, 0xd70a3d70},			/* 64.0000=f(-1.09000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbff147ae, 0x147ae147},			/* 64.0000=f(-1.08000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbff11eb8, 0x51eb851e},			/* 64.0000=f(-1.07000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbff0f5c2, 0x8f5c28f5},			/* 64.0000=f(-1.06000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbff0cccc, 0xcccccccc},			/* 64.0000=f(-1.05000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbff0a3d7, 0x0a3d70a3},			/* 64.0000=f(-1.04000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbff07ae1, 0x47ae147a},			/* 64.0000=f(-1.03000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbff051eb, 0x851eb851},			/* 64.0000=f(-1.02000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbff028f5, 0xc28f5c28},			/* 64.0000=f(-1.01000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfefffff, 0xfffffffe},			/* 64.0000=f(-0.01000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfefae14, 0x7ae147ac},			/* 64.0000=f(-0.99000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfef5c28, 0xf5c28f5a},			/* 64.0000=f(-0.98000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfef0a3d, 0x70a3d708},			/* 64.0000=f(-0.97000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfeeb851, 0xeb851eb6},			/* 64.0000=f(-0.96000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfee6666, 0x66666664},			/* 64.0000=f(-0.95000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfee147a, 0xe147ae12},			/* 64.0000=f(-0.94000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfedc28f, 0x5c28f5c0},			/* 64.0000=f(-0.93000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfed70a3, 0xd70a3d6e},			/* 64.0000=f(-0.92000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfed1eb8, 0x51eb851c},			/* 64.0000=f(-0.91000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfeccccc, 0xccccccca},			/* 64.0000=f(-0.90000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfec7ae1, 0x47ae1478},			/* 64.0000=f(-0.89000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfec28f5, 0xc28f5c26},			/* 64.0000=f(-0.88000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfebd70a, 0x3d70a3d4},			/* 64.0000=f(-0.87000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfeb851e, 0xb851eb82},			/* 64.0000=f(-0.86000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfeb3333, 0x33333330},			/* 64.0000=f(-0.85000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfeae147, 0xae147ade},			/* 64.0000=f(-0.84000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfea8f5c, 0x28f5c28c},			/* 64.0000=f(-0.83000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfea3d70, 0xa3d70a3a},			/* 64.0000=f(-0.82000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe9eb85, 0x1eb851e8},			/* 64.0000=f(-0.81000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe99999, 0x99999996},			/* 64.0000=f(-0.80000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe947ae, 0x147ae144},			/* 64.0000=f(-0.79000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe8f5c2, 0x8f5c28f2},			/* 64.0000=f(-0.78000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe8a3d7, 0x0a3d70a0},			/* 64.0000=f(-0.77000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe851eb, 0x851eb84e},			/* 64.0000=f(-0.76000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe7ffff, 0xfffffffc},			/* 64.0000=f(-0.75000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe7ae14, 0x7ae147aa},			/* 64.0000=f(-0.74000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe75c28, 0xf5c28f58},			/* 64.0000=f(-0.73000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe70a3d, 0x70a3d706},			/* 64.0000=f(-0.72000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe6b851, 0xeb851eb4},			/* 64.0000=f(-0.71000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe66666, 0x66666662},			/* 64.0000=f(-0.70000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe6147a, 0xe147ae10},			/* 64.0000=f(-0.69000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe5c28f, 0x5c28f5be},			/* 64.0000=f(-0.68000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe570a3, 0xd70a3d6c},			/* 64.0000=f(-0.67000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe51eb8, 0x51eb851a},			/* 64.0000=f(-0.66000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe4cccc, 0xccccccc8},			/* 64.0000=f(-0.65000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe47ae1, 0x47ae1476},			/* 64.0000=f(-0.64000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe428f5, 0xc28f5c24},			/* 64.0000=f(-0.63000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe3d70a, 0x3d70a3d2},			/* 64.0000=f(-0.62000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe3851e, 0xb851eb80},			/* 64.0000=f(-0.61000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe33333, 0x3333332e},			/* 64.0000=f(-0.60000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe2e147, 0xae147adc},			/* 64.0000=f(-0.59000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe28f5c, 0x28f5c28a},			/* 64.0000=f(-0.58000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe23d70, 0xa3d70a38},			/* 64.0000=f(-0.57000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe1eb85, 0x1eb851e6},			/* 64.0000=f(-0.56000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe19999, 0x99999994},			/* 64.0000=f(-0.55000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe147ae, 0x147ae142},			/* 64.0000=f(-0.54000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe0f5c2, 0x8f5c28f0},			/* 64.0000=f(-0.53000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe0a3d7, 0x0a3d709e},			/* 64.0000=f(-0.52000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfe051eb, 0x851eb84c},			/* 64.0000=f(-0.51000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfdfffff, 0xfffffff4},			/* 64.0000=f(-0.50000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfdf5c28, 0xf5c28f50},			/* 64.0000=f(-0.49000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfdeb851, 0xeb851eac},			/* 64.0000=f(-0.48000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfde147a, 0xe147ae08},			/* 64.0000=f(-0.47000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfdd70a3, 0xd70a3d64},			/* 64.0000=f(-0.46000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfdccccc, 0xccccccc0},			/* 64.0000=f(-0.45000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfdc28f5, 0xc28f5c1c},			/* 64.0000=f(-0.44000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfdb851e, 0xb851eb78},			/* 64.0000=f(-0.43000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfdae147, 0xae147ad4},			/* 64.0000=f(-0.42000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfda3d70, 0xa3d70a30},			/* 64.0000=f(-0.41000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfd99999, 0x9999998c},			/* 64.0000=f(-0.40000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfd8f5c2, 0x8f5c28e8},			/* 64.0000=f(-0.39000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfd851eb, 0x851eb844},			/* 64.0000=f(-0.38000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfd7ae14, 0x7ae147a0},			/* 64.0000=f(-0.37000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfd70a3d, 0x70a3d6fc},			/* 64.0000=f(-0.36000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfd66666, 0x66666658},			/* 64.0000=f(-0.35000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfd5c28f, 0x5c28f5b4},			/* 64.0000=f(-0.34000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfd51eb8, 0x51eb8510},			/* 64.0000=f(-0.33000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfd47ae1, 0x47ae146c},			/* 64.0000=f(-0.32000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfd3d70a, 0x3d70a3c8},			/* 64.0000=f(-0.31000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfd33333, 0x33333324},			/* 64.0000=f(-0.30000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfd28f5c, 0x28f5c280},			/* 64.0000=f(-0.29000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfd1eb85, 0x1eb851dc},			/* 64.0000=f(-0.28000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfd147ae, 0x147ae138},			/* 64.0000=f(-0.27000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfd0a3d7, 0x0a3d7094},			/* 64.0000=f(-0.26000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfcfffff, 0xffffffe0},			/* 64.0000=f(-0.25000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfceb851, 0xeb851e98},			/* 64.0000=f(-0.24000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfcd70a3, 0xd70a3d50},			/* 64.0000=f(-0.23000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfcc28f5, 0xc28f5c08},			/* 64.0000=f(-0.22000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfcae147, 0xae147ac0},			/* 64.0000=f(-0.21000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfc99999, 0x99999978},			/* 64.0000=f(-0.20000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfc851eb, 0x851eb830},			/* 64.0000=f(-0.19000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfc70a3d, 0x70a3d6e8},			/* 64.0000=f(-0.18000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfc5c28f, 0x5c28f5a0},			/* 64.0000=f(-0.17000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfc47ae1, 0x47ae1458},			/* 64.0000=f(-0.16000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfc33333, 0x33333310},			/* 64.0000=f(-0.15000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfc1eb85, 0x1eb851c8},			/* 64.0000=f(-0.14000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfc0a3d7, 0x0a3d7080},			/* 64.0000=f(-0.13000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfbeb851, 0xeb851e71},			/* 64.0000=f(-0.12000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfbc28f5, 0xc28f5be2},			/* 64.0000=f(-0.11000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfb99999, 0x99999953},			/* 64.0000=f(-0.00100)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfb70a3d, 0x70a3d6c4},			/* 64.0000=f(-0.09000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfb47ae1, 0x47ae1435},			/* 64.0000=f(-0.08000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfb1eb85, 0x1eb851a6},			/* 64.0000=f(-0.07000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfaeb851, 0xeb851e2d},			/* 64.0000=f(-0.06000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfa99999, 0x9999990e},			/* 64.0000=f(-0.05000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbfa47ae1, 0x47ae13ef},			/* 64.0000=f(-0.04000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbf9eb851, 0xeb851da0},			/* 64.0000=f(-0.03000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbf947ae1, 0x47ae1362},			/* 64.0000=f(-0.02000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbf847ae1, 0x47ae1249},			/* 64.0000=f(-0.00010)*/
{64, 0,123,__LINE__, 0xc03613fa, 0xd0072757, 0x3cd19000, 0x00000000},			/* -22.0780=f(9.74915e-16)*/
{64, 0,123,__LINE__, 0xc0080b2c, 0x5336d29e, 0x3f847ae1, 0x47ae16ad},			/* -3.00545=f(0.01000)*/
{64, 0,123,__LINE__, 0xc00482fb, 0x0dc4d2d8, 0x3f947ae1, 0x47ae1594},			/* -2.56395=f(0.02000)*/
{64, 0,123,__LINE__, 0xc00271a2, 0xcda61095, 0x3f9eb851, 0xeb851fd2},			/* -2.30548=f(0.03000)*/
{64, 0,123,__LINE__, 0xc000f9a7, 0x00acda15, 0x3fa47ae1, 0x47ae1508},			/* -2.12190=f(0.04000)*/
{64, 0,123,__LINE__, 0xbfffab42, 0x0311f75e, 0x3fa99999, 0x99999a27},			/* -1.97931=f(0.05000)*/
{64, 0,123,__LINE__, 0xbffdcd51, 0x596ca896, 0x3faeb851, 0xeb851f46},			/* -1.86262=f(0.06000)*/
{64, 0,123,__LINE__, 0xbffc3885, 0x010279bd, 0x3fb1eb85, 0x1eb85232},			/* -1.76379=f(0.07000)*/
{64, 0,123,__LINE__, 0xbffad931, 0x2cb8fd00, 0x3fb47ae1, 0x47ae14c1},			/* -1.67802=f(0.08000)*/
{64, 0,123,__LINE__, 0xbff9a2a6, 0xd440e8ee, 0x3fb70a3d, 0x70a3d750},			/* -1.60221=f(0.09000)*/
{64, 0,123,__LINE__, 0xbff88c3d, 0xd3fcf172, 0x3fb99999, 0x999999df},			/* -1.53423=f(0.10000)*/
{64, 0,123,__LINE__, 0xbff78fca, 0x39b900f4, 0x3fbc28f5, 0xc28f5c6e},			/* -1.47260=f(0.11000)*/
{64, 0,123,__LINE__, 0xbff6a8be, 0x0dfec480, 0x3fbeb851, 0xeb851efd},			/* -1.41619=f(0.12000)*/
{64, 0,123,__LINE__, 0xbff5d3a4, 0x60c3d140, 0x3fc0a3d7, 0x0a3d70c6},			/* -1.36417=f(0.13000)*/
{64, 0,123,__LINE__, 0xbff50dcd, 0xc13e44cf, 0x3fc1eb85, 0x1eb8520e},			/* -1.31587=f(0.14000)*/
{64, 0,123,__LINE__, 0xbff45519, 0x9a9aa235, 0x3fc33333, 0x33333356},			/* -1.27077=f(0.15000)*/
{64, 0,123,__LINE__, 0xbff3a7d1, 0x3d22b9d9, 0x3fc47ae1, 0x47ae149e},			/* -1.22847=f(0.16000)*/
{64, 0,123,__LINE__, 0xbff3048e, 0x21fbf0fd, 0x3fc5c28f, 0x5c28f5e6},			/* -1.18861=f(0.17000)*/
{64, 0,123,__LINE__, 0xbff26a27, 0x8d77c68f, 0x3fc70a3d, 0x70a3d72e},			/* -1.15091=f(0.18000)*/
{64, 0,123,__LINE__, 0xbff1d7a5, 0x2abcff8e, 0x3fc851eb, 0x851eb876},			/* -1.11514=f(0.19000)*/
{64, 0,123,__LINE__, 0xbff14c35, 0x1831ea87, 0x3fc99999, 0x999999be},			/* -1.08110=f(0.20000)*/
{64, 0,123,__LINE__, 0xbff0c724, 0x62650605, 0x3fcae147, 0xae147b06},			/* -1.04861=f(0.21000)*/
{64, 0,123,__LINE__, 0xbff047d9, 0x3f6f6495, 0x3fcc28f5, 0xc28f5c4e},			/* -1.01754=f(0.22000)*/
{64, 0,123,__LINE__, 0xbfef9b9d, 0x260f32c2, 0x3fcd70a3, 0xd70a3d96},			/* -0.98774=f(0.23000)*/
{64, 0,123,__LINE__, 0xbfeeb120, 0xce71adbb, 0x3fceb851, 0xeb851ede},			/* -0.95912=f(0.24000)*/
{64, 0,123,__LINE__, 0xbfedcf72, 0x3b7d21da, 0x3fd00000, 0x00000013},			/* -0.93157=f(0.25000)*/
{63, 0,123,__LINE__, 0xbfecf5de, 0x5d066c27, 0x3fd0a3d7, 0x0a3d70b7},			/* -0.90501=f(0.26000)*/
{64, 0,123,__LINE__, 0xbfec23c6, 0xa684d2d6, 0x3fd147ae, 0x147ae15b},			/* -0.87936=f(0.27000)*/
{64, 0,123,__LINE__, 0xbfeb589e, 0x10edc97e, 0x3fd1eb85, 0x1eb851ff},			/* -0.85456=f(0.28000)*/
{64, 0,123,__LINE__, 0xbfea93e6, 0xa3324d2a, 0x3fd28f5c, 0x28f5c2a3},			/* -0.83055=f(0.29000)*/
{61, 0,123,__LINE__, 0xbfe9d52f, 0x65f30ccc, 0x3fd33333, 0x33333347},			/* -0.80727=f(0.30000)*/
{64, 0,123,__LINE__, 0xbfe91c12, 0xad4d3d82, 0x3fd3d70a, 0x3d70a3eb},			/* -0.78467=f(0.31000)*/
{64, 0,123,__LINE__, 0xbfe86834, 0xa854a417, 0x3fd47ae1, 0x47ae148f},			/* -0.76272=f(0.32000)*/
{64, 0,123,__LINE__, 0xbfe7b942, 0x2959afbe, 0x3fd51eb8, 0x51eb8533},			/* -0.74136=f(0.33000)*/
{64, 0,123,__LINE__, 0xbfe70eef, 0x9ccc2e23, 0x3fd5c28f, 0x5c28f5d7},			/* -0.72057=f(0.34000)*/
{64, 0,123,__LINE__, 0xbfe668f8, 0x269cb97a, 0x3fd66666, 0x6666667b},			/* -0.70031=f(0.35000)*/
{64, 0,123,__LINE__, 0xbfe5c71c, 0xdf9924d4, 0x3fd70a3d, 0x70a3d71f},			/* -0.68055=f(0.36000)*/
{64, 0,123,__LINE__, 0xbfe52924, 0x2d8054ea, 0x3fd7ae14, 0x7ae147c3},			/* -0.66127=f(0.37000)*/
{64, 0,123,__LINE__, 0xbfe48ed9, 0x3185c09e, 0x3fd851eb, 0x851eb867},			/* -0.64243=f(0.38000)*/
{64, 0,123,__LINE__, 0xbfe3f80b, 0x49c44373, 0x3fd8f5c2, 0x8f5c290b},			/* -0.62402=f(0.39000)*/
{64, 0,123,__LINE__, 0xbfe3648d, 0xa2beeda8, 0x3fd99999, 0x999999af},			/* -0.60602=f(0.40000)*/
{64, 0,123,__LINE__, 0xbfe2d436, 0xd68e0fe9, 0x3fda3d70, 0xa3d70a53},			/* -0.58840=f(0.41000)*/
{63, 0,123,__LINE__, 0xbfe246e0, 0x97bdb58b, 0x3fdae147, 0xae147af7},			/* -0.57115=f(0.42000)*/
{63, 0,123,__LINE__, 0xbfe1bc67, 0x66365027, 0x3fdb851e, 0xb851eb9b},			/* -0.55424=f(0.43000)*/
{64, 0,123,__LINE__, 0xbfe134aa, 0x4ccc8542, 0x3fdc28f5, 0xc28f5c3f},			/* -0.53767=f(0.44000)*/
{63, 0,123,__LINE__, 0xbfe0af8a, 0xa64cf89e, 0x3fdccccc, 0xcccccce3},			/* -0.52142=f(0.45000)*/
{64, 0,123,__LINE__, 0xbfe02ceb, 0xe907006b, 0x3fdd70a3, 0xd70a3d87},			/* -0.50548=f(0.46000)*/
{61, 0,123,__LINE__, 0xbfdf5966, 0xeffea91b, 0x3fde147a, 0xe147ae2b},			/* -0.48983=f(0.47000)*/
{64, 0,123,__LINE__, 0xbfde5d90, 0xf2270065, 0x3fdeb851, 0xeb851ecf},			/* -0.47446=f(0.48000)*/
{64, 0,123,__LINE__, 0xbfdd6627, 0x5ee2acd4, 0x3fdf5c28, 0xf5c28f73},			/* -0.45935=f(0.49000)*/
{64, 0,123,__LINE__, 0xbfdc72fe, 0xb3b7b883, 0x3fe00000, 0x0000000b},			/* -0.44451=f(0.50000)*/
{61, 0,123,__LINE__, 0xbfdb83ee, 0x28938e2b, 0x3fe051eb, 0x851eb85d},			/* -0.42992=f(0.51000)*/
{64, 0,123,__LINE__, 0xbfda98cf, 0x78f2e6a7, 0x3fe0a3d7, 0x0a3d70af},			/* -0.41557=f(0.52000)*/
{64, 0,123,__LINE__, 0xbfd9b17e, 0xb2472a4b, 0x3fe0f5c2, 0x8f5c2901},			/* -0.40145=f(0.53000)*/
{63, 0,123,__LINE__, 0xbfd8cdda, 0x0702844f, 0x3fe147ae, 0x147ae153},			/* -0.38756=f(0.54000)*/
{64, 0,123,__LINE__, 0xbfd7edc1, 0xa5c749e1, 0x3fe19999, 0x999999a5},			/* -0.37388=f(0.55000)*/
{64, 0,123,__LINE__, 0xbfd71117, 0x9447ee75, 0x3fe1eb85, 0x1eb851f7},			/* -0.36041=f(0.56000)*/
{64, 0,123,__LINE__, 0xbfd637bf, 0x8d72fc1c, 0x3fe23d70, 0xa3d70a49},			/* -0.34715=f(0.57000)*/
{64, 0,123,__LINE__, 0xbfd5619e, 0xe292c8ed, 0x3fe28f5c, 0x28f5c29b},			/* -0.33408=f(0.58000)*/
{62, 0,123,__LINE__, 0xbfd48e9c, 0x5f133676, 0x3fe2e147, 0xae147aed},			/* -0.32120=f(0.59000)*/
{64, 0,123,__LINE__, 0xbfd3bea0, 0x2ea8f036, 0x3fe33333, 0x3333333f},			/* -0.30850=f(0.60000)*/
{64, 0,123,__LINE__, 0xbfd2f193, 0xc59d8f6f, 0x3fe3851e, 0xb851eb91},			/* -0.29599=f(0.61000)*/
{60, 0,123,__LINE__, 0xbfd22761, 0xcb0af398, 0x3fe3d70a, 0x3d70a3e3},			/* -0.28365=f(0.62000)*/
{64, 0,123,__LINE__, 0xbfd15ff6, 0x04d6244b, 0x3fe428f5, 0xc28f5c35},			/* -0.27148=f(0.63000)*/
{64, 0,123,__LINE__, 0xbfd09b3d, 0x453f55ca, 0x3fe47ae1, 0x47ae1487},			/* -0.25947=f(0.64000)*/
{63, 0,123,__LINE__, 0xbfcfb24a, 0xb3c2891b, 0x3fe4cccc, 0xccccccd9},			/* -0.24762=f(0.65000)*/
{60, 0,123,__LINE__, 0xbfce3339, 0xf7fc5219, 0x3fe51eb8, 0x51eb852b},			/* -0.23593=f(0.66000)*/
{64, 0,123,__LINE__, 0xbfccb927, 0x83f826c9, 0x3fe570a3, 0xd70a3d7d},			/* -0.22440=f(0.67000)*/
{61, 0,123,__LINE__, 0xbfcb43f4, 0x23eb43f4, 0x3fe5c28f, 0x5c28f5cf},			/* -0.21301=f(0.68000)*/
{64, 0,123,__LINE__, 0xbfc9d382, 0x2a8d95b6, 0x3fe6147a, 0xe147ae21},			/* -0.20176=f(0.69000)*/
{63, 0,123,__LINE__, 0xbfc867b5, 0x59ffc6db, 0x3fe66666, 0x66666673},			/* -0.19066=f(0.70000)*/
{56, 0,123,__LINE__, 0xbfc70072, 0xce567b80, 0x3fe6b851, 0xeb851ec5},			/* -0.17970=f(0.71000)*/
{63, 0,123,__LINE__, 0xbfc59da0, 0xe9a74147, 0x3fe70a3d, 0x70a3d717},			/* -0.16887=f(0.72000)*/
{63, 0,123,__LINE__, 0xbfc43f27, 0x41772e25, 0x3fe75c28, 0xf5c28f69},			/* -0.15817=f(0.73000)*/
{63, 0,123,__LINE__, 0xbfc2e4ee, 0x8d6e34f7, 0x3fe7ae14, 0x7ae147bb},			/* -0.14761=f(0.74000)*/
{63, 0,123,__LINE__, 0xbfc18ee0, 0x9734f206, 0x3fe80000, 0x0000000d},			/* -0.13717=f(0.75000)*/
{63, 0,123,__LINE__, 0xbfc03ce8, 0x2b6521ad, 0x3fe851eb, 0x851eb85f},			/* -0.12685=f(0.76000)*/
{61, 0,123,__LINE__, 0xbfbddde2, 0x16ee44c4, 0x3fe8a3d7, 0x0a3d70b1},			/* -0.11666=f(0.77000)*/
{63, 0,123,__LINE__, 0xbfbb49cf, 0xc131b14f, 0x3fe8f5c2, 0x8f5c2903},			/* -0.10659=f(0.78000)*/
{62, 0,123,__LINE__, 0xbfb8bd74, 0x5eb81ab8, 0x3fe947ae, 0x147ae155},			/* -0.09664=f(0.79000)*/
{61, 0,123,__LINE__, 0xbfb638ac, 0x9857e6d4, 0x3fe99999, 0x999999a7},			/* -0.08680=f(0.80000)*/
{60, 0,123,__LINE__, 0xbfb3bb56, 0xa0f5dce9, 0x3fe9eb85, 0x1eb851f9},			/* -0.07707=f(0.81000)*/
{59, 0,123,__LINE__, 0xbfb14552, 0x2135f8f0, 0x3fea3d70, 0xa3d70a4b},			/* -0.06746=f(0.82000)*/
{61, 0,123,__LINE__, 0xbfadad00, 0x48d1344d, 0x3fea8f5c, 0x28f5c29d},			/* -0.05796=f(0.83000)*/
{58, 0,123,__LINE__, 0xbfa8dd86, 0x0d3a74e4, 0x3feae147, 0xae147aef},			/* -0.04856=f(0.84000)*/
{61, 0,123,__LINE__, 0xbfa41bfc, 0xc78b837e, 0x3feb3333, 0x33333341},			/* -0.03927=f(0.85000)*/
{59, 0,123,__LINE__, 0xbf9ed05c, 0x1f5d00d4, 0x3feb851e, 0xb851eb93},			/* -0.03009=f(0.86000)*/
{57, 0,123,__LINE__, 0xbf9583cb, 0x7f59a6c6, 0x3febd70a, 0x3d70a3e5},			/* -0.02101=f(0.87000)*/
{57, 0,123,__LINE__, 0xbf88a3c7, 0x5dfcb6c0, 0x3fec28f5, 0xc28f5c37},			/* -0.01203=f(0.88000)*/
{55, 0,123,__LINE__, 0xbf69d226, 0x276b5330, 0x3fec7ae1, 0x47ae1489},			/* -0.00315=f(0.89000)*/
{57, 0,123,__LINE__, 0x3f770db5, 0x0ee194b8, 0x3feccccc, 0xccccccdb},			/* 0.00562=f(0.90000)*/
{59, 0,123,__LINE__, 0x3f8d4f15, 0x757ba360, 0x3fed1eb8, 0x51eb852d},			/* 0.01431=f(0.91000)*/
{60, 0,123,__LINE__, 0x3f977268, 0x67a99a82, 0x3fed70a3, 0xd70a3d7f},			/* 0.02289=f(0.92000)*/
{61, 0,123,__LINE__, 0x3fa0122b, 0xda106701, 0x3fedc28f, 0x5c28f5d1},			/* 0.03138=f(0.93000)*/
{57, 0,123,__LINE__, 0x3fa45ed3, 0x6a0180b8, 0x3fee147a, 0xe147ae23},			/* 0.03978=f(0.94000)*/
{60, 0,123,__LINE__, 0x3fa89f50, 0x75b2c684, 0x3fee6666, 0x66666675},			/* 0.04809=f(0.95000)*/
{60, 0,123,__LINE__, 0x3facd3c7, 0x19481690, 0x3feeb851, 0xeb851ec7},			/* 0.05630=f(0.96000)*/
{62, 0,123,__LINE__, 0x3fb07e2d, 0x0606b9d8, 0x3fef0a3d, 0x70a3d719},			/* 0.06442=f(0.97000)*/
{61, 0,123,__LINE__, 0x3fb28c95, 0x5852b1f3, 0x3fef5c28, 0xf5c28f6b},			/* 0.07245=f(0.98000)*/
{61, 0,123,__LINE__, 0x3fb4952c, 0x92323b12, 0x3fefae14, 0x7ae147bd},			/* 0.08040=f(0.99000)*/
{60, 0,123,__LINE__, 0x3fb69802, 0x26f35936, 0x3ff00000, 0x00000007},			/* 0.08825=f(1.00000)*/
{61, 0,123,__LINE__, 0x3fb89524, 0xf5756983, 0x3ff028f5, 0xc28f5c30},			/* 0.09602=f(1.01000)*/
{61, 0,123,__LINE__, 0x3fba8ca3, 0x4ebf2953, 0x3ff051eb, 0x851eb859},			/* 0.10370=f(1.02000)*/
{55, 0,123,__LINE__, 0x3fbc7e8a, 0xfc424cfc, 0x3ff07ae1, 0x47ae1482},			/* 0.11130=f(1.03000)*/
{60, 0,123,__LINE__, 0x3fbe6ae9, 0x45d171b7, 0x3ff0a3d7, 0x0a3d70ab},			/* 0.11881=f(1.04000)*/
{60, 0,123,__LINE__, 0x3fc028e5, 0x7ba671d5, 0x3ff0cccc, 0xccccccd4},			/* 0.12624=f(1.05000)*/
{62, 0,123,__LINE__, 0x3fc1199e, 0x33053259, 0x3ff0f5c2, 0x8f5c28fd},			/* 0.13359=f(1.06000)*/
{55, 0,123,__LINE__, 0x3fc207a4, 0xbafdecfe, 0x3ff11eb8, 0x51eb8526},			/* 0.14085=f(1.07000)*/
{61, 0,123,__LINE__, 0x3fc2f2fe, 0xcf4c4293, 0x3ff147ae, 0x147ae14f},			/* 0.14804=f(1.08000)*/
{61, 0,123,__LINE__, 0x3fc3dbb1, 0xf7c61890, 0x3ff170a3, 0xd70a3d78},			/* 0.15514=f(1.09000)*/
{62, 0,123,__LINE__, 0x3fc4c1c3, 0x8a97c191, 0x3ff19999, 0x999999a1},			/* 0.16216=f(1.10000)*/
{61, 0,123,__LINE__, 0x3fc5a538, 0xae6635da, 0x3ff1c28f, 0x5c28f5ca},			/* 0.16910=f(1.11000)*/
{62, 0,123,__LINE__, 0x3fc68616, 0x5c58c204, 0x3ff1eb85, 0x1eb851f3},			/* 0.17596=f(1.12000)*/
{62, 0,123,__LINE__, 0x3fc76461, 0x620b7b60, 0x3ff2147a, 0xe147ae1c},			/* 0.18275=f(1.13000)*/
{60, 0,123,__LINE__, 0x3fc8401e, 0x636bb4c6, 0x3ff23d70, 0xa3d70a45},			/* 0.18945=f(1.14000)*/
{61, 0,123,__LINE__, 0x3fc91951, 0xdc7f9b60, 0x3ff26666, 0x6666666e},			/* 0.19608=f(1.15000)*/
{59, 0,123,__LINE__, 0x3fc9f000, 0x231a10ce, 0x3ff28f5c, 0x28f5c297},			/* 0.20263=f(1.16000)*/
{60, 0,123,__LINE__, 0x3fcac42d, 0x687bc737, 0x3ff2b851, 0xeb851ec0},			/* 0.20911=f(1.17000)*/
{61, 0,123,__LINE__, 0x3fcb95dd, 0xbae29481, 0x3ff2e147, 0xae147ae9},			/* 0.21551=f(1.18000)*/
{61, 0,123,__LINE__, 0x3fcc6515, 0x0707e2ea, 0x3ff30a3d, 0x70a3d712},			/* 0.22183=f(1.19000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xc01921fb, 0x54442d18},			/* 64.0000=f(-6.28318)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xc012d97c, 0x7f3321d2},			/* 64.0000=f(-4.71238)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xc00921fb, 0x54442d18},			/* 64.0000=f(-3.14159)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbff921fb, 0x54442d18},			/* 64.0000=f(-1.57079)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0x00000000, 0x00000000},			/* 64.0000=f(0.00000)*/
{57, 0,123,__LINE__, 0x3fda3d7f, 0xedadd03e, 0x3ff921fb, 0x54442d18},			/* 0.41000=f(1.57079)*/
{59, 0,123,__LINE__, 0x3fd503f4, 0x1f0be448, 0x400921fb, 0x54442d18},			/* 0.32836=f(3.14159)*/
{57, 0,123,__LINE__, 0xbfd02737, 0x6bc5f94c, 0x4012d97c, 0x7f3321d2},			/* -0.25239=f(4.71238)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xc03e0000, 0x00000000},			/* 64.0000=f(-30.0000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xc03c4ccc, 0xcccccccd},			/* 64.0000=f(-28.3000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xc03a9999, 0x9999999a},			/* 64.0000=f(-26.6000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xc038e666, 0x66666667},			/* 64.0000=f(-24.9000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xc0373333, 0x33333334},			/* 64.0000=f(-23.2000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xc0358000, 0x00000001},			/* 64.0000=f(-21.5000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xc033cccc, 0xccccccce},			/* 64.0000=f(-19.8000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xc0321999, 0x9999999b},			/* 64.0000=f(-18.1000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xc0306666, 0x66666668},			/* 64.0000=f(-16.4000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xc02d6666, 0x6666666a},			/* 64.0000=f(-14.7000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xc02a0000, 0x00000004},			/* 64.0000=f(-13.0000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xc0269999, 0x9999999e},			/* 64.0000=f(-11.3000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xc0233333, 0x33333338},			/* 64.0000=f(-9.60000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xc01f9999, 0x999999a3},			/* 64.0000=f(-7.90000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xc018cccc, 0xccccccd6},			/* 64.0000=f(-6.20000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xc0120000, 0x00000009},			/* 64.0000=f(-4.50000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xc0066666, 0x66666678},			/* 64.0000=f(-2.80000)*/
{64,13, 37,__LINE__, 0x40500000, 0x00000000, 0xbff19999, 0x999999bd},			/* 64.0000=f(-1.10000)*/
{64, 0,123,__LINE__, 0xbfd3bea0, 0x2ea8f107, 0x3fe33333, 0x333332ec},			/* -0.30850=f(0.60000)*/
{62, 0,123,__LINE__, 0x3fe09412, 0xda725e0d, 0x40026666, 0x66666654},			/* 0.51807=f(2.30000)*/
{53, 0,123,__LINE__, 0xbf9158e9, 0xc57c1cb0, 0x400fffff, 0xffffffee},			/* -0.01694=f(4.00000)*/
{56, 0,123,__LINE__, 0xbfd50086, 0xceea16be, 0x4016cccc, 0xccccccc4},			/* -0.32815=f(5.70000)*/
{52, 0,123,__LINE__, 0x3fb736dc, 0xb6bee4f8, 0x401d9999, 0x99999991},			/* 0.09068=f(7.40000)*/
{58, 0,123,__LINE__, 0x3fce81cb, 0x35aa7ce0, 0x40223333, 0x3333332f},			/* 0.23833=f(9.10000)*/
{63, 0,123,__LINE__, 0xbfc0fa4b, 0x699333e5, 0x40259999, 0x99999995},			/* -0.13263=f(10.8000)*/
{62, 0,123,__LINE__, 0xbfc5ea59, 0xb440a95d, 0x4028ffff, 0xfffffffb},			/* -0.17121=f(12.5000)*/
{64, 0,123,__LINE__, 0x3fc42a56, 0xd5029d97, 0x402c6666, 0x66666661},			/* 0.15754=f(14.2000)*/
{62, 0,123,__LINE__, 0x3fbcf7b9, 0x4cdab6a4, 0x402fcccc, 0xccccccc7},			/* 0.11315=f(15.9000)*/
{64, 0,123,__LINE__, 0xbfc5afb0, 0xfa559fa9, 0x40319999, 0x99999997},			/* -0.16942=f(17.6000)*/
{63, 0,123,__LINE__, 0xbfaf2149, 0x60705433, 0x40334ccc, 0xccccccca},			/* -0.06080=f(19.3000)*/
{64, 0,123,__LINE__, 0x3fc5c92b, 0xd5128a73, 0x4034ffff, 0xfffffffd},			/* 0.17020=f(21.0000)*/
{64, 0,123,__LINE__, 0x3f8c1ae3, 0xf0289190, 0x4036b333, 0x33333330},			/* 0.01372=f(22.7000)*/
{62, 0,123,__LINE__, 0xbfc4a662, 0x4701d3a0, 0x40386666, 0x66666663},			/* -0.16132=f(24.4000)*/
{64, 0,123,__LINE__, 0x3f9c2b29, 0x4eeab90c, 0x403a1999, 0x99999996},			/* 0.02750=f(26.1000)*/
{64, 0,123,__LINE__, 0x3fc2771c, 0x9fef6e9f, 0x403bcccc, 0xccccccc9},			/* 0.14426=f(27.8000)*/
{64, 0,123,__LINE__, 0xbfafc3a0, 0x56b6c32f, 0x403d7fff, 0xfffffffc},			/* -0.06203=f(29.5000)*/
0,};
test_y0(m)   {run_vector_1(m,y0_vec,(char *)(y0),"y0","dd");   }	
