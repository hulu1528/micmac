// File Automatically generated by eLiSe
#include "StdAfx.h"
#include "cGen2DBundleEgProj_Deg1.h"


cGen2DBundleEgProj_Deg1::cGen2DBundleEgProj_Deg1():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("CX",3,6));
   AddIntRef (cIncIntervale("CY",6,9));
   AddIntRef (cIncIntervale("Tmp_PTer",0,3));
   Close(false);
}



void cGen2DBundleEgProj_Deg1::ComputeVal()
{
   double tmp0_ = mCompCoord[0];
   double tmp1_ = tmp0_-mLocPTerInit_x;
   double tmp2_ = mCompCoord[1];
   double tmp3_ = tmp2_-mLocPTerInit_y;
   double tmp4_ = mCompCoord[2];
   double tmp5_ = tmp4_-mLocPTerInit_z;
   double tmp6_ = mLocGradX_x*(tmp1_);
   double tmp7_ = mLocProjInit_x+tmp6_;
   double tmp8_ = mLocGradY_x*(tmp3_);
   double tmp9_ = tmp7_+tmp8_;
   double tmp10_ = mLocGradZ_x*(tmp5_);
   double tmp11_ = tmp9_+tmp10_;
   double tmp12_ = mLocGradX_y*(tmp1_);
   double tmp13_ = mLocProjInit_y+tmp12_;
   double tmp14_ = mLocGradY_y*(tmp3_);
   double tmp15_ = tmp13_+tmp14_;
   double tmp16_ = mLocGradZ_y*(tmp5_);
   double tmp17_ = tmp15_+tmp16_;
   double tmp18_ = (tmp17_)-mLocCentrApp_y;
   double tmp19_ = (tmp18_)/mLocAmplApp;
   double tmp20_ = (tmp11_)-mLocCentrApp_x;
   double tmp21_ = (tmp20_)/mLocAmplApp;

  mVal[0] = (tmp11_+mCompCoord[3]+mCompCoord[4]*(tmp19_)+mCompCoord[5]*(tmp21_))-mLocPIm_x;

  mVal[1] = (tmp17_+mCompCoord[6]+mCompCoord[7]*(tmp19_)+mCompCoord[8]*(tmp21_))-mLocPIm_y;

}


void cGen2DBundleEgProj_Deg1::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[0];
   double tmp1_ = tmp0_-mLocPTerInit_x;
   double tmp2_ = mCompCoord[1];
   double tmp3_ = tmp2_-mLocPTerInit_y;
   double tmp4_ = mCompCoord[2];
   double tmp5_ = tmp4_-mLocPTerInit_z;
   double tmp6_ = mLocGradX_x*(tmp1_);
   double tmp7_ = mLocProjInit_x+tmp6_;
   double tmp8_ = mLocGradY_x*(tmp3_);
   double tmp9_ = tmp7_+tmp8_;
   double tmp10_ = mLocGradZ_x*(tmp5_);
   double tmp11_ = tmp9_+tmp10_;
   double tmp12_ = mCompCoord[4];
   double tmp13_ = ElSquare(mLocAmplApp);
   double tmp14_ = mCompCoord[5];
   double tmp15_ = mLocGradX_y*(tmp1_);
   double tmp16_ = mLocProjInit_y+tmp15_;
   double tmp17_ = mLocGradY_y*(tmp3_);
   double tmp18_ = tmp16_+tmp17_;
   double tmp19_ = mLocGradZ_y*(tmp5_);
   double tmp20_ = tmp18_+tmp19_;
   double tmp21_ = (tmp20_)-mLocCentrApp_y;
   double tmp22_ = (tmp21_)/mLocAmplApp;
   double tmp23_ = (tmp11_)-mLocCentrApp_x;
   double tmp24_ = (tmp23_)/mLocAmplApp;
   double tmp25_ = mLocGradX_y*mLocAmplApp;
   double tmp26_ = (tmp25_)/tmp13_;
   double tmp27_ = mCompCoord[7];
   double tmp28_ = mLocGradX_x*mLocAmplApp;
   double tmp29_ = (tmp28_)/tmp13_;
   double tmp30_ = mCompCoord[8];
   double tmp31_ = mLocGradY_y*mLocAmplApp;
   double tmp32_ = (tmp31_)/tmp13_;
   double tmp33_ = mLocGradY_x*mLocAmplApp;
   double tmp34_ = (tmp33_)/tmp13_;
   double tmp35_ = mLocGradZ_y*mLocAmplApp;
   double tmp36_ = (tmp35_)/tmp13_;
   double tmp37_ = mLocGradZ_x*mLocAmplApp;
   double tmp38_ = (tmp37_)/tmp13_;

  mVal[0] = (tmp11_+mCompCoord[3]+tmp12_*(tmp22_)+tmp14_*(tmp24_))-mLocPIm_x;

  mCompDer[0][0] = mLocGradX_x+(tmp26_)*tmp12_+(tmp29_)*tmp14_;
  mCompDer[0][1] = mLocGradY_x+(tmp32_)*tmp12_+(tmp34_)*tmp14_;
  mCompDer[0][2] = mLocGradZ_x+(tmp36_)*tmp12_+(tmp38_)*tmp14_;
  mCompDer[0][3] = 1;
  mCompDer[0][4] = tmp22_;
  mCompDer[0][5] = tmp24_;
  mCompDer[0][6] = 0;
  mCompDer[0][7] = 0;
  mCompDer[0][8] = 0;
  mVal[1] = (tmp20_+mCompCoord[6]+tmp27_*(tmp22_)+tmp30_*(tmp24_))-mLocPIm_y;

  mCompDer[1][0] = mLocGradX_y+(tmp26_)*tmp27_+(tmp29_)*tmp30_;
  mCompDer[1][1] = mLocGradY_y+(tmp32_)*tmp27_+(tmp34_)*tmp30_;
  mCompDer[1][2] = mLocGradZ_y+(tmp36_)*tmp27_+(tmp38_)*tmp30_;
  mCompDer[1][3] = 0;
  mCompDer[1][4] = 0;
  mCompDer[1][5] = 0;
  mCompDer[1][6] = 1;
  mCompDer[1][7] = tmp22_;
  mCompDer[1][8] = tmp24_;
}


void cGen2DBundleEgProj_Deg1::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cGen2DBundleEgProj_Deg1 Has no Der Sec");
}

void cGen2DBundleEgProj_Deg1::SetAmplApp(double aVal){ mLocAmplApp = aVal;}
void cGen2DBundleEgProj_Deg1::SetCentrApp_x(double aVal){ mLocCentrApp_x = aVal;}
void cGen2DBundleEgProj_Deg1::SetCentrApp_y(double aVal){ mLocCentrApp_y = aVal;}
void cGen2DBundleEgProj_Deg1::SetGradX_x(double aVal){ mLocGradX_x = aVal;}
void cGen2DBundleEgProj_Deg1::SetGradX_y(double aVal){ mLocGradX_y = aVal;}
void cGen2DBundleEgProj_Deg1::SetGradY_x(double aVal){ mLocGradY_x = aVal;}
void cGen2DBundleEgProj_Deg1::SetGradY_y(double aVal){ mLocGradY_y = aVal;}
void cGen2DBundleEgProj_Deg1::SetGradZ_x(double aVal){ mLocGradZ_x = aVal;}
void cGen2DBundleEgProj_Deg1::SetGradZ_y(double aVal){ mLocGradZ_y = aVal;}
void cGen2DBundleEgProj_Deg1::SetPIm_x(double aVal){ mLocPIm_x = aVal;}
void cGen2DBundleEgProj_Deg1::SetPIm_y(double aVal){ mLocPIm_y = aVal;}
void cGen2DBundleEgProj_Deg1::SetPTerInit_x(double aVal){ mLocPTerInit_x = aVal;}
void cGen2DBundleEgProj_Deg1::SetPTerInit_y(double aVal){ mLocPTerInit_y = aVal;}
void cGen2DBundleEgProj_Deg1::SetPTerInit_z(double aVal){ mLocPTerInit_z = aVal;}
void cGen2DBundleEgProj_Deg1::SetProjInit_x(double aVal){ mLocProjInit_x = aVal;}
void cGen2DBundleEgProj_Deg1::SetProjInit_y(double aVal){ mLocProjInit_y = aVal;}



double * cGen2DBundleEgProj_Deg1::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "AmplApp") return & mLocAmplApp;
   if (aName == "CentrApp_x") return & mLocCentrApp_x;
   if (aName == "CentrApp_y") return & mLocCentrApp_y;
   if (aName == "GradX_x") return & mLocGradX_x;
   if (aName == "GradX_y") return & mLocGradX_y;
   if (aName == "GradY_x") return & mLocGradY_x;
   if (aName == "GradY_y") return & mLocGradY_y;
   if (aName == "GradZ_x") return & mLocGradZ_x;
   if (aName == "GradZ_y") return & mLocGradZ_y;
   if (aName == "PIm_x") return & mLocPIm_x;
   if (aName == "PIm_y") return & mLocPIm_y;
   if (aName == "PTerInit_x") return & mLocPTerInit_x;
   if (aName == "PTerInit_y") return & mLocPTerInit_y;
   if (aName == "PTerInit_z") return & mLocPTerInit_z;
   if (aName == "ProjInit_x") return & mLocProjInit_x;
   if (aName == "ProjInit_y") return & mLocProjInit_y;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cGen2DBundleEgProj_Deg1::mTheAuto("cGen2DBundleEgProj_Deg1",cGen2DBundleEgProj_Deg1::Alloc);


cElCompiledFonc *  cGen2DBundleEgProj_Deg1::Alloc()
{  return new cGen2DBundleEgProj_Deg1();
}

