/* Include files */

#include "modelInterface.h"
#include "m_vrOCwjO4ldbfhL0VOUIsrH.h"
#include <string.h>
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 1,     /* lineNo */
  "arduinoBLEReceive",                 /* fcnName */
  "C:\\ProgramData\\MATLAB\\SupportPackages\\R2022a\\toolbox\\target\\supportpackages\\arduinobase\\+codertarget\\+arduinobase\\+internal\\ardu"
  "inoBLEReceive.p"                    /* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "SourceSampleTime",                  /* fcnName */
  "D:\\FILIPPO\\SOFTWARE\\MATLAB\\toolbox\\realtime\\realtime\\+realtime\\+internal\\SourceSampleTime.p"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "D:\\FILIPPO\\SOFTWARE\\MATLAB\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\System.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "D:\\FILIPPO\\SOFTWARE\\MATLAB\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "D:\\FILIPPO\\SOFTWARE\\MATLAB\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 20,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 41,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 46,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 48,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 54,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 62,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtMCInfo emlrtMCI = { 27,    /* lineNo */
  5,                                   /* colNo */
  "error",                             /* fName */
  "D:\\FILIPPO\\SOFTWARE\\MATLAB\\toolbox\\eml\\lib\\matlab\\lang\\error.m"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 1,   /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "D:\\FILIPPO\\SOFTWARE\\MATLAB\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pName */
};

static emlrtRSInfo l_emlrtRSI = { 27,  /* lineNo */
  "error",                             /* fcnName */
  "D:\\FILIPPO\\SOFTWARE\\MATLAB\\toolbox\\eml\\lib\\matlab\\lang\\error.m"/* pathName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH
  *moduleInstance);
static void mw__internal__call__setup(InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH
  *moduleInstance, const emlrtStack *sp, real_T SampleTime);
static void SourceSampleTime_set_SampleTime(const emlrtStack *sp,
  codertarget_arduinobase_internal_arduinoBLEReceive *obj, real_T newTime);
static void SystemCore_setup(const emlrtStack *sp,
  codertarget_arduinobase_internal_arduinoBLEReceive *obj);
static void SystemCore_checkTunablePropChange(const emlrtStack *sp,
  codertarget_arduinobase_internal_arduinoBLEReceive *obj);
static void mw__internal__call__reset(InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH
  *moduleInstance, const emlrtStack *sp, real_T SampleTime);
static void mw__internal__call__step(InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH
  *moduleInstance, const emlrtStack *sp, real_T SampleTime, int8_T c_y0[2],
  uint8_T *c_y1);
static const mxArray *emlrt_marshallOut(InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH
  *moduleInstance);
static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH *moduleInstance);
static void emlrt_marshallIn(InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH
  *moduleInstance, const emlrtStack *sp, const mxArray *u);
static codertarget_arduinobase_internal_arduinoBLEReceive b_emlrt_marshallIn(
  const emlrtStack *sp, const mxArray *b_sysobj, const char_T *identifier);
static codertarget_arduinobase_internal_arduinoBLEReceive c_emlrt_marshallIn(
  const emlrtStack *sp, const mxArray *u, const emlrtMsgIdentifier *parentId);
static int32_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static boolean_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static boolean_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier);
static void cgxe_mdl_set_sim_state(InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH
  *moduleInstance, const mxArray *st);
static void error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                  emlrtMCInfo *location);
static const mxArray *message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location);
static const mxArray *getString(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location);
static const mxArray *b_message(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location);
static int32_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static boolean_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void init_simulink_io_address(InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T *SampleTime;
  init_simulink_io_address(moduleInstance);
  SampleTime = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 0);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__setup(moduleInstance, &st, *SampleTime);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_initialize(InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T *SampleTime;
  SampleTime = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 0);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__reset(moduleInstance, &st, *SampleTime);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_outputs(InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T *SampleTime;
  SampleTime = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 0);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__step(moduleInstance, &st, *SampleTime,
    *moduleInstance->b_y0, moduleInstance->b_y1);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH
  *moduleInstance)
{
  cgxertSetGcb(moduleInstance->S, -1, -1);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void mw__internal__call__setup(InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH
  *moduleInstance, const emlrtStack *sp, real_T SampleTime)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  boolean_T flag;
  st.prev = sp;
  st.tls = sp->tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &f_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    moduleInstance->sysobj.TunablePropsChanged = false;
    e_st.site = &e_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    b_st.site = &emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
    st.site = &g_emlrtRSI;
    b_st.site = &d_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    st.site = &g_emlrtRSI;
    SourceSampleTime_set_SampleTime(&st, &moduleInstance->sysobj, SampleTime);
  }

  st.site = &h_emlrtRSI;
  SystemCore_setup(&st, &moduleInstance->sysobj);
}

static void SourceSampleTime_set_SampleTime(const emlrtStack *sp,
  codertarget_arduinobase_internal_arduinoBLEReceive *obj, real_T newTime)
{
  static const int32_T iv[2] = { 1, 50 };

  static const int32_T iv1[2] = { 1, 52 };

  static const int32_T iv2[2] = { 1, 61 };

  static const int32_T iv3[2] = { 1, 76 };

  static char_T d_varargin_2[76] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ', 's',
    'a', 'm', 'p', 'l', 'e', ' ', 't', 'i', 'm', 'e', '.', ' ', 'S', 'a', 'm',
    'p', 'l', 'e', ' ', 't', 'i', 'm', 'e', ' ', 'm', 'u', 's', 't', ' ', 'b',
    'e', ' ', 'n', 'o', 'n', '-', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e', ' ',
    'o', 'r', ' ', '-', '1', ' ', '(', 'f', 'o', 'r', ' ', 'i', 'n', 'h', 'e',
    'r', 'i', 't', 'e', 'd', ')', '.' };

  static char_T c_varargin_2[61] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ', 's',
    'a', 'm', 'p', 'l', 'e', ' ', 't', 'i', 'm', 'e', '.', ' ', 'S', 'a', 'm',
    'p', 'l', 'e', ' ', 't', 'i', 'm', 'e', ' ', 'm', 'u', 's', 't', ' ', 'b',
    'e', ' ', 'a', ' ', 'r', 'e', 'a', 'l', ' ', 's', 'c', 'a', 'l', 'a', 'r',
    ' ', 'v', 'a', 'l', 'u', 'e', '.' };

  static char_T d_varargin_1[52] = { 'S', 'o', 'u', 'r', 'c', 'e', 'S', 'a', 'm',
    'p', 'l', 'e', 'T', 'i', 'm', 'e', ':', 'b', 'u', 'i', 'l', 'd', ':', 'I',
    'n', 'v', 'a', 'l', 'i', 'd', 'S', 'a', 'm', 'p', 'l', 'e', 'T', 'i', 'm',
    'e', 'N', 'e', 'e', 'd', 'P', 'o', 's', 'i', 't', 'i', 'v', 'e' };

  static char_T c_varargin_1[50] = { 'S', 'o', 'u', 'r', 'c', 'e', 'S', 'a', 'm',
    'p', 'l', 'e', 'T', 'i', 'm', 'e', ':', 'b', 'u', 'i', 'l', 'd', ':', 'I',
    'n', 'v', 'a', 'l', 'i', 'd', 'S', 'a', 'm', 'p', 'l', 'e', 'T', 'i', 'm',
    'e', 'N', 'e', 'e', 'd', 'S', 'c', 'a', 'l', 'a', 'r' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_varargin_2[76];
  char_T varargin_2[61];
  char_T b_varargin_1[52];
  char_T varargin_1[50];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (((!muDoubleScalarIsInf(newTime)) && (!muDoubleScalarIsNaN(newTime))) ||
      muDoubleScalarIsInf(newTime)) {
  } else {
    st.site = &b_emlrtRSI;
    for (i = 0; i < 61; i++) {
      varargin_2[i] = c_varargin_2[i];
    }

    for (i = 0; i < 50; i++) {
      varargin_1[i] = c_varargin_1[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 50, m, &varargin_1[0]);
    emlrtAssign(&y, m);
    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 61, m, &varargin_2[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &l_emlrtRSI;
    error(&b_st, y, c_y, &emlrtMCI);
  }

  if ((newTime < 0.0) && (newTime != -1.0)) {
    st.site = &b_emlrtRSI;
    memcpy(&b_varargin_2[0], &d_varargin_2[0], 76U * sizeof(char_T));
    for (i = 0; i < 52; i++) {
      b_varargin_1[i] = d_varargin_1[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 52, m, &b_varargin_1[0]);
    emlrtAssign(&b_y, m);
    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&st, 76, m, &b_varargin_2[0]);
    emlrtAssign(&d_y, m);
    b_st.site = &l_emlrtRSI;
    error(&b_st, b_y, d_y, &emlrtMCI);
  }

  obj->SampleTime = newTime;
}

static void SystemCore_setup(const emlrtStack *sp,
  codertarget_arduinobase_internal_arduinoBLEReceive *obj)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T b_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[5] = { 's', 'e', 't', 'u', 'p' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[51];
  char_T c_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  if (obj->isInitialized != 0) {
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((void *)sp, 51, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((void *)sp, 51, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a((void *)sp, 5, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &e_emlrtRSI;
    error(&st, y, getString(&st, message(&st, b_y, c_y, &b_emlrtMCI),
           &b_emlrtMCI), &b_emlrtMCI);
  }

  obj->isInitialized = 1;
  st.site = &e_emlrtRSI;
  SystemCore_checkTunablePropChange(&st, obj);
  obj->TunablePropsChanged = false;
}

static void SystemCore_checkTunablePropChange(const emlrtStack *sp,
  codertarget_arduinobase_internal_arduinoBLEReceive *obj)
{
  static const int32_T iv[2] = { 1, 44 };

  static const int32_T iv1[2] = { 1, 44 };

  static char_T b_u[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[44];
  st.prev = sp;
  st.tls = sp->tls;
  if (obj->TunablePropsChanged) {
    for (i = 0; i < 44; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((void *)sp, 44, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 44; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((void *)sp, 44, m, &u[0]);
    emlrtAssign(&b_y, m);
    st.site = &e_emlrtRSI;
    error(&st, y, getString(&st, b_message(&st, b_y, &b_emlrtMCI), &b_emlrtMCI),
          &b_emlrtMCI);
  }
}

static void mw__internal__call__reset(InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH
  *moduleInstance, const emlrtStack *sp, real_T SampleTime)
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 44 };

  static const int32_T iv2[2] = { 1, 45 };

  static const int32_T iv3[2] = { 1, 44 };

  static const int32_T iv4[2] = { 1, 5 };

  static char_T c_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  static char_T f_u[5] = { 'r', 'e', 's', 'e', 't' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[45];
  char_T b_u[44];
  char_T e_u[5];
  boolean_T tunablePropChangedBeforeResetImpl;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &f_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    moduleInstance->sysobj.TunablePropsChanged = false;
    e_st.site = &e_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    b_st.site = &emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
    st.site = &g_emlrtRSI;
    b_st.site = &d_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    st.site = &g_emlrtRSI;
    SourceSampleTime_set_SampleTime(&st, &moduleInstance->sysobj, SampleTime);
  }

  st.site = &i_emlrtRSI;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      u[i] = c_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&c_y, m);
    for (i = 0; i < 5; i++) {
      e_u[i] = f_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &e_u[0]);
    emlrtAssign(&e_y, m);
    b_st.site = &e_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, c_y, e_y, &b_emlrtMCI),
           &b_emlrtMCI), &b_emlrtMCI);
  }

  tunablePropChangedBeforeResetImpl = moduleInstance->sysobj.TunablePropsChanged;
  if ((int32_T)tunablePropChangedBeforeResetImpl != (int32_T)
      moduleInstance->sysobj.TunablePropsChanged) {
    for (i = 0; i < 44; i++) {
      b_u[i] = d_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 44, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 44; i++) {
      b_u[i] = d_u[i];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&st, 44, m, &b_u[0]);
    emlrtAssign(&d_y, m);
    b_st.site = &e_emlrtRSI;
    error(&b_st, b_y, getString(&b_st, b_message(&b_st, d_y, &b_emlrtMCI),
           &b_emlrtMCI), &b_emlrtMCI);
  }
}

static void mw__internal__call__step(InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH
  *moduleInstance, const emlrtStack *sp, real_T SampleTime, int8_T c_y0[2],
  uint8_T *c_y1)
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 4 };

  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[4] = { 's', 't', 'e', 'p' };

  codertarget_arduinobase_internal_arduinoBLEReceive *obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[45];
  char_T c_u[4];
  boolean_T flag;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &f_emlrtRSI;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    moduleInstance->sysobj.TunablePropsChanged = false;
    e_st.site = &e_emlrtRSI;
    moduleInstance->sysobj.isInitialized = 0;
    b_st.site = &emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
    st.site = &g_emlrtRSI;
    b_st.site = &d_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    st.site = &g_emlrtRSI;
    SourceSampleTime_set_SampleTime(&st, &moduleInstance->sysobj, SampleTime);
  }

  if (moduleInstance->sysobj.SampleTime != SampleTime) {
    st.site = &j_emlrtRSI;
    b_st.site = &d_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    st.site = &j_emlrtRSI;
    SourceSampleTime_set_SampleTime(&st, &moduleInstance->sysobj, SampleTime);
  }

  st.site = &k_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 4; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 4, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &e_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &b_emlrtMCI),
           &b_emlrtMCI), &b_emlrtMCI);
  }

  if (moduleInstance->sysobj.isInitialized != 1) {
    b_st.site = &e_emlrtRSI;
    c_st.site = &e_emlrtRSI;
    SystemCore_setup(&c_st, obj);
  }

  b_st.site = &e_emlrtRSI;
  if (moduleInstance->sysobj.TunablePropsChanged) {
    moduleInstance->sysobj.TunablePropsChanged = false;
  }

  b_st.site = &e_emlrtRSI;
  SystemCore_checkTunablePropChange(&b_st, obj);
  for (i = 0; i < 2; i++) {
    c_y0[i] = 0;
  }

  *c_y1 = 0U;
}

static const mxArray *emlrt_marshallOut(InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH
  *moduleInstance)
{
  static const char_T *sv[3] = { "isInitialized", "TunablePropsChanged",
    "SampleTime" };

  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  const mxArray *y;
  real_T c_u;
  int32_T u;
  boolean_T b_u;
  y = NULL;
  emlrtAssign(&y, emlrtCreateCellMatrix(2, 1));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 3, (const char_T **)&sv[0]));
  u = moduleInstance->sysobj.isInitialized;
  c_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m) = u;
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(b_y, 0, (const char_T *)"isInitialized", c_y, 0);
  b_u = moduleInstance->sysobj.TunablePropsChanged;
  d_y = NULL;
  m = emlrtCreateLogicalScalar(b_u);
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(b_y, 0, (const char_T *)"TunablePropsChanged", d_y, 1);
  c_u = moduleInstance->sysobj.SampleTime;
  e_y = NULL;
  m = emlrtCreateDoubleScalar(c_u);
  emlrtAssign(&e_y, m);
  emlrtSetFieldR2017b(b_y, 0, (const char_T *)"SampleTime", e_y, 2);
  emlrtSetCell(y, 0, b_y);
  f_y = NULL;
  m = emlrtCreateLogicalScalar(moduleInstance->sysobj_not_empty);
  emlrtAssign(&f_y, m);
  emlrtSetCell(y, 1, f_y);
  return y;
}

static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH *moduleInstance)
{
  const mxArray *st;
  st = NULL;
  emlrtAssign(&st, emlrt_marshallOut(moduleInstance));
  return st;
}

static void emlrt_marshallIn(InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH
  *moduleInstance, const emlrtStack *sp, const mxArray *u)
{
  emlrtMsgIdentifier thisId;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  thisId.fIdentifier = "sysobj";
  moduleInstance->sysobj = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((void *)
    sp, &thisId, u, 0)), "sysobj");
  thisId.fIdentifier = "sysobj_not_empty";
  moduleInstance->sysobj_not_empty = g_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetCell((void *)sp, &thisId, u, 1)), "sysobj_not_empty");
  emlrtDestroyArray(&u);
}

static codertarget_arduinobase_internal_arduinoBLEReceive b_emlrt_marshallIn(
  const emlrtStack *sp, const mxArray *b_sysobj, const char_T *identifier)
{
  codertarget_arduinobase_internal_arduinoBLEReceive y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = c_emlrt_marshallIn(sp, emlrtAlias(b_sysobj), &thisId);
  emlrtDestroyArray(&b_sysobj);
  return y;
}

static codertarget_arduinobase_internal_arduinoBLEReceive c_emlrt_marshallIn(
  const emlrtStack *sp, const mxArray *u, const emlrtMsgIdentifier *parentId)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[3] = { "isInitialized", "TunablePropsChanged",
    "SampleTime" };

  codertarget_arduinobase_internal_arduinoBLEReceive y;
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((void *)sp, parentId, u, 3, (const char_T **)
    &fieldNames[0], 0U, (void *)&dims);
  thisId.fIdentifier = "isInitialized";
  y.isInitialized = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b((void *)
    sp, u, 0, 0, (const char_T *)"isInitialized")), &thisId);
  thisId.fIdentifier = "TunablePropsChanged";
  y.TunablePropsChanged = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((void *)sp, u, 0, 1, (const char_T *)"TunablePropsChanged")), &thisId);
  thisId.fIdentifier = "SampleTime";
  y.SampleTime = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b((void *)
    sp, u, 0, 2, (const char_T *)"SampleTime")), &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static int32_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = h_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = j_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  boolean_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = e_emlrt_marshallIn(sp, emlrtAlias(b_sysobj_not_empty), &thisId);
  emlrtDestroyArray(&b_sysobj_not_empty);
  return y;
}

static void cgxe_mdl_set_sim_state(InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH
  *moduleInstance, const mxArray *st)
{
  emlrtStack b_st = { NULL,            /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  b_st.tls = moduleInstance->emlrtRootTLSGlobal;
  emlrt_marshallIn(moduleInstance, &b_st, emlrtAlias(st));
  emlrtDestroyArray(&st);
}

static void error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                  emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = m;
  pArrays[1] = m1;
  emlrtCallMATLABR2012b((void *)sp, 0, NULL, 2, &pArrays[0], (const char_T *)
                        "error", true, location);
}

static const mxArray *message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((void *)sp, 1, &m, 2, &pArrays[0], (const char_T *)
    "message", true, location);
}

static const mxArray *getString(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = m1;
  return emlrtCallMATLABR2012b((void *)sp, 1, &m, 1, &pArray, (const char_T *)
    "getString", true, location);
}

static const mxArray *b_message(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = m1;
  return emlrtCallMATLABR2012b((void *)sp, 1, &m, 1, &pArray, (const char_T *)
    "message", true, location);
}

static int32_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  int32_T ret;
  emlrtCheckBuiltInR2012b((void *)sp, msgId, src, (const char_T *)"int32", false,
    0U, (void *)&dims);
  ret = *(int32_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static boolean_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  boolean_T ret;
  emlrtCheckBuiltInR2012b((void *)sp, msgId, src, (const char_T *)"logical",
    false, 0U, (void *)&dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b((void *)sp, msgId, src, (const char_T *)"double",
    false, 0U, (void *)&dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void init_simulink_io_address(InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->b_y0 = (int8_T (*)[2])cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
  moduleInstance->b_y1 = (uint8_T *)cgxertGetOutputPortSignal(moduleInstance->S,
    1);
}

/* CGXE Glue Code */
static void mdlOutputs_vrOCwjO4ldbfhL0VOUIsrH(SimStruct *S, int_T tid)
{
  InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH *moduleInstance =
    (InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_vrOCwjO4ldbfhL0VOUIsrH(SimStruct *S)
{
  InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH *moduleInstance =
    (InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_vrOCwjO4ldbfhL0VOUIsrH(SimStruct *S, int_T tid)
{
  InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH *moduleInstance =
    (InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static mxArray* getSimState_vrOCwjO4ldbfhL0VOUIsrH(SimStruct *S)
{
  mxArray* mxSS;
  InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH *moduleInstance =
    (InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH *)cgxertGetRuntimeInstance(S);
  mxSS = (mxArray *) cgxe_mdl_get_sim_state(moduleInstance);
  return mxSS;
}

static void setSimState_vrOCwjO4ldbfhL0VOUIsrH(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH *moduleInstance =
    (InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_set_sim_state(moduleInstance, emlrtAlias(ss));
}

static void mdlTerminate_vrOCwjO4ldbfhL0VOUIsrH(SimStruct *S)
{
  InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH *moduleInstance =
    (InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_vrOCwjO4ldbfhL0VOUIsrH(SimStruct *S)
{
  InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH *moduleInstance =
    (InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_vrOCwjO4ldbfhL0VOUIsrH(SimStruct *S)
{
  InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH *moduleInstance =
    (InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_vrOCwjO4ldbfhL0VOUIsrH(SimStruct *S)
{
  InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH *moduleInstance =
    (InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH *)calloc(1, sizeof
    (InstanceStruct_vrOCwjO4ldbfhL0VOUIsrH));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_vrOCwjO4ldbfhL0VOUIsrH);
  ssSetmdlInitializeConditions(S, mdlInitialize_vrOCwjO4ldbfhL0VOUIsrH);
  ssSetmdlUpdate(S, mdlUpdate_vrOCwjO4ldbfhL0VOUIsrH);
  ssSetmdlTerminate(S, mdlTerminate_vrOCwjO4ldbfhL0VOUIsrH);
  ssSetmdlEnable(S, mdlEnable_vrOCwjO4ldbfhL0VOUIsrH);
  ssSetmdlDisable(S, mdlDisable_vrOCwjO4ldbfhL0VOUIsrH);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_vrOCwjO4ldbfhL0VOUIsrH(SimStruct *S)
{
}

void method_dispatcher_vrOCwjO4ldbfhL0VOUIsrH(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_vrOCwjO4ldbfhL0VOUIsrH(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_vrOCwjO4ldbfhL0VOUIsrH(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_vrOCwjO4ldbfhL0VOUIsrH(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_vrOCwjO4ldbfhL0VOUIsrH(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: vrOCwjO4ldbfhL0VOUIsrH.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_vrOCwjO4ldbfhL0VOUIsrH_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxArray * elem_10;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,1,elem_3);
  elem_4 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_4);
  elem_5 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_5);
  elem_6 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_6);
  elem_7 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_7);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_8 = mxCreateCellMatrix(1,1);
  elem_9 = mxCreateString("codertarget.arduinobase.internal.arduinoBLEReceive");
  mxSetCell(elem_8,0,elem_9);
  mxSetCell(mxBIArgs,1,elem_8);
  elem_10 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_10);
  return mxBIArgs;
}

mxArray *cgxe_vrOCwjO4ldbfhL0VOUIsrH_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString(
    "codertarget.arduinobase.internal.arduinoBLEReceive");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
