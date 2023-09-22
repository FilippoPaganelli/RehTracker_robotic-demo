/* Include files */

#include "final_simulink_model_V3_cgxe.h"
#include "m_v6KtncLLObUM0n1CCfyAnC.h"
#include "m_5ceqiAnce4NA6Y1FparNJB.h"

unsigned int cgxe_final_simulink_model_V3_method_dispatcher(SimStruct* S, int_T
  method, void* data)
{
  if (ssGetChecksum0(S) == 492712747 &&
      ssGetChecksum1(S) == 1061064889 &&
      ssGetChecksum2(S) == 431398627 &&
      ssGetChecksum3(S) == 1573969365) {
    method_dispatcher_v6KtncLLObUM0n1CCfyAnC(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 1835895498 &&
      ssGetChecksum1(S) == 679878935 &&
      ssGetChecksum2(S) == 3062068022 &&
      ssGetChecksum3(S) == 2954182702) {
    method_dispatcher_5ceqiAnce4NA6Y1FparNJB(S, method, data);
    return 1;
  }

  return 0;
}
