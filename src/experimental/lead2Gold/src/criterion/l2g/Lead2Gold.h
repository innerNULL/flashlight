#include "experimental/lead2Gold/src/criterion/l2g/AutoSegBeamNoiseCriterion.h"
#include "experimental/lead2Gold/src/criterion/l2g/CtcBeamNoiseCriterion.h"
#include "experimental/lead2Gold/src/criterion/l2g/NoiseTrie.h"
#include "experimental/lead2Gold/src/criterion/l2g/NoiseLMZero.h"
#include "experimental/lead2Gold/src/criterion/l2g/NoiseLMLetterSwapPretrain.h"
#include "experimental/lead2Gold/src/criterion/l2g/EncDecCriterion.h"
#include "experimental/lead2Gold/src/criterion/l2g/EncDecCriterionMulti.h"
#include "experimental/lead2Gold/src/criterion/l2g/TransformerBlockSimple.h"
#include "experimental/lead2Gold/src/criterion/l2g/TransformerBlockAttend.h"
#include "experimental/lead2Gold/src/criterion/l2g/TransformerBlockMultiAttend.h"
//#include "experimental/lead2Gold/src/criterion/l2g/AnalyseBeam.h"