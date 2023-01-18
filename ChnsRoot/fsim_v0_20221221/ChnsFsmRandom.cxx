#include "ChnsFsmRandom.h"
#include "TRandom3.h"

TRandom3* ChnsFsmRandom::Instance() {
  if (!frand)
    frand=new TRandom3();
  return frand;
}

TRandom3* ChnsFsmRandom::frand=0;
