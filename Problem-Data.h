/*==============================================================================
Project: VaLiPro
Theme: LPP Generator
Module: Problem-Data.h (Problem Data)
Prefix: PD
Author: Leonid B. Sokolinsky
==============================================================================*/
#include "Problem-Types.h"			// Problem Parameters 
using namespace std;

static PT_unsigned_T PP_NUMBER_OF_PROBLEMS;
static PT_unsigned_T PP_OUTPUT_LIMIT;
static PT_unsigned_T PP_SETW;

static PT_float_T PP_ALPHA;								// Length of hypercube edge
static PT_float_T PP_THETA;								// Radius of large hypersphere
static PT_float_T PP_RHO;								// Radius of small hypersphere
static PT_float_T PP_A_MAX;								// Maximal random value for A
static PT_float_T PP_B_MAX;								// Maximal random value for b
static PT_float_T PP_MAX_LIKE;							// Maximal acceptable likeness of equations (must be less then 0.7)
static PT_float_T PP_MIN_SHIFT;							// Minimal acceptable shift

//========================== Problem variables ====================================
static PT_float_T PD_centerObjectF;	// Value of object function in the center of hypercube
static unsigned PD_failuresType1 = 0;
static unsigned PD_failuresType2 = 0;
static unsigned PD_failuresType3 = 0;
static int PD_k;	// Index of current random inequality
static PT_unsigned_T PD_index = 0;			// Index of current LPP in dataset

//========================== Problem data structures ==============================
static PT_matrix_T PD_A;
static PT_column_T PD_b;
static PT_vector_T PD_c;
static PT_vector_T PD_center;		// Center of hypercube
static PT_column_T PD_aNorm;
PT_dataset_T* PD_dataset = new PT_dataset_T[PP_PROBLEMS_LIMIT];		// Many LPPs in one dataset
vector<PT_MTXrow_T> PD_MTXdataset (0);

//========================== Files ==============================
static string PD_fileName;
