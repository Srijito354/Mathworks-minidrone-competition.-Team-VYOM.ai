/* Include files */

#include "flightControlSystem_sfun.h"
#include "c4_flightControlSystem.h"
#include <math.h>
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c4_emlrtMCI = { 13, /* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtMCInfo c4_b_emlrtMCI = { 87,/* lineNo */
  33,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c4_c_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo c4_d_emlrtMCI = { 13,/* lineNo */
  37,                                  /* colNo */
  "validateinteger",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validateinteger.m"/* pName */
};

static emlrtMCInfo c4_e_emlrtMCI = { 454,/* lineNo */
  5,                                   /* colNo */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pName */
};

static emlrtMCInfo c4_f_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatepositive",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatepositive.m"/* pName */
};

static emlrtMCInfo c4_g_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validateodd",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validateodd.m"/* pName */
};

static emlrtMCInfo c4_h_emlrtMCI = { 474,/* lineNo */
  1,                                   /* colNo */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pName */
};

static emlrtMCInfo c4_i_emlrtMCI = { 21,/* lineNo */
  15,                                  /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\ind2sub.m"/* pName */
};

static emlrtRSInfo c4_emlrtRSI = { 4,  /* lineNo */
  "Image Processing System/MATLAB Function1",/* fcnName */
  "#flightControlSystem:2762"          /* pathName */
};

static emlrtRSInfo c4_b_emlrtRSI = { 8,/* lineNo */
  "Image Processing System/MATLAB Function1",/* fcnName */
  "#flightControlSystem:2762"          /* pathName */
};

static emlrtRSInfo c4_c_emlrtRSI = { 9,/* lineNo */
  "Image Processing System/MATLAB Function1",/* fcnName */
  "#flightControlSystem:2762"          /* pathName */
};

static emlrtRSInfo c4_d_emlrtRSI = { 119,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_e_emlrtRSI = { 135,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_f_emlrtRSI = { 141,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_g_emlrtRSI = { 745,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_h_emlrtRSI = { 746,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_i_emlrtRSI = { 751,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_j_emlrtRSI = { 752,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_k_emlrtRSI = { 109,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c4_l_emlrtRSI = { 121,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c4_m_emlrtRSI = { 877,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c4_n_emlrtRSI = { 950,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c4_o_emlrtRSI = { 1021,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c4_p_emlrtRSI = { 1049,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c4_q_emlrtRSI = { 1061,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c4_r_emlrtRSI = { 761,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_s_emlrtRSI = { 133,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c4_t_emlrtRSI = { 170,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c4_u_emlrtRSI = { 456,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c4_v_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c4_w_emlrtRSI = { 801,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_x_emlrtRSI = { 807,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_y_emlrtRSI = { 911,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_ab_emlrtRSI = { 80,/* lineNo */
  "imreconstruct",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imreconstruct.m"/* pathName */
};

static emlrtRSInfo c4_bb_emlrtRSI = { 60,/* lineNo */
  "hough",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\hough.m"/* pathName */
};

static emlrtRSInfo c4_cb_emlrtRSI = { 290,/* lineNo */
  "hough",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\hough.m"/* pathName */
};

static emlrtRSInfo c4_db_emlrtRSI = { 111,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_eb_emlrtRSI = { 61,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_fb_emlrtRSI = { 274,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_gb_emlrtRSI = { 321,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_hb_emlrtRSI = { 324,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_ib_emlrtRSI = { 93,/* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo c4_jb_emlrtRSI = { 439,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_kb_emlrtRSI = { 474,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_lb_emlrtRSI = { 463,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_mb_emlrtRSI = { 19,/* lineNo */
  "ind2sub",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pathName */
};

static emlrtRTEInfo c4_emlrtRTEI = { 12,/* lineNo */
  5,                                   /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#flightControlSystem:2762"          /* pName */
};

static emlrtRTEInfo c4_b_emlrtRTEI = { 776,/* lineNo */
  9,                                   /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c4_c_emlrtRTEI = { 777,/* lineNo */
  37,                                  /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c4_d_emlrtRTEI = { 76,/* lineNo */
  9,                                   /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo c4_e_emlrtRTEI = { 777,/* lineNo */
  9,                                   /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c4_f_emlrtRTEI = { 773,/* lineNo */
  9,                                   /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c4_g_emlrtRTEI = { 774,/* lineNo */
  9,                                   /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c4_h_emlrtRTEI = { 191,/* lineNo */
  5,                                   /* colNo */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pName */
};

static emlrtRTEInfo c4_i_emlrtRTEI = { 187,/* lineNo */
  5,                                   /* colNo */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pName */
};

static emlrtRTEInfo c4_j_emlrtRTEI = { 13,/* lineNo */
  13,                                  /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#flightControlSystem:2762"          /* pName */
};

static emlrtDCInfo c4_emlrtDCI = { 27, /* lineNo */
  25,                                  /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#flightControlSystem:2762",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  25,                                  /* colNo */
  "circles",                           /* aName */
  "Image Processing System/MATLAB Function1",/* fName */
  "#flightControlSystem:2762",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_b_emlrtBCI = { 1,/* iFirst */
  137,                                 /* iLast */
  301,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "hough",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\hough.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c4_c_emlrtBCI = { 1,/* iFirst */
  48,                                  /* iLast */
  348,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "hough",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\hough.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c4_b_emlrtDCI = { 12,/* lineNo */
  21,                                  /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#flightControlSystem:2762",         /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c4_c_emlrtDCI = { 12,/* lineNo */
  21,                                  /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#flightControlSystem:2762",         /* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo c4_d_emlrtDCI = { 12,/* lineNo */
  5,                                   /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#flightControlSystem:2762",         /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c4_e_emlrtDCI = { 12,/* lineNo */
  5,                                   /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#flightControlSystem:2762",         /* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c4_d_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  23,                                  /* colNo */
  "peaks",                             /* aName */
  "Image Processing System/MATLAB Function1",/* fName */
  "#flightControlSystem:2762",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_f_emlrtDCI = { 24,/* lineNo */
  23,                                  /* colNo */
  "Image Processing System/MATLAB Function1",/* fName */
  "#flightControlSystem:2762",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_e_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  26,                                  /* colNo */
  "peaks",                             /* aName */
  "Image Processing System/MATLAB Function1",/* fName */
  "#flightControlSystem:2762",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_f_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  144,                                 /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_g_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  145,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_h_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  801,                                 /* lineNo */
  70,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_i_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  806,                                 /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_j_emlrtBCI = { 1,/* iFirst */
  48,                                  /* iLast */
  156,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_k_emlrtBCI = { 1,/* iFirst */
  50,                                  /* iLast */
  156,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_l_emlrtBCI = { 1,/* iFirst */
  10,                                  /* iLast */
  122,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\houghpeaks.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c4_m_emlrtBCI = { 1,/* iFirst */
  137,                                 /* iLast */
  119,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\houghpeaks.m",/* pName */
  0                                    /* checkKind */
};

/* Function Declarations */
static void initialize_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void initialize_params_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void mdl_start_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void mdl_terminate_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void enable_c4_flightControlSystem(SFc4_flightControlSystemInstanceStruct
  *chartInstance);
static void disable_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void sf_gateway_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void ext_mode_exec_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void c4_update_jit_animation_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void c4_do_animation_call_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void set_sim_state_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance, const mxArray *c4_st);
static void c4_edge(SFc4_flightControlSystemInstanceStruct *chartInstance, const
                    emlrtStack *c4_sp, boolean_T c4_b_varargin_1[2400],
                    boolean_T c4_varargout_1[2400]);
static void c4_warning(SFc4_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c4_sp);
static void c4_houghpeaks(SFc4_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, real_T c4_b_varargin_1[24660], real_T c4_peaks_data[],
  int32_T c4_peaks_size[2]);
static real_T c4_sumColumnB(SFc4_flightControlSystemInstanceStruct
  *chartInstance, real_T c4_x[178]);
static real_T c4_emlrt_marshallIn(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_nullptr, const char_T *c4_identifier);
static real_T c4_b_emlrt_marshallIn(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_c_emlrt_marshallIn(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_nullptr, const char_T *c4_identifier, real_T
  c4_y[2]);
static void c4_d_emlrt_marshallIn(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  real_T c4_y[2]);
static void c4_slStringInitializeDynamicBuffers
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void c4_chart_data_browse_helper(SFc4_flightControlSystemInstanceStruct
  *chartInstance, int32_T c4_ssIdNumber, const mxArray **c4_mxData, uint8_T
  *c4_isValueTooBig);
static const mxArray *c4_feval(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, const mxArray *c4_input0, const
  mxArray *c4_input1);
static void c4_b_feval(SFc4_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1);
static void init_dsm_address_info(SFc4_flightControlSystemInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc4_flightControlSystemInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  emlrtStack c4_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c4_st.tls = chartInstance->c4_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c4_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c4_doneDoubleBufferReInit = false;
  chartInstance->c4_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void initialize_params_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  static const uint32_T c4_decisionTxtEndIdx = 0U;
  static const uint32_T c4_decisionTxtStartIdx = 0U;
  setDataBrowseFcn(chartInstance->S, (void *)&c4_chart_data_browse_helper);
  chartInstance->c4_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c4_RuntimeVar,
    &chartInstance->c4_IsDebuggerActive,
    &chartInstance->c4_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c4_mlFcnLineNumber, &chartInstance->c4_IsHeatMapPresent, 0);
  sfSetAnimationVectors(chartInstance->S, &chartInstance->c4_JITStateAnimation[0],
                        &chartInstance->c4_JITTransitionAnimation[0]);
  covrtCreateStateflowInstanceData(chartInstance->c4_covrtInstance, 1U, 0U, 1U,
    134U);
  covrtChartInitFcn(chartInstance->c4_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c4_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c4_decisionTxtStartIdx, &c4_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c4_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c4_covrtInstance, "", 4U, 0U, 1U, 0U, 2U, 0U,
                  0U, 0U, 1U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U,
                     "c4_flightControlSystem", 0, -1, 1046);
  covrtEmlIfInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U, 764, 770, -1,
                    829, false);
  covrtEmlIfInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 1U, 950, 971, 1003,
                    1042, false);
  covrtEmlForInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U, 355, 379, 837);
  covrtEmlRelationalInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U, 767,
    770, -1, 4U);
}

static void mdl_cleanup_runtime_resources_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c4_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c4_covrtInstance);
}

static void enable_c4_flightControlSystem(SFc4_flightControlSystemInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T c4_cost[180];
  real_T c4_sint[180];
  real_T c4_tempBin[48];
  real_T c4_peaks_data[20];
  real_T c4_b_isCirclePresent;
  real_T c4_b_j;
  real_T c4_b_k;
  real_T c4_b_x;
  real_T c4_c_x;
  real_T c4_d;
  real_T c4_d1;
  real_T c4_d2;
  real_T c4_d3;
  real_T c4_d4;
  real_T c4_d5;
  real_T c4_d6;
  real_T c4_d7;
  real_T c4_d_j;
  real_T c4_d_x;
  real_T c4_e_i;
  real_T c4_e_x;
  real_T c4_h_i;
  real_T c4_myRho;
  real_T c4_r;
  real_T c4_roundFloatVar;
  real_T c4_tempNum;
  real_T c4_x;
  int32_T c4_nonZeroPixelMatrix[2400];
  int32_T c4_rhoIdxVector[137];
  int32_T c4_numNonZeros[50];
  int32_T c4_circles_size[2];
  int32_T c4_peaks_size[2];
  int32_T c4_a;
  int32_T c4_b_i;
  int32_T c4_b_thetaIdx;
  int32_T c4_c;
  int32_T c4_c_i;
  int32_T c4_c_j;
  int32_T c4_c_k;
  int32_T c4_d_i;
  int32_T c4_d_k;
  int32_T c4_f_i;
  int32_T c4_fixedVar;
  int32_T c4_g_i;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_j;
  int32_T c4_k;
  int32_T c4_n;
  int32_T c4_rhoIdx;
  int32_T c4_thetaIdx;
  int32_T c4_y;
  boolean_T c4_bv[2400];
  boolean_T c4_edges[2400];
  boolean_T c4_f_x[2];
  boolean_T c4_b_y;
  boolean_T c4_exitg1;
  c4_st.tls = chartInstance->c4_fEmlrtCtx;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  for (c4_i = 0; c4_i < 2400; c4_i++) {
    covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 0U, (real_T)
                      (*chartInstance->c4_img)[c4_i]);
  }

  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c4_JITTransitionAnimation[0] = 0U;
  chartInstance->c4_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c4_covrtInstance, 4U, 0, 0);
  c4_b_st.site = &c4_emlrtRSI;
  for (c4_i1 = 0; c4_i1 < 2400; c4_i1++) {
    c4_bv[c4_i1] = (*chartInstance->c4_img)[c4_i1];
  }

  c4_edge(chartInstance, &c4_b_st, c4_bv, c4_edges);
  c4_b_st.site = &c4_b_emlrtRSI;
  c4_c_st.site = &c4_bb_emlrtRSI;
  for (c4_b_i = 0; c4_b_i < 180; c4_b_i++) {
    c4_c_i = c4_b_i;
    c4_x = (-90.0 + (real_T)c4_c_i) * 3.1415926535897931 / 180.0;
    c4_b_x = c4_x;
    c4_b_x = muDoubleScalarCos(c4_b_x);
    c4_cost[c4_c_i] = c4_b_x;
    c4_c_x = (-90.0 + (real_T)c4_c_i) * 3.1415926535897931 / 180.0;
    c4_d_x = c4_c_x;
    c4_d_x = muDoubleScalarSin(c4_d_x);
    c4_sint[c4_c_i] = c4_d_x;
  }

  c4_d_st.site = &c4_cb_emlrtRSI;
  for (c4_j = 0; c4_j < 50; c4_j++) {
    c4_b_j = (real_T)c4_j + 1.0;
    c4_tempNum = 0.0;
    for (c4_d_i = 0; c4_d_i < 48; c4_d_i++) {
      c4_e_i = (real_T)c4_d_i + 1.0;
      if (c4_edges[((int32_T)c4_e_i + 48 * ((int32_T)c4_b_j - 1)) - 1]) {
        c4_tempNum++;
        c4_i4 = (int32_T)c4_tempNum;
        if ((c4_i4 < 1) || (c4_i4 > 48)) {
          emlrtDynamicBoundsCheckR2012b(c4_i4, 1, 48, &c4_c_emlrtBCI, &c4_d_st);
        }

        c4_tempBin[c4_i4 - 1] = c4_e_i;
      }
    }

    c4_numNonZeros[(int32_T)c4_b_j - 1] = (int32_T)c4_tempNum;
    c4_k = 0;
    c4_exitg1 = false;
    while ((!c4_exitg1) && (c4_k < 48)) {
      c4_b_k = (real_T)c4_k + 1.0;
      if (c4_b_k > c4_tempNum) {
        c4_exitg1 = true;
      } else {
        c4_nonZeroPixelMatrix[((int32_T)c4_b_k + 48 * ((int32_T)c4_b_j - 1)) - 1]
          = (int32_T)c4_tempBin[(int32_T)c4_b_k - 1];
        c4_k++;
      }
    }
  }

  for (c4_thetaIdx = 0; c4_thetaIdx < 180; c4_thetaIdx++) {
    c4_b_thetaIdx = c4_thetaIdx;
    for (c4_i2 = 0; c4_i2 < 137; c4_i2++) {
      c4_rhoIdxVector[c4_i2] = 0;
    }

    for (c4_c_j = 0; c4_c_j < 50; c4_c_j++) {
      c4_d_j = (real_T)c4_c_j + 1.0;
      c4_i5 = c4_numNonZeros[(int32_T)c4_d_j - 1];
      c4_i6 = (uint8_T)c4_i5 - 1;
      for (c4_f_i = 0; c4_f_i <= c4_i6; c4_f_i++) {
        c4_c_i = c4_f_i;
        c4_n = c4_nonZeroPixelMatrix[c4_c_i + 48 * ((int32_T)c4_d_j - 1)];
        c4_myRho = (c4_d_j - 1.0) * c4_cost[c4_b_thetaIdx] + ((real_T)c4_n - 1.0)
          * c4_sint[c4_b_thetaIdx];
        c4_e_x = c4_myRho - -68.0;
        c4_y = (int32_T)(c4_e_x + 0.5) + 1;
        c4_rhoIdx = c4_y;
        c4_a = c4_rhoIdxVector[c4_rhoIdx - 1] + 1;
        c4_c = c4_a;
        if ((c4_rhoIdx < 1) || (c4_rhoIdx > 137)) {
          emlrtDynamicBoundsCheckR2012b(c4_rhoIdx, 1, 137, &c4_b_emlrtBCI,
            &c4_c_st);
        }

        c4_rhoIdxVector[c4_rhoIdx - 1] = c4_c;
      }
    }

    for (c4_i3 = 0; c4_i3 < 137; c4_i3++) {
      chartInstance->c4_H[c4_i3 + 137 * c4_b_thetaIdx] = (real_T)
        c4_rhoIdxVector[c4_i3];
    }
  }

  c4_b_st.site = &c4_c_emlrtRSI;
  c4_houghpeaks(chartInstance, &c4_b_st, chartInstance->c4_H, c4_peaks_data,
                c4_peaks_size);
  c4_d = (real_T)c4_peaks_size[0];
  if (!(c4_d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(c4_d, &c4_c_emlrtDCI, &c4_st);
  }

  c4_d1 = c4_d;
  if (c4_d1 != (real_T)(int32_T)muDoubleScalarFloor(c4_d1)) {
    emlrtIntegerCheckR2012b(c4_d1, &c4_b_emlrtDCI, &c4_st);
  }

  c4_d2 = trunc(c4_d1);
  if (muDoubleScalarIsNaN(c4_d2) || muDoubleScalarIsInf(c4_d2)) {
    c4_d3 = 0.0;
  } else {
    c4_d3 = muDoubleScalarRem(c4_d2, 4.294967296E+9);
  }

  c4_roundFloatVar = trunc(c4_d1);
  if (c4_d3 < 0.0) {
    c4_fixedVar = -(int32_T)(uint32_T)-c4_d3;
  } else {
    c4_fixedVar = (int32_T)(uint32_T)c4_d3;
  }

  if (c4_roundFloatVar < 0.0) {
    c4_d4 = muDoubleScalarCeil(c4_roundFloatVar);
  } else {
    c4_d4 = muDoubleScalarFloor(c4_roundFloatVar);
  }

  if ((real_T)c4_fixedVar != c4_d4) {
    sf_data_overflow_error(chartInstance->S, 1U, 331, 14);
  }

  c4_i7 = c4_fixedVar;
  c4_circles_size[0] = c4_i7;
  c4_circles_size[1] = 3;
  c4_d5 = (real_T)c4_peaks_size[0];
  if (!(c4_d5 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(c4_d5, &c4_e_emlrtDCI, &c4_st);
  }

  c4_d6 = c4_d5;
  if (c4_d6 != (real_T)(int32_T)muDoubleScalarFloor(c4_d6)) {
    emlrtIntegerCheckR2012b(c4_d6, &c4_d_emlrtDCI, &c4_st);
  }

  c4_d7 = (real_T)c4_peaks_size[0];
  c4_i8 = (int32_T)c4_d7;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, c4_d7, mxDOUBLE_CLASS, c4_i8,
    &c4_j_emlrtRTEI, &c4_st);
  for (c4_g_i = 0; c4_g_i < c4_i8; c4_g_i++) {
    c4_h_i = 1.0 + (real_T)c4_g_i;
    covrtEmlForEval(chartInstance->c4_covrtInstance, 4U, 0, 0, 1);
    if (c4_h_i != (real_T)(int32_T)muDoubleScalarFloor(c4_h_i)) {
      emlrtIntegerCheckR2012b(c4_h_i, &c4_f_emlrtDCI, &c4_st);
    }

    c4_i11 = (int32_T)c4_h_i;
    if ((c4_i11 < 1) || (c4_i11 > c4_peaks_size[0])) {
      emlrtDynamicBoundsCheckR2012b(c4_i11, 1, c4_peaks_size[0], &c4_d_emlrtBCI,
        &c4_st);
    }

    c4_i12 = 1;
    if ((c4_i12 < 1) || (c4_i12 > c4_peaks_size[1])) {
      emlrtDynamicBoundsCheckR2012b(c4_i12, 1, c4_peaks_size[1], &c4_e_emlrtBCI,
        &c4_st);
    }

    c4_r = c4_peaks_data[(c4_i11 + c4_peaks_size[0] * (c4_i12 - 1)) - 1];
    if (covrtEmlIfEval(chartInstance->c4_covrtInstance, 4U, 0, 0,
                       covrtRelationalopUpdateFcn
                       (chartInstance->c4_covrtInstance, 4U, 0U, 0U, c4_r, 0.0,
                        -1, 4U, c4_r > 0.0))) {
      if (c4_h_i != (real_T)(int32_T)muDoubleScalarFloor(c4_h_i)) {
        emlrtIntegerCheckR2012b(c4_h_i, &c4_emlrtDCI, &c4_st);
      }

      c4_i14 = (int32_T)c4_h_i;
      if ((c4_i14 < 1) || (c4_i14 > c4_circles_size[0])) {
        emlrtDynamicBoundsCheckR2012b(c4_i14, 1, c4_circles_size[0],
          &c4_emlrtBCI, &c4_st);
      }
    }

    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c4_covrtInstance, 4U, 0, 0, 0);
  for (c4_i9 = 0; c4_i9 < 2; c4_i9++) {
    (*chartInstance->c4_len)[c4_i9] = (real_T)c4_circles_size[c4_i9];
  }

  for (c4_i10 = 0; c4_i10 < 2; c4_i10++) {
    c4_f_x[c4_i10] = ((real_T)c4_circles_size[c4_i10] >= 1.0);
  }

  c4_b_y = true;
  c4_c_k = 1;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_c_k - 1 < 2)) {
    c4_d_k = c4_c_k - 1;
    if (!c4_f_x[c4_d_k]) {
      c4_b_y = false;
      c4_exitg1 = true;
    } else {
      c4_c_k++;
    }
  }

  if (covrtEmlIfEval(chartInstance->c4_covrtInstance, 4U, 0, 1, c4_b_y)) {
    c4_b_isCirclePresent = 1.0;
  } else {
    c4_b_isCirclePresent = 0.0;
  }

  *chartInstance->c4_isCirclePresent = c4_b_isCirclePresent;
  for (c4_i13 = 0; c4_i13 < 2; c4_i13++) {
    covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 1U,
                      (*chartInstance->c4_len)[c4_i13]);
  }

  covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 2U,
                    *chartInstance->c4_isCirclePresent);
}

static void ext_mode_exec_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c4_update_jit_animation_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c4_do_animation_call_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_st;
  const mxArray *c4_y = NULL;
  c4_st = NULL;
  c4_st = NULL;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_createcellmatrix(2, 1), false);
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", chartInstance->c4_isCirclePresent, 0,
    0U, 0, 0U, 0), false);
  sf_mex_setcell(c4_y, 0, c4_b_y);
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", *chartInstance->c4_len, 0, 0U, 1, 0U,
    2, 1, 2), false);
  sf_mex_setcell(c4_y, 1, c4_c_y);
  sf_mex_assign(&c4_st, c4_y, false);
  return c4_st;
}

static void set_sim_state_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance, const mxArray *c4_st)
{
  const mxArray *c4_u;
  real_T c4_dv[2];
  int32_T c4_i;
  chartInstance->c4_doneDoubleBufferReInit = true;
  c4_u = sf_mex_dup(c4_st);
  *chartInstance->c4_isCirclePresent = c4_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c4_u, 0)), "isCirclePresent");
  c4_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 1)),
                        "len", c4_dv);
  for (c4_i = 0; c4_i < 2; c4_i++) {
    (*chartInstance->c4_len)[c4_i] = c4_dv[c4_i];
  }

  sf_mex_destroy(&c4_u);
  sf_mex_destroy(&c4_st);
}

static void c4_edge(SFc4_flightControlSystemInstanceStruct *chartInstance, const
                    emlrtStack *c4_sp, boolean_T c4_b_varargin_1[2400],
                    boolean_T c4_varargout_1[2400])
{
  static real_T c4_b_kernel[13] = { 0.0020299751839417137, 0.0102182810143517,
    0.058116735860084034, 0.19634433732941292, 0.37823877042972087,
    0.35505190018248872, 0.0, -0.35505190018248872, -0.37823877042972087,
    -0.19634433732941292, -0.058116735860084034, -0.0102182810143517,
    -0.0020299751839417137 };

  static real_T c4_c_kernel[13] = { 3.4813359214923059E-5,
    0.00054457256285105158, 0.0051667606200595222, 0.029732654490475543,
    0.10377716120747747, 0.21969625200024598, 0.28209557151935094,
    0.21969625200024598, 0.10377716120747747, 0.029732654490475543,
    0.0051667606200595222, 0.00054457256285105158, 3.4813359214923059E-5 };

  static real_T c4_d_kernel[13] = { 0.0020299751839417137, 0.0102182810143517,
    0.058116735860084034, 0.19634433732941292, 0.37823877042972087,
    0.35505190018248872, 0.0, -0.35505190018248872, -0.37823877042972087,
    -0.19634433732941292, -0.058116735860084034, -0.0102182810143517,
    -0.0020299751839417137 };

  static real_T c4_kernel[13] = { 3.4813359214923059E-5, 0.00054457256285105158,
    0.0051667606200595222, 0.029732654490475543, 0.10377716120747747,
    0.21969625200024598, 0.28209557151935094, 0.21969625200024598,
    0.10377716120747747, 0.029732654490475543, 0.0051667606200595222,
    0.00054457256285105158, 3.4813359214923059E-5 };

  static real_T c4_nonZeroKernel[12] = { 0.0020299751839417137,
    0.0102182810143517, 0.058116735860084034, 0.19634433732941292,
    0.37823877042972087, 0.35505190018248872, -0.35505190018248872,
    -0.37823877042972087, -0.19634433732941292, -0.058116735860084034,
    -0.0102182810143517, -0.0020299751839417137 };

  static int32_T c4_b_idxA[124] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
    14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32,
    33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9,
    10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28,
    29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
    48, 49, 50, 50, 50, 50, 50, 50, 50 };

  static int32_T c4_idxA[120] = { 1, 1, 1, 1, 1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9,
    10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28,
    29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
    48, 48, 48, 48, 48, 48, 48, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
    15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33,
    34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0 };

  static boolean_T c4_b_conn[13] = { true, true, true, true, true, true, false,
    true, true, true, true, true, true };

  static boolean_T c4_c_conn[13] = { true, true, true, true, true, true, false,
    true, true, true, true, true, true };

  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_st;
  real_T c4_counts[64];
  real_T c4_connDimsT[2];
  real_T c4_outSizeT[2];
  real_T c4_padSizeT[2];
  real_T c4_startT[2];
  real_T c4_b_data[1];
  real_T c4_highThresh_data[1];
  real_T c4_lowThresh_data[1];
  real_T c4_b_idx;
  real_T c4_b_j;
  real_T c4_b_lowThresh;
  real_T c4_d_i;
  real_T c4_d_j;
  real_T c4_f_j;
  real_T c4_g_i;
  real_T c4_h_j;
  real_T c4_highThresh;
  real_T c4_highThreshTemp;
  real_T c4_j_i;
  real_T c4_lowThresh;
  real_T c4_m_i;
  real_T c4_o_i;
  real_T c4_out;
  real_T c4_sum;
  int32_T c4_highThresh_size[1];
  int32_T c4_lowThresh_size[1];
  int32_T c4_b_c;
  int32_T c4_b_i;
  int32_T c4_c;
  int32_T c4_c_i;
  int32_T c4_c_j;
  int32_T c4_e_i;
  int32_T c4_e_j;
  int32_T c4_f_i;
  int32_T c4_g_j;
  int32_T c4_h_i;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i26;
  int32_T c4_i27;
  int32_T c4_i28;
  int32_T c4_i29;
  int32_T c4_i3;
  int32_T c4_i30;
  int32_T c4_i31;
  int32_T c4_i32;
  int32_T c4_i33;
  int32_T c4_i34;
  int32_T c4_i35;
  int32_T c4_i36;
  int32_T c4_i37;
  int32_T c4_i38;
  int32_T c4_i39;
  int32_T c4_i4;
  int32_T c4_i40;
  int32_T c4_i41;
  int32_T c4_i42;
  int32_T c4_i43;
  int32_T c4_i44;
  int32_T c4_i45;
  int32_T c4_i46;
  int32_T c4_i47;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_i_i;
  int32_T c4_idx;
  int32_T c4_j;
  int32_T c4_k_i;
  int32_T c4_l_i;
  int32_T c4_loop_ub;
  int32_T c4_n_i;
  real32_T c4_aTmp[3000];
  real32_T c4_b_aTmp[2976];
  real32_T c4_a[2400];
  real32_T c4_bTmp[2400];
  real32_T c4_magGrad[2400];
  real32_T c4_b;
  real32_T c4_b_a;
  real32_T c4_b_b;
  real32_T c4_b_r;
  real32_T c4_b_x;
  real32_T c4_b_x1;
  real32_T c4_b_x2;
  real32_T c4_b_y;
  real32_T c4_c_a;
  real32_T c4_c_b;
  real32_T c4_c_varargin_1;
  real32_T c4_c_x;
  real32_T c4_c_y;
  real32_T c4_d_a;
  real32_T c4_d_b;
  real32_T c4_d_idx;
  real32_T c4_d_x;
  real32_T c4_d_y;
  real32_T c4_e_a;
  real32_T c4_e_x;
  real32_T c4_e_y;
  real32_T c4_f_a;
  real32_T c4_f_x;
  real32_T c4_f_y;
  real32_T c4_g_a;
  real32_T c4_g_b;
  real32_T c4_g_x;
  real32_T c4_g_y;
  real32_T c4_h_a;
  real32_T c4_h_x;
  real32_T c4_h_y;
  real32_T c4_i_x;
  real32_T c4_i_y;
  real32_T c4_j_x;
  real32_T c4_j_y;
  real32_T c4_k_x;
  real32_T c4_k_y;
  real32_T c4_magmax;
  real32_T c4_r;
  real32_T c4_varargin_2;
  real32_T c4_x;
  real32_T c4_x1;
  real32_T c4_x2;
  real32_T c4_y;
  int8_T c4_c_idx;
  boolean_T c4_E[2400];
  boolean_T c4_conn[13];
  boolean_T c4_b_modeFlag;
  boolean_T c4_b_tooBig;
  boolean_T c4_c_modeFlag;
  boolean_T c4_c_tooBig;
  boolean_T c4_d_modeFlag;
  boolean_T c4_d_tooBig;
  boolean_T c4_e_b;
  boolean_T c4_e_modeFlag;
  boolean_T c4_f_b;
  boolean_T c4_f_modeFlag;
  boolean_T c4_g_modeFlag;
  boolean_T c4_h_modeFlag;
  boolean_T c4_i_modeFlag;
  boolean_T c4_j_modeFlag;
  boolean_T c4_k_modeFlag;
  boolean_T c4_l_modeFlag;
  boolean_T c4_modeFlag;
  boolean_T c4_nanFlag;
  boolean_T c4_tooBig;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  for (c4_i = 0; c4_i < 2400; c4_i++) {
    c4_a[c4_i] = (real32_T)c4_b_varargin_1[c4_i];
  }

  c4_st.site = &c4_d_emlrtRSI;
  c4_b_st.site = &c4_g_emlrtRSI;
  c4_c_st.site = &c4_k_emlrtRSI;
  c4_d_st.site = &c4_m_emlrtRSI;
  for (c4_j = 0; c4_j < 50; c4_j++) {
    c4_b_j = (real_T)c4_j + 1.0;
    for (c4_b_i = 0; c4_b_i < 60; c4_b_i++) {
      c4_d_i = (real_T)c4_b_i + 1.0;
      if ((c4_idxA[(int32_T)c4_d_i - 1] < 1) || (c4_idxA[(int32_T)c4_d_i - 1] >
           48)) {
        emlrtDynamicBoundsCheckR2012b(c4_idxA[(int32_T)c4_d_i - 1], 1, 48,
          &c4_j_emlrtBCI, &c4_d_st);
      }

      c4_i1 = c4_idxA[(int32_T)c4_b_j + 59];
      if ((c4_i1 < 1) || (c4_i1 > 50)) {
        emlrtDynamicBoundsCheckR2012b(c4_i1, 1, 50, &c4_k_emlrtBCI, &c4_d_st);
      }

      c4_aTmp[((int32_T)c4_d_i + 60 * ((int32_T)c4_b_j - 1)) - 1] = c4_a
        [(c4_idxA[(int32_T)c4_d_i - 1] + 48 * (c4_i1 - 1)) - 1];
    }
  }

  c4_c_st.site = &c4_l_emlrtRSI;
  c4_d_st.site = &c4_n_emlrtRSI;
  c4_tooBig = true;
  for (c4_c_i = 0; c4_c_i < 2; c4_c_i++) {
    c4_tooBig = false;
  }

  if (!c4_tooBig) {
    c4_modeFlag = true;
  } else {
    c4_modeFlag = false;
  }

  if (c4_modeFlag) {
    c4_b_modeFlag = true;
  } else {
    c4_b_modeFlag = false;
  }

  c4_c_modeFlag = c4_b_modeFlag;
  if (c4_c_modeFlag) {
    for (c4_i3 = 0; c4_i3 < 2; c4_i3++) {
      c4_padSizeT[c4_i3] = 60.0 + -10.0 * (real_T)c4_i3;
    }

    for (c4_i5 = 0; c4_i5 < 2; c4_i5++) {
      c4_outSizeT[c4_i5] = 48.0 + 2.0 * (real_T)c4_i5;
    }

    for (c4_i7 = 0; c4_i7 < 2; c4_i7++) {
      c4_connDimsT[c4_i7] = 13.0 + -12.0 * (real_T)c4_i7;
    }

    ippfilter_real32(&c4_aTmp[0], &c4_bTmp[0], &c4_outSizeT[0], 2.0,
                     &c4_padSizeT[0], &c4_kernel[0], &c4_connDimsT[0], true);
  } else {
    for (c4_i2 = 0; c4_i2 < 13; c4_i2++) {
      c4_conn[c4_i2] = true;
    }

    for (c4_i4 = 0; c4_i4 < 2; c4_i4++) {
      c4_padSizeT[c4_i4] = 60.0 + -10.0 * (real_T)c4_i4;
    }

    for (c4_i6 = 0; c4_i6 < 2; c4_i6++) {
      c4_outSizeT[c4_i6] = 48.0 + 2.0 * (real_T)c4_i6;
    }

    for (c4_i8 = 0; c4_i8 < 2; c4_i8++) {
      c4_connDimsT[c4_i8] = 13.0 + -12.0 * (real_T)c4_i8;
    }

    for (c4_i9 = 0; c4_i9 < 2; c4_i9++) {
      c4_startT[c4_i9] = 6.0 + -6.0 * (real_T)c4_i9;
    }

    imfilter_real32(&c4_aTmp[0], &c4_bTmp[0], 2.0, &c4_outSizeT[0], 2.0,
                    &c4_padSizeT[0], &c4_kernel[0], 13.0, &c4_conn[0], 2.0,
                    &c4_connDimsT[0], &c4_startT[0], 2.0, true, true);
  }

  c4_b_st.site = &c4_h_emlrtRSI;
  c4_c_st.site = &c4_k_emlrtRSI;
  c4_d_st.site = &c4_m_emlrtRSI;
  for (c4_c_j = 0; c4_c_j < 62; c4_c_j++) {
    c4_d_j = (real_T)c4_c_j + 1.0;
    for (c4_e_i = 0; c4_e_i < 48; c4_e_i++) {
      c4_g_i = (real_T)c4_e_i + 1.0;
      if ((c4_b_idxA[(int32_T)c4_g_i - 1] < 1) || (c4_b_idxA[(int32_T)c4_g_i - 1]
           > 48)) {
        emlrtDynamicBoundsCheckR2012b(c4_b_idxA[(int32_T)c4_g_i - 1], 1, 48,
          &c4_j_emlrtBCI, &c4_d_st);
      }

      c4_i10 = c4_b_idxA[(int32_T)c4_d_j + 61];
      if ((c4_i10 < 1) || (c4_i10 > 50)) {
        emlrtDynamicBoundsCheckR2012b(c4_i10, 1, 50, &c4_k_emlrtBCI, &c4_d_st);
      }

      c4_b_aTmp[((int32_T)c4_g_i + 48 * ((int32_T)c4_d_j - 1)) - 1] = c4_bTmp
        [(c4_b_idxA[(int32_T)c4_g_i - 1] + 48 * (c4_i10 - 1)) - 1];
    }
  }

  c4_c_st.site = &c4_l_emlrtRSI;
  c4_d_st.site = &c4_n_emlrtRSI;
  c4_b_tooBig = true;
  for (c4_f_i = 0; c4_f_i < 2; c4_f_i++) {
    c4_b_tooBig = false;
  }

  if (!c4_b_tooBig) {
    c4_d_modeFlag = true;
  } else {
    c4_d_modeFlag = false;
  }

  if (c4_d_modeFlag) {
    c4_e_modeFlag = true;
  } else {
    c4_e_modeFlag = false;
  }

  c4_f_modeFlag = c4_e_modeFlag;
  if (c4_f_modeFlag) {
    for (c4_i12 = 0; c4_i12 < 2; c4_i12++) {
      c4_padSizeT[c4_i12] = 48.0 + 14.0 * (real_T)c4_i12;
    }

    for (c4_i14 = 0; c4_i14 < 2; c4_i14++) {
      c4_outSizeT[c4_i14] = 48.0 + 2.0 * (real_T)c4_i14;
    }

    for (c4_i16 = 0; c4_i16 < 2; c4_i16++) {
      c4_connDimsT[c4_i16] = 1.0 + 12.0 * (real_T)c4_i16;
    }

    ippfilter_real32(&c4_b_aTmp[0], &c4_bTmp[0], &c4_outSizeT[0], 2.0,
                     &c4_padSizeT[0], &c4_b_kernel[0], &c4_connDimsT[0], true);
  } else {
    for (c4_i11 = 0; c4_i11 < 2; c4_i11++) {
      c4_padSizeT[c4_i11] = 48.0 + 14.0 * (real_T)c4_i11;
    }

    for (c4_i13 = 0; c4_i13 < 2; c4_i13++) {
      c4_outSizeT[c4_i13] = 48.0 + 2.0 * (real_T)c4_i13;
    }

    for (c4_i15 = 0; c4_i15 < 2; c4_i15++) {
      c4_connDimsT[c4_i15] = 1.0 + 12.0 * (real_T)c4_i15;
    }

    for (c4_i17 = 0; c4_i17 < 2; c4_i17++) {
      c4_startT[c4_i17] = 6.0 * (real_T)c4_i17;
    }

    imfilter_real32(&c4_b_aTmp[0], &c4_bTmp[0], 2.0, &c4_outSizeT[0], 2.0,
                    &c4_padSizeT[0], &c4_nonZeroKernel[0], 12.0, &c4_b_conn[0],
                    2.0, &c4_connDimsT[0], &c4_startT[0], 2.0, true, true);
  }

  c4_b_st.site = &c4_i_emlrtRSI;
  c4_c_st.site = &c4_k_emlrtRSI;
  c4_d_st.site = &c4_m_emlrtRSI;
  for (c4_e_j = 0; c4_e_j < 62; c4_e_j++) {
    c4_f_j = (real_T)c4_e_j + 1.0;
    for (c4_h_i = 0; c4_h_i < 48; c4_h_i++) {
      c4_j_i = (real_T)c4_h_i + 1.0;
      if ((c4_b_idxA[(int32_T)c4_j_i - 1] < 1) || (c4_b_idxA[(int32_T)c4_j_i - 1]
           > 48)) {
        emlrtDynamicBoundsCheckR2012b(c4_b_idxA[(int32_T)c4_j_i - 1], 1, 48,
          &c4_j_emlrtBCI, &c4_d_st);
      }

      c4_i18 = c4_b_idxA[(int32_T)c4_f_j + 61];
      if ((c4_i18 < 1) || (c4_i18 > 50)) {
        emlrtDynamicBoundsCheckR2012b(c4_i18, 1, 50, &c4_k_emlrtBCI, &c4_d_st);
      }

      c4_b_aTmp[((int32_T)c4_j_i + 48 * ((int32_T)c4_f_j - 1)) - 1] = c4_a
        [(c4_b_idxA[(int32_T)c4_j_i - 1] + 48 * (c4_i18 - 1)) - 1];
    }
  }

  c4_c_st.site = &c4_l_emlrtRSI;
  c4_d_st.site = &c4_n_emlrtRSI;
  c4_c_tooBig = true;
  for (c4_i_i = 0; c4_i_i < 2; c4_i_i++) {
    c4_c_tooBig = false;
  }

  if (!c4_c_tooBig) {
    c4_g_modeFlag = true;
  } else {
    c4_g_modeFlag = false;
  }

  if (c4_g_modeFlag) {
    c4_h_modeFlag = true;
  } else {
    c4_h_modeFlag = false;
  }

  c4_i_modeFlag = c4_h_modeFlag;
  if (c4_i_modeFlag) {
    for (c4_i20 = 0; c4_i20 < 2; c4_i20++) {
      c4_padSizeT[c4_i20] = 48.0 + 14.0 * (real_T)c4_i20;
    }

    for (c4_i22 = 0; c4_i22 < 2; c4_i22++) {
      c4_outSizeT[c4_i22] = 48.0 + 2.0 * (real_T)c4_i22;
    }

    for (c4_i24 = 0; c4_i24 < 2; c4_i24++) {
      c4_connDimsT[c4_i24] = 1.0 + 12.0 * (real_T)c4_i24;
    }

    ippfilter_real32(&c4_b_aTmp[0], &c4_a[0], &c4_outSizeT[0], 2.0,
                     &c4_padSizeT[0], &c4_c_kernel[0], &c4_connDimsT[0], true);
  } else {
    for (c4_i19 = 0; c4_i19 < 13; c4_i19++) {
      c4_conn[c4_i19] = true;
    }

    for (c4_i21 = 0; c4_i21 < 2; c4_i21++) {
      c4_padSizeT[c4_i21] = 48.0 + 14.0 * (real_T)c4_i21;
    }

    for (c4_i23 = 0; c4_i23 < 2; c4_i23++) {
      c4_outSizeT[c4_i23] = 48.0 + 2.0 * (real_T)c4_i23;
    }

    for (c4_i25 = 0; c4_i25 < 2; c4_i25++) {
      c4_connDimsT[c4_i25] = 1.0 + 12.0 * (real_T)c4_i25;
    }

    for (c4_i26 = 0; c4_i26 < 2; c4_i26++) {
      c4_startT[c4_i26] = 6.0 * (real_T)c4_i26;
    }

    imfilter_real32(&c4_b_aTmp[0], &c4_a[0], 2.0, &c4_outSizeT[0], 2.0,
                    &c4_padSizeT[0], &c4_kernel[0], 13.0, &c4_conn[0], 2.0,
                    &c4_connDimsT[0], &c4_startT[0], 2.0, true, true);
  }

  c4_b_st.site = &c4_j_emlrtRSI;
  c4_c_st.site = &c4_k_emlrtRSI;
  c4_d_st.site = &c4_m_emlrtRSI;
  for (c4_g_j = 0; c4_g_j < 50; c4_g_j++) {
    c4_h_j = (real_T)c4_g_j + 1.0;
    for (c4_k_i = 0; c4_k_i < 60; c4_k_i++) {
      c4_m_i = (real_T)c4_k_i + 1.0;
      if ((c4_idxA[(int32_T)c4_m_i - 1] < 1) || (c4_idxA[(int32_T)c4_m_i - 1] >
           48)) {
        emlrtDynamicBoundsCheckR2012b(c4_idxA[(int32_T)c4_m_i - 1], 1, 48,
          &c4_j_emlrtBCI, &c4_d_st);
      }

      c4_i27 = c4_idxA[(int32_T)c4_h_j + 59];
      if ((c4_i27 < 1) || (c4_i27 > 50)) {
        emlrtDynamicBoundsCheckR2012b(c4_i27, 1, 50, &c4_k_emlrtBCI, &c4_d_st);
      }

      c4_aTmp[((int32_T)c4_m_i + 60 * ((int32_T)c4_h_j - 1)) - 1] = c4_a
        [(c4_idxA[(int32_T)c4_m_i - 1] + 48 * (c4_i27 - 1)) - 1];
    }
  }

  c4_c_st.site = &c4_l_emlrtRSI;
  c4_d_st.site = &c4_n_emlrtRSI;
  c4_d_tooBig = true;
  for (c4_l_i = 0; c4_l_i < 2; c4_l_i++) {
    c4_d_tooBig = false;
  }

  if (!c4_d_tooBig) {
    c4_j_modeFlag = true;
  } else {
    c4_j_modeFlag = false;
  }

  if (c4_j_modeFlag) {
    c4_k_modeFlag = true;
  } else {
    c4_k_modeFlag = false;
  }

  c4_l_modeFlag = c4_k_modeFlag;
  if (c4_l_modeFlag) {
    for (c4_i29 = 0; c4_i29 < 2; c4_i29++) {
      c4_padSizeT[c4_i29] = 60.0 + -10.0 * (real_T)c4_i29;
    }

    for (c4_i31 = 0; c4_i31 < 2; c4_i31++) {
      c4_outSizeT[c4_i31] = 48.0 + 2.0 * (real_T)c4_i31;
    }

    for (c4_i33 = 0; c4_i33 < 2; c4_i33++) {
      c4_connDimsT[c4_i33] = 13.0 + -12.0 * (real_T)c4_i33;
    }

    ippfilter_real32(&c4_aTmp[0], &c4_a[0], &c4_outSizeT[0], 2.0, &c4_padSizeT[0],
                     &c4_d_kernel[0], &c4_connDimsT[0], true);
  } else {
    for (c4_i28 = 0; c4_i28 < 2; c4_i28++) {
      c4_padSizeT[c4_i28] = 60.0 + -10.0 * (real_T)c4_i28;
    }

    for (c4_i30 = 0; c4_i30 < 2; c4_i30++) {
      c4_outSizeT[c4_i30] = 48.0 + 2.0 * (real_T)c4_i30;
    }

    for (c4_i32 = 0; c4_i32 < 2; c4_i32++) {
      c4_connDimsT[c4_i32] = 13.0 + -12.0 * (real_T)c4_i32;
    }

    for (c4_i34 = 0; c4_i34 < 2; c4_i34++) {
      c4_startT[c4_i34] = 6.0 + -6.0 * (real_T)c4_i34;
    }

    imfilter_real32(&c4_aTmp[0], &c4_a[0], 2.0, &c4_outSizeT[0], 2.0,
                    &c4_padSizeT[0], &c4_nonZeroKernel[0], 12.0, &c4_c_conn[0],
                    2.0, &c4_connDimsT[0], &c4_startT[0], 2.0, true, true);
  }

  c4_x = c4_bTmp[0];
  c4_y = c4_a[0];
  c4_b_a = c4_x;
  c4_b = c4_y;
  c4_b_x = c4_b_a;
  c4_b_y = c4_b;
  c4_x1 = c4_b_x;
  c4_x2 = c4_b_y;
  c4_c_a = c4_x1;
  c4_b_b = c4_x2;
  c4_r = muSingleScalarHypot(c4_c_a, c4_b_b);
  c4_magGrad[0] = c4_r;
  c4_magmax = c4_magGrad[0];
  for (c4_idx = 0; c4_idx < 2399; c4_idx++) {
    c4_b_idx = (real_T)c4_idx + 2.0;
    c4_c_x = c4_bTmp[(int32_T)c4_b_idx - 1];
    c4_e_y = c4_a[(int32_T)c4_b_idx - 1];
    c4_d_a = c4_c_x;
    c4_c_b = c4_e_y;
    c4_d_x = c4_d_a;
    c4_f_y = c4_c_b;
    c4_b_x1 = c4_d_x;
    c4_b_x2 = c4_f_y;
    c4_e_a = c4_b_x1;
    c4_d_b = c4_b_x2;
    c4_b_r = muSingleScalarHypot(c4_e_a, c4_d_b);
    c4_magGrad[(int32_T)c4_b_idx - 1] = c4_b_r;
    c4_c_varargin_1 = c4_magGrad[(int32_T)c4_b_idx - 1];
    c4_varargin_2 = c4_magmax;
    c4_f_x = c4_c_varargin_1;
    c4_g_y = c4_varargin_2;
    c4_g_x = c4_f_x;
    c4_h_y = c4_g_y;
    c4_h_x = c4_g_x;
    c4_i_y = c4_h_y;
    c4_f_a = c4_h_x;
    c4_g_b = c4_i_y;
    c4_j_x = c4_f_a;
    c4_j_y = c4_g_b;
    c4_k_x = c4_j_x;
    c4_k_y = c4_j_y;
    c4_magmax = muSingleScalarMax(c4_k_x, c4_k_y);
  }

  if (c4_magmax > 0.0F) {
    c4_c_y = c4_magmax;
    c4_d_y = c4_c_y;
    for (c4_i35 = 0; c4_i35 < 2400; c4_i35++) {
      c4_magGrad[c4_i35] /= c4_d_y;
    }
  }

  c4_st.site = &c4_e_emlrtRSI;
  c4_b_st.site = &c4_r_emlrtRSI;
  c4_c_st.site = &c4_s_emlrtRSI;
  c4_d_st.site = &c4_t_emlrtRSI;
  c4_out = 1.0;
  getnumcores(&c4_out);
  for (c4_i36 = 0; c4_i36 < 64; c4_i36++) {
    c4_counts[c4_i36] = 0.0;
  }

  c4_nanFlag = false;
  for (c4_n_i = 0; c4_n_i < 2400; c4_n_i++) {
    c4_o_i = (real_T)c4_n_i + 1.0;
    c4_e_x = c4_magGrad[(int32_T)c4_o_i - 1];
    c4_e_b = muSingleScalarIsNaN(c4_e_x);
    if (c4_e_b) {
      c4_nanFlag = true;
      c4_d_idx = 0.0F;
    } else {
      c4_d_idx = c4_magGrad[(int32_T)c4_o_i - 1] * 63.0F + 0.5F;
    }

    if (c4_d_idx > 63.0F) {
      c4_counts[63]++;
    } else {
      c4_i_x = c4_magGrad[(int32_T)c4_o_i - 1];
      c4_f_b = muSingleScalarIsInf(c4_i_x);
      if (c4_f_b) {
        c4_counts[63]++;
      } else {
        c4_g_a = c4_d_idx;
        c4_c = (int32_T)c4_g_a;
        c4_h_a = c4_d_idx;
        c4_b_c = (int32_T)c4_h_a;
        c4_counts[c4_c] = c4_counts[c4_b_c] + 1.0;
      }
    }
  }

  if (c4_nanFlag) {
    c4_d_st.site = &c4_u_emlrtRSI;
    c4_warning(chartInstance, &c4_d_st);
  }

  c4_sum = 0.0;
  c4_c_idx = 1;
  while ((!(c4_sum > 1679.9999999999998)) && ((real_T)c4_c_idx <= 64.0)) {
    c4_sum += c4_counts[c4_c_idx - 1];
    c4_i38 = c4_c_idx + 1;
    if (c4_i38 > 127) {
      c4_i38 = 127;
    } else if (c4_i38 < -128) {
      c4_i38 = -128;
    }

    c4_c_idx = (int8_T)c4_i38;
  }

  c4_i37 = c4_c_idx - 1;
  if (c4_i37 > 127) {
    c4_i37 = 127;
  } else if (c4_i37 < -128) {
    c4_i37 = -128;
  }

  c4_highThreshTemp = (real_T)(int8_T)c4_i37 / 64.0;
  if (((real_T)c4_c_idx > 64.0) && (!(c4_sum > 1679.9999999999998))) {
    c4_highThresh_size[0] = 0;
    c4_lowThresh_size[0] = 0;
  } else {
    c4_highThresh_size[0] = 1;
    c4_highThresh_data[0] = c4_highThreshTemp;
    c4_loop_ub = c4_highThresh_size[0] - 1;
    for (c4_i39 = 0; c4_i39 <= c4_loop_ub; c4_i39++) {
      c4_b_data[c4_i39] = c4_highThresh_data[c4_i39];
    }

    c4_b_data[0] *= 0.4;
    c4_lowThresh_size[0] = 1;
    c4_lowThresh_data[0] = c4_b_data[0];
  }

  c4_st.site = &c4_f_emlrtRSI;
  c4_i40 = 1;
  if ((c4_i40 < 1) || (c4_i40 > c4_lowThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c4_i40, 1, c4_lowThresh_size[0],
      &c4_h_emlrtBCI, &c4_st);
  }

  c4_b_st.site = &c4_w_emlrtRSI;
  c4_lowThresh = c4_lowThresh_data[0];
  c4_c_st.site = &c4_y_emlrtRSI;
  c4_b_lowThresh = c4_lowThresh;
  for (c4_i41 = 0; c4_i41 < 2400; c4_i41++) {
    c4_E[c4_i41] = false;
  }

  for (c4_i42 = 0; c4_i42 < 2; c4_i42++) {
    c4_connDimsT[c4_i42] = 48.0 + 2.0 * (real_T)c4_i42;
  }

  cannythresholding_real32_tbb(&c4_bTmp[0], &c4_a[0], &c4_magGrad[0],
    &c4_connDimsT[0], c4_b_lowThresh, &c4_E[0]);
  c4_i43 = 1;
  if ((c4_i43 < 1) || (c4_i43 > c4_highThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c4_i43, 1, c4_highThresh_size[0],
      &c4_i_emlrtBCI, &c4_st);
  }

  c4_highThresh = c4_highThresh_data[0];
  for (c4_i44 = 0; c4_i44 < 2400; c4_i44++) {
    c4_varargout_1[c4_i44] = ((real_T)c4_magGrad[c4_i44] > c4_highThresh);
  }

  c4_b_st.site = &c4_x_emlrtRSI;
  c4_c_st.site = &c4_ab_emlrtRSI;
  for (c4_i45 = 0; c4_i45 < 2; c4_i45++) {
    c4_connDimsT[c4_i45] = 48.0 + 2.0 * (real_T)c4_i45;
  }

  ippreconstruct_uint8((uint8_T *)&c4_varargout_1[0], (uint8_T *)&c4_E[0],
                       &c4_connDimsT[0], 2.0);
  c4_i46 = 1;
  if ((c4_i46 < 1) || (c4_i46 > c4_lowThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c4_i46, 1, c4_lowThresh_size[0],
      &c4_f_emlrtBCI, (emlrtConstCTX)c4_sp);
  }

  c4_i47 = 1;
  if ((c4_i47 < 1) || (c4_i47 > c4_highThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c4_i47, 1, c4_highThresh_size[0],
      &c4_g_emlrtBCI, (emlrtConstCTX)c4_sp);
  }
}

static void c4_warning(SFc4_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c4_sp)
{
  static char_T c4_msgID[27] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm',
    'h', 'i', 's', 't', 'c', ':', 'i', 'n', 'p', 'u', 't', 'H', 'a', 's', 'N',
    'a', 'N', 's' };

  static char_T c4_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T c4_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_y = NULL;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", c4_cv, 10, 0U, 1, 0U, 2, 1, 7), false);
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv1, 10, 0U, 1, 0U, 2, 1, 7),
                false);
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_msgID, 10, 0U, 1, 0U, 2, 1, 27),
                false);
  c4_st.site = &c4_v_emlrtRSI;
  c4_b_feval(chartInstance, &c4_st, c4_y, c4_feval(chartInstance, &c4_st, c4_b_y,
              c4_c_y));
}

static void c4_houghpeaks(SFc4_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, real_T c4_b_varargin_1[24660], real_T c4_peaks_data[],
  int32_T c4_peaks_size[2])
{
  static char_T c4_cv1[47] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'I', 'n', 't', 'e', 'g', 'e', 'r' };

  static char_T c4_cv3[43] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'h', 'o', 'u',
    'g', 'h', 'p', 'e', 'a', 'k', 's', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'h', 'e', 't', 'a', 'V', 'e', 'c', 't', 'o', 'r', 'S', 'p', 'a', 'c',
    'i', 'n', 'g' };

  static char_T c4_cv[33] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'h', 'o', 'u',
    'g', 'h', 'p', 'e', 'a', 'k', 's', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'I', 'n', 't', 'e', 'g', 'e', 'r' };

  static char_T c4_cv2[18] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm', 'b',
    'e', 'r', ' ', '1', ',', ' ', 'H', ',' };

  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_st;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_h_y = NULL;
  const mxArray *c4_y = NULL;
  real_T c4_y1[179];
  real_T c4_b_y1[178];
  real_T c4_peakCoordinates[20];
  real_T c4_b_default;
  real_T c4_b_ex;
  real_T c4_b_k;
  real_T c4_b_ndx;
  real_T c4_b_threshold;
  real_T c4_b_thresholdDefault;
  real_T c4_b_tmp1;
  real_T c4_b_tmp2;
  real_T c4_b_work;
  real_T c4_b_x;
  real_T c4_b_y;
  real_T c4_c_ex;
  real_T c4_c_x;
  real_T c4_d_k;
  real_T c4_d_x;
  real_T c4_default;
  real_T c4_e_idx;
  real_T c4_e_x;
  real_T c4_e_y;
  real_T c4_ex;
  real_T c4_f_x;
  real_T c4_f_y;
  real_T c4_g_x;
  real_T c4_h_x;
  real_T c4_iPeak;
  real_T c4_i_x;
  real_T c4_i_y;
  real_T c4_jPeak;
  real_T c4_j_x;
  real_T c4_j_y;
  real_T c4_k_x;
  real_T c4_l_x;
  real_T c4_maxTheta;
  real_T c4_maxVal;
  real_T c4_minTheta;
  real_T c4_ndx;
  real_T c4_thetaResolution;
  real_T c4_threshold;
  real_T c4_thresholdDefault;
  real_T c4_tmp1;
  real_T c4_tmp2;
  real_T c4_val;
  real_T c4_work;
  real_T c4_x;
  int32_T c4_a;
  int32_T c4_b_iPeak;
  int32_T c4_b_idx;
  int32_T c4_b_ixLead;
  int32_T c4_b_iyLead;
  int32_T c4_b_jPeak;
  int32_T c4_b_m;
  int32_T c4_c_idx;
  int32_T c4_c_k;
  int32_T c4_d_idx;
  int32_T c4_e_k;
  int32_T c4_f_idx;
  int32_T c4_f_k;
  int32_T c4_g_k;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_idx;
  int32_T c4_iindx;
  int32_T c4_ixLead;
  int32_T c4_iyLead;
  int32_T c4_k;
  int32_T c4_loop_ub;
  int32_T c4_m;
  int32_T c4_peakIdx;
  int32_T c4_rho;
  int32_T c4_rhoMax;
  int32_T c4_rhoMin;
  int32_T c4_rhoToRemove;
  int32_T c4_theta;
  int32_T c4_thetaMax;
  int32_T c4_thetaMin;
  int32_T c4_thetaToRemove;
  int32_T c4_v1;
  int32_T c4_varargout_3;
  int32_T c4_varargout_4;
  int32_T c4_vk;
  boolean_T c4_b;
  boolean_T c4_b_p;
  boolean_T c4_c_p;
  boolean_T c4_exitg1;
  boolean_T c4_isDone;
  boolean_T c4_isThetaAntisymmetric;
  boolean_T c4_p;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_st.site = &c4_eb_emlrtRSI;
  c4_b_st.site = &c4_fb_emlrtRSI;
  c4_c_st.site = &c4_ib_emlrtRSI;
  c4_c_st.site = &c4_ib_emlrtRSI;
  c4_p = true;
  c4_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_k < 24660)) {
    c4_b_k = (real_T)c4_k + 1.0;
    c4_x = c4_b_varargin_1[(int32_T)c4_b_k - 1];
    c4_b_x = c4_x;
    c4_c_x = c4_b_x;
    c4_b_y = c4_c_x;
    if (c4_b_y == c4_x) {
      c4_b_p = true;
    } else {
      c4_b_p = false;
    }

    c4_c_p = c4_b_p;
    if (c4_c_p) {
      c4_k++;
    } else {
      c4_p = false;
      c4_exitg1 = true;
    }
  }

  if (c4_p) {
    c4_b = true;
  } else {
    c4_b = false;
  }

  if (!c4_b) {
    c4_y = NULL;
    sf_mex_assign(&c4_y, sf_mex_create("y", c4_cv, 10, 0U, 1, 0U, 2, 1, 33),
                  false);
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_cv1, 10, 0U, 1, 0U, 2, 1, 47),
                  false);
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_cv2, 10, 0U, 1, 0U, 2, 1, 18),
                  false);
    sf_mex_call(&c4_c_st, &c4_d_emlrtMCI, "error", 0U, 2U, 14, c4_y, 14,
                sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_c_st, NULL, "message", 1U, 2U, 14, c4_c_y, 14, c4_d_y)));
  }

  c4_maxVal = 0.0;
  for (c4_c_k = 0; c4_c_k < 24660; c4_c_k++) {
    c4_d_k = (real_T)c4_c_k + 1.0;
    c4_val = c4_b_varargin_1[(int32_T)c4_d_k - 1];
    if (c4_val > c4_maxVal) {
      c4_maxVal = c4_val;
    }
  }

  c4_thresholdDefault = 0.5 * c4_maxVal;
  c4_b_thresholdDefault = c4_thresholdDefault;
  c4_default = c4_b_thresholdDefault;
  c4_b_default = c4_default;
  c4_threshold = c4_b_default;
  c4_b_threshold = c4_threshold;
  c4_b_st.site = &c4_gb_emlrtRSI;
  c4_c_st.site = &c4_jb_emlrtRSI;
  c4_b_st.site = &c4_hb_emlrtRSI;
  c4_c_st.site = &c4_lb_emlrtRSI;
  c4_ixLead = 1;
  c4_iyLead = 0;
  c4_work = -90.0;
  for (c4_m = 0; c4_m < 179; c4_m++) {
    c4_tmp1 = -90.0 + (real_T)c4_ixLead;
    c4_tmp2 = c4_work;
    c4_work = c4_tmp1;
    c4_tmp1 -= c4_tmp2;
    c4_ixLead++;
    c4_y1[c4_iyLead] = c4_tmp1;
    c4_iyLead++;
  }

  c4_c_st.site = &c4_kb_emlrtRSI;
  c4_b_ixLead = 1;
  c4_b_iyLead = 0;
  c4_b_work = c4_y1[0];
  for (c4_b_m = 0; c4_b_m < 178; c4_b_m++) {
    c4_b_tmp1 = c4_y1[c4_b_ixLead];
    c4_b_tmp2 = c4_b_work;
    c4_b_work = c4_b_tmp1;
    c4_b_tmp1 -= c4_b_tmp2;
    c4_b_ixLead++;
    c4_b_y1[c4_b_iyLead] = c4_b_tmp1;
    c4_b_iyLead++;
  }

  c4_e_y = c4_sumColumnB(chartInstance, c4_b_y1);
  c4_d_x = c4_e_y;
  c4_e_x = c4_d_x;
  c4_f_x = c4_e_x;
  c4_f_y = muDoubleScalarAbs(c4_f_x);
  if (c4_f_y > 1.4901161193847656E-8) {
    c4_g_y = NULL;
    sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_cv3, 10, 0U, 1, 0U, 2, 1, 43),
                  false);
    c4_h_y = NULL;
    sf_mex_assign(&c4_h_y, sf_mex_create("y", c4_cv3, 10, 0U, 1, 0U, 2, 1, 43),
                  false);
    sf_mex_call(&c4_b_st, &c4_h_emlrtMCI, "error", 0U, 2U, 14, c4_g_y, 14,
                sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_b_st, NULL, "message", 1U, 1U, 14, c4_h_y)));
  }

  c4_isDone = false;
  for (c4_i = 0; c4_i < 24660; c4_i++) {
    chartInstance->c4_hnew[c4_i] = c4_b_varargin_1[c4_i];
  }

  c4_peakIdx = 0;
  c4_ex = -90.0;
  for (c4_e_k = 0; c4_e_k < 179; c4_e_k++) {
    if (c4_ex > -90.0 + (real_T)(c4_e_k + 1)) {
      c4_ex = -90.0 + (real_T)(c4_e_k + 1);
    }
  }

  c4_minTheta = c4_ex;
  c4_b_ex = -90.0;
  for (c4_f_k = 0; c4_f_k < 179; c4_f_k++) {
    if (c4_b_ex < -90.0 + (real_T)(c4_f_k + 1)) {
      c4_b_ex = -90.0 + (real_T)(c4_f_k + 1);
    }
  }

  c4_maxTheta = c4_b_ex;
  c4_g_x = c4_maxTheta - c4_minTheta;
  c4_h_x = c4_g_x;
  c4_i_x = c4_h_x;
  c4_i_y = muDoubleScalarAbs(c4_i_x);
  c4_thetaResolution = c4_i_y / 179.0;
  c4_j_x = c4_minTheta + c4_thetaResolution * 5.0;
  c4_k_x = c4_j_x;
  c4_l_x = c4_k_x;
  c4_j_y = muDoubleScalarAbs(c4_l_x);
  c4_isThetaAntisymmetric = (c4_j_y <= c4_maxTheta);
  while (!c4_isDone) {
    for (c4_i1 = 0; c4_i1 < 24660; c4_i1++) {
      chartInstance->c4_varargin_1[c4_i1] = chartInstance->c4_hnew[c4_i1];
    }

    c4_c_ex = chartInstance->c4_varargin_1[0];
    c4_idx = 1;
    for (c4_g_k = 0; c4_g_k < 24659; c4_g_k++) {
      if (c4_c_ex < chartInstance->c4_varargin_1[c4_g_k + 1]) {
        c4_c_ex = chartInstance->c4_varargin_1[c4_g_k + 1];
        c4_idx = c4_g_k + 2;
      }
    }

    c4_b_idx = c4_idx;
    c4_c_idx = c4_b_idx;
    c4_d_idx = c4_c_idx;
    c4_iindx = c4_d_idx;
    c4_e_idx = (real_T)c4_iindx;
    c4_st.site = &c4_db_emlrtRSI;
    c4_ndx = c4_e_idx;
    c4_b_st.site = &c4_mb_emlrtRSI;
    c4_b_ndx = c4_ndx;
    c4_f_idx = (int32_T)c4_b_ndx - 1;
    c4_v1 = c4_f_idx;
    c4_a = c4_v1;
    c4_vk = (int32_T)((uint32_T)(uint16_T)c4_a / 137U);
    c4_varargout_4 = c4_vk;
    c4_v1 = (c4_v1 - c4_vk * 137) + 1;
    c4_varargout_3 = c4_v1;
    c4_iPeak = (real_T)c4_varargout_3;
    c4_jPeak = (real_T)(c4_varargout_4 + 1);
    c4_b_iPeak = (int32_T)c4_iPeak;
    c4_b_jPeak = (int32_T)c4_jPeak;
    if ((c4_b_iPeak < 1) || (c4_b_iPeak > 137)) {
      emlrtDynamicBoundsCheckR2012b(c4_b_iPeak, 1, 137, &c4_m_emlrtBCI,
        (emlrtConstCTX)c4_sp);
    }

    if (chartInstance->c4_hnew[(c4_b_iPeak + 137 * (c4_b_jPeak - 1)) - 1] >=
        c4_b_threshold) {
      c4_peakIdx++;
      if ((c4_peakIdx < 1) || (c4_peakIdx > 10)) {
        emlrtDynamicBoundsCheckR2012b(c4_peakIdx, 1, 10, &c4_l_emlrtBCI,
          (emlrtConstCTX)c4_sp);
      }

      c4_peakCoordinates[c4_peakIdx - 1] = (real_T)c4_b_iPeak;
      c4_peakCoordinates[c4_peakIdx + 9] = (real_T)c4_b_jPeak;
      c4_rhoMin = c4_b_iPeak - 2;
      c4_rhoMax = c4_b_iPeak + 2;
      c4_thetaMin = c4_b_jPeak;
      c4_thetaMax = c4_b_jPeak;
      if (c4_rhoMin < 1) {
        c4_rhoMin = 1;
      }

      if (c4_rhoMax > 137) {
        c4_rhoMax = 137;
      }

      for (c4_theta = c4_thetaMin - 2; c4_theta <= c4_thetaMax + 2; c4_theta++)
      {
        for (c4_rho = c4_rhoMin; c4_rho <= c4_rhoMax; c4_rho++) {
          c4_rhoToRemove = c4_rho;
          c4_thetaToRemove = c4_theta;
          if (c4_isThetaAntisymmetric) {
            if (c4_theta > 180) {
              c4_rhoToRemove = 138 - c4_rho;
              c4_thetaToRemove = c4_theta - 180;
            } else if (c4_theta < 1) {
              c4_rhoToRemove = 138 - c4_rho;
              c4_thetaToRemove = c4_theta + 180;
            }
          }

          if ((c4_thetaToRemove > 180) || (c4_thetaToRemove < 1)) {
          } else {
            chartInstance->c4_hnew[(c4_rhoToRemove + 137 * (c4_thetaToRemove - 1))
              - 1] = 0.0;
          }
        }
      }

      c4_isDone = (c4_peakIdx == 10);
    } else {
      c4_isDone = true;
    }
  }

  if (c4_peakIdx == 0) {
    c4_peaks_size[0] = 0;
    c4_peaks_size[1] = 0;
  } else {
    c4_peaks_size[0] = c4_peakIdx;
    c4_peaks_size[1] = 2;
    for (c4_i2 = 0; c4_i2 < 2; c4_i2++) {
      c4_loop_ub = c4_peakIdx - 1;
      for (c4_i3 = 0; c4_i3 <= c4_loop_ub; c4_i3++) {
        c4_peaks_data[c4_i3 + c4_peaks_size[0] * c4_i2] =
          c4_peakCoordinates[c4_i3 + 10 * c4_i2];
      }
    }
  }
}

static real_T c4_sumColumnB(SFc4_flightControlSystemInstanceStruct
  *chartInstance, real_T c4_x[178])
{
  real_T c4_y;
  int32_T c4_b_k;
  int32_T c4_k;
  (void)chartInstance;
  c4_y = c4_x[0];
  for (c4_k = 0; c4_k < 177; c4_k++) {
    c4_b_k = c4_k;
    c4_y += c4_x[c4_b_k + 1];
  }

  return c4_y;
}

const mxArray *sf_c4_flightControlSystem_get_eml_resolved_functions_info(void)
{
  const mxArray *c4_nameCaptureInfo = NULL;
  c4_nameCaptureInfo = NULL;
  sf_mex_assign(&c4_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1, 0U, 2, 0, 1), false);
  return c4_nameCaptureInfo;
}

static real_T c4_emlrt_marshallIn(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_nullptr, const char_T *c4_identifier)
{
  emlrtMsgIdentifier c4_thisId;
  real_T c4_y;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_y = c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_nullptr), &c4_thisId);
  sf_mex_destroy(&c4_nullptr);
  return c4_y;
}

static real_T c4_b_emlrt_marshallIn(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  real_T c4_d;
  real_T c4_y;
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_d, 1, 0, 0U, 0, 0U, 0);
  c4_y = c4_d;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void c4_c_emlrt_marshallIn(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_nullptr, const char_T *c4_identifier, real_T
  c4_y[2])
{
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_nullptr), &c4_thisId, c4_y);
  sf_mex_destroy(&c4_nullptr);
}

static void c4_d_emlrt_marshallIn(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  real_T c4_y[2])
{
  real_T c4_dv[2];
  int32_T c4_i;
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), c4_dv, 1, 0, 0U, 1, 0U, 2, 1, 2);
  for (c4_i = 0; c4_i < 2; c4_i++) {
    c4_y[c4_i] = c4_dv[c4_i];
  }

  sf_mex_destroy(&c4_u);
}

static void c4_slStringInitializeDynamicBuffers
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c4_chart_data_browse_helper(SFc4_flightControlSystemInstanceStruct
  *chartInstance, int32_T c4_ssIdNumber, const mxArray **c4_mxData, uint8_T
  *c4_isValueTooBig)
{
  real_T c4_d;
  *c4_mxData = NULL;
  *c4_mxData = NULL;
  *c4_isValueTooBig = 0U;
  switch (c4_ssIdNumber) {
   case 7U:
    sf_mex_assign(c4_mxData, sf_mex_create("mxData", *chartInstance->c4_len, 0,
      0U, 1, 0U, 2, 1, 2), false);
    break;

   case 4U:
    sf_mex_assign(c4_mxData, sf_mex_create("mxData", *chartInstance->c4_img, 11,
      0U, 1, 0U, 2, 48, 50), false);
    break;

   case 5U:
    c4_d = *chartInstance->c4_isCirclePresent;
    sf_mex_assign(c4_mxData, sf_mex_create("mxData", &c4_d, 0, 0U, 0, 0U, 0),
                  false);
    break;
  }
}

static const mxArray *c4_feval(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, const mxArray *c4_input0, const
  mxArray *c4_input1)
{
  const mxArray *c4_m = NULL;
  (void)chartInstance;
  c4_m = NULL;
  sf_mex_assign(&c4_m, sf_mex_call(c4_sp, NULL, "feval", 1U, 2U, 14, sf_mex_dup
    (c4_input0), 14, sf_mex_dup(c4_input1)), false);
  sf_mex_destroy(&c4_input0);
  sf_mex_destroy(&c4_input1);
  return c4_m;
}

static void c4_b_feval(SFc4_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1)
{
  (void)chartInstance;
  sf_mex_call(c4_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c4_input0), 14,
              sf_mex_dup(c4_input1));
  sf_mex_destroy(&c4_input0);
  sf_mex_destroy(&c4_input1);
}

static void init_dsm_address_info(SFc4_flightControlSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc4_flightControlSystemInstanceStruct
  *chartInstance)
{
  chartInstance->c4_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c4_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c4_len = (real_T (*)[2])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c4_img = (boolean_T (*)[2400])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c4_isCirclePresent = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c4_flightControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2737623148U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3993450414U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3126807784U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1538224522U);
}

mxArray *sf_c4_flightControlSystem_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,5);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.IppfilterBuildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.ImfilterBuildable"));
  mxSetCell(mxcell3p, 2, mxCreateString(
             "images.internal.coder.buildable.GetnumcoresBuildable"));
  mxSetCell(mxcell3p, 3, mxCreateString(
             "images.internal.coder.buildable.CannyThresholdingTbbBuildable"));
  mxSetCell(mxcell3p, 4, mxCreateString(
             "images.internal.coder.buildable.IppreconstructBuildable"));
  return(mxcell3p);
}

mxArray *sf_c4_flightControlSystem_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("ippfilter_real32");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c4_flightControlSystem_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c4_flightControlSystem(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiB+wcjAwAakOYCYiQECWKF8RqgYI1ycBS6uAMQllQWpIPHiomTPFCCdl5gL5ie"
    "WVnjmpeWDzbdgQJjPhsV8RiTzOaHiEPDBnjL9Ig4g/Q5I+lmw6OdH0i8A5WcWO2cWJeekBhSlFq"
    "fmlYD9AQuvgfOPDNg/BgT8w4ziH2aGnNQ8uPsBJJsXig=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c4_flightControlSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "seCXcg1PXLIirMJv7rzjKQC";
}

static void sf_opaque_initialize_c4_flightControlSystem(void *chartInstanceVar)
{
  initialize_params_c4_flightControlSystem
    ((SFc4_flightControlSystemInstanceStruct*) chartInstanceVar);
  initialize_c4_flightControlSystem((SFc4_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c4_flightControlSystem(void *chartInstanceVar)
{
  enable_c4_flightControlSystem((SFc4_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c4_flightControlSystem(void *chartInstanceVar)
{
  disable_c4_flightControlSystem((SFc4_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c4_flightControlSystem(void *chartInstanceVar)
{
  sf_gateway_c4_flightControlSystem((SFc4_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c4_flightControlSystem(SimStruct*
  S)
{
  return get_sim_state_c4_flightControlSystem
    ((SFc4_flightControlSystemInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c4_flightControlSystem(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c4_flightControlSystem((SFc4_flightControlSystemInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c4_flightControlSystem(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc4_flightControlSystemInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_flightControlSystem_optimization_info();
    }

    mdl_cleanup_runtime_resources_c4_flightControlSystem
      ((SFc4_flightControlSystemInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c4_flightControlSystem(void *chartInstanceVar)
{
  mdl_start_c4_flightControlSystem((SFc4_flightControlSystemInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc4_flightControlSystemInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c4_flightControlSystem(void
  *chartInstanceVar)
{
  mdl_terminate_c4_flightControlSystem((SFc4_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c4_flightControlSystem(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c4_flightControlSystem
      ((SFc4_flightControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c4_flightControlSystem_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrdWE1z20QYXrshQ5nSjxmG9tAZeuDAhRnawsCBjySyDYaEmMopnV46a+m1tGS1UvfDjnvlT/A",
    "TuPE/uHDgwi9gODEcOfKuLDuOIhKtDJOAZhRlJT/7vvvoeT9WpNXfI3hcx/PeHUI28foynm0yP1",
    "4qxq2Vc35/g3xYjAevEBLEVOq+GKfE/QjSECIQvhmP2ZEjVphkQCVNVAO7gibwCFTKjWapcHOei",
    "TFIEAFOkKVSO9lVLDGcicOeEYG1rL6OWRD7cWp4uIMT0nBf8Nnf2c2MHqDFDpMQ6B5AqGOZmiju",
    "cRqdzYLUUy+G4FCZxJkrBdo3mV2q2jNcs4xD9wiCvlCaIgvqnPX6mmrw9JGzQpjyF+g0yTijoj7",
    "XMVU+ZKgODQdZiH/3jUb2atpFeyMmqE4lo7ybcM8qvCZ2wNHPPZQ1d+ZZJ7oDIxNFTESWXWkSEL",
    "h+1EkNrsZeOgFJI9gXjjFoV9c9yl/wUpf1Y7BvZdkoBk0yfyuqETa3250gQ6qh3V4gPMq5csMO0",
    "2wXJsBz+x2qaQPs3L4DWCkWDtPHVNoocIwkI9hzAwXWS0XI6r/hSQmVJ9wvMXnWgLPESgpCpHnp",
    "+nKi8zRplE4TD8Oos7tb095pbF9okGMaQO3cJylTgA7nunK0GzJFR9yikSWdr7L2DCAaQ4kaG9G",
    "ZpvIQOXZNssdc2UhwQ0MYQQc05Amji+p+TLmp6XOiMMNZeRwozFhudhFr46cROKBBDKGtJ4zDHi",
    "g7gaqdn7GObONqJ0zPOqACybK6kWQUhFhILEvDWQYH4lCkU9GTaeIXHcEZugLArEGlwLKwg2VJz",
    "nrofD2vJTwfWmU1ac8SqjkdWW18CgIri12rrYQ0wKjqCmzd0KF1sD57gaVdKKY0tlOzbh4DYd6P",
    "3mm59aO3ivHDZSz11VDim6JYhgV2StujvNmDIUsgv+FT7Cnmw+Kwdt8hx3avts+228b/Wg1xZE3",
    "cZyu4jQp+Xl/B3SzGwbvPxpxFsU3CWqbcnyHvyWk/rtXgu8r/Mo6cwh3zvLi+tYJvVdglK9d13s",
    "/WCu7Vkp2NEm6z4OzprZ2PHn2vfvz2h19/f/Pnn4J17H/XdtPz9WJ8d9GfLSvY5FSSr6OH2yU93",
    "M77eu9JEN0fPNntM7n3+eR9+eKbL77y8vl+Oyf+2iV/F/fv4akxweX5Ugb9sNhr2TE18z2Anf+D",
    "FX83z+Hj6oqeCPnjk/Xwr22V9VDF140SXzfm+wImAw4DCQq7gxM6vrj13N0q67JqPVdOrOcK4SB",
    "O+H/Z895F5dmL9LNOHm41xLXJv5f3/0ncuutzrS//9d+flQdI6fc3L/E6ytemfcZlW9cvxK0PeK",
    "MYf7z8BuDFjIcVu5DiMW4UxlVP/yf6/tORv0Xf07X8FR8xnz7cFpTPcNsx39YVtwfSfj9bPpJAV",
    "fXe7iLqEKnoY6vq/LVSfNvxlIkwnaq37z9478E6de0viw0LoQ==",
    ""
  };

  static char newstr [1477] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c4_flightControlSystem(SimStruct *S)
{
  const char* newstr = sf_c4_flightControlSystem_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(1027739994U));
  ssSetChecksum1(S,(3396577362U));
  ssSetChecksum2(S,(4008095619U));
  ssSetChecksum3(S,(1674564388U));
}

static void mdlRTW_c4_flightControlSystem(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c4_flightControlSystem(SimStruct *S)
{
  SFc4_flightControlSystemInstanceStruct *chartInstance;
  chartInstance = (SFc4_flightControlSystemInstanceStruct *)utMalloc(sizeof
    (SFc4_flightControlSystemInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc4_flightControlSystemInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c4_flightControlSystem;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c4_flightControlSystem;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c4_flightControlSystem;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c4_flightControlSystem;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c4_flightControlSystem;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c4_flightControlSystem;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c4_flightControlSystem;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c4_flightControlSystem;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c4_flightControlSystem;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c4_flightControlSystem;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c4_flightControlSystem;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c4_flightControlSystem;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c4_flightControlSystem(chartInstance);
}

void c4_flightControlSystem_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c4_flightControlSystem(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c4_flightControlSystem(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c4_flightControlSystem(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c4_flightControlSystem_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
