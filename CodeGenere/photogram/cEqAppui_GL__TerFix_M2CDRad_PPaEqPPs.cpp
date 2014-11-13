// File Automatically generated by eLiSe
#include "StdAfx.h"
#include "cEqAppui_GL__TerFix_M2CDRad_PPaEqPPs.h"


cEqAppui_GL__TerFix_M2CDRad_PPaEqPPs::cEqAppui_GL__TerFix_M2CDRad_PPaEqPPs():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("Intr",0,8));
   AddIntRef (cIncIntervale("Orient",8,14));
   Close(false);
}



void cEqAppui_GL__TerFix_M2CDRad_PPaEqPPs::ComputeVal()
{
   double tmp0_ = mCompCoord[8];
   double tmp1_ = mCompCoord[9];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = cos(tmp0_);
   double tmp4_ = tmp3_*tmp2_;
   double tmp5_ = sin(tmp0_);
   double tmp6_ = tmp5_*tmp2_;
   double tmp7_ = sin(tmp1_);
   double tmp8_ = mCompCoord[10];
   double tmp9_ = sin(tmp8_);
   double tmp10_ = -(tmp9_);
   double tmp11_ = -(tmp7_);
   double tmp12_ = cos(tmp8_);
   double tmp13_ = mCompCoord[11];
   double tmp14_ = mLocXTer-tmp13_;
   double tmp15_ = -(tmp5_);
   double tmp16_ = tmp15_*tmp10_;
   double tmp17_ = tmp3_*tmp11_;
   double tmp18_ = tmp17_*tmp12_;
   double tmp19_ = tmp16_+tmp18_;
   double tmp20_ = tmp3_*tmp10_;
   double tmp21_ = tmp5_*tmp11_;
   double tmp22_ = tmp21_*tmp12_;
   double tmp23_ = tmp20_+tmp22_;
   double tmp24_ = tmp2_*tmp12_;
   double tmp25_ = mCompCoord[12];
   double tmp26_ = mLocYTer-tmp25_;
   double tmp27_ = mCompCoord[13];
   double tmp28_ = mLocZTer-tmp27_;
   double tmp29_ = tmp4_*mLocGL_0_0;
   double tmp30_ = tmp6_*mLocGL_1_0;
   double tmp31_ = tmp29_+tmp30_;
   double tmp32_ = tmp7_*mLocGL_2_0;
   double tmp33_ = tmp31_+tmp32_;
   double tmp34_ = (tmp33_)*(tmp14_);
   double tmp35_ = tmp4_*mLocGL_0_1;
   double tmp36_ = tmp6_*mLocGL_1_1;
   double tmp37_ = tmp35_+tmp36_;
   double tmp38_ = tmp7_*mLocGL_2_1;
   double tmp39_ = tmp37_+tmp38_;
   double tmp40_ = (tmp39_)*(tmp26_);
   double tmp41_ = tmp34_+tmp40_;
   double tmp42_ = tmp4_*mLocGL_0_2;
   double tmp43_ = tmp6_*mLocGL_1_2;
   double tmp44_ = tmp42_+tmp43_;
   double tmp45_ = tmp7_*mLocGL_2_2;
   double tmp46_ = tmp44_+tmp45_;
   double tmp47_ = (tmp46_)*(tmp28_);
   double tmp48_ = tmp41_+tmp47_;
   double tmp49_ = mCompCoord[0];
   double tmp50_ = (tmp19_)*mLocGL_0_0;
   double tmp51_ = (tmp23_)*mLocGL_1_0;
   double tmp52_ = tmp50_+tmp51_;
   double tmp53_ = tmp24_*mLocGL_2_0;
   double tmp54_ = tmp52_+tmp53_;
   double tmp55_ = (tmp54_)*(tmp14_);
   double tmp56_ = (tmp19_)*mLocGL_0_1;
   double tmp57_ = (tmp23_)*mLocGL_1_1;
   double tmp58_ = tmp56_+tmp57_;
   double tmp59_ = tmp24_*mLocGL_2_1;
   double tmp60_ = tmp58_+tmp59_;
   double tmp61_ = (tmp60_)*(tmp26_);
   double tmp62_ = tmp55_+tmp61_;
   double tmp63_ = (tmp19_)*mLocGL_0_2;
   double tmp64_ = (tmp23_)*mLocGL_1_2;
   double tmp65_ = tmp63_+tmp64_;
   double tmp66_ = tmp24_*mLocGL_2_2;
   double tmp67_ = tmp65_+tmp66_;
   double tmp68_ = (tmp67_)*(tmp28_);
   double tmp69_ = tmp62_+tmp68_;
   double tmp70_ = tmp49_/(tmp69_);
   double tmp71_ = (tmp48_)*(tmp70_);
   double tmp72_ = mCompCoord[1];
   double tmp73_ = tmp71_+tmp72_;
   double tmp74_ = (tmp73_)-tmp72_;
   double tmp75_ = tmp15_*tmp12_;
   double tmp76_ = tmp17_*tmp9_;
   double tmp77_ = tmp75_+tmp76_;
   double tmp78_ = tmp3_*tmp12_;
   double tmp79_ = tmp21_*tmp9_;
   double tmp80_ = tmp78_+tmp79_;
   double tmp81_ = tmp2_*tmp9_;
   double tmp82_ = mCompCoord[2];
   double tmp83_ = (tmp77_)*mLocGL_0_0;
   double tmp84_ = (tmp80_)*mLocGL_1_0;
   double tmp85_ = tmp83_+tmp84_;
   double tmp86_ = tmp81_*mLocGL_2_0;
   double tmp87_ = tmp85_+tmp86_;
   double tmp88_ = (tmp87_)*(tmp14_);
   double tmp89_ = (tmp77_)*mLocGL_0_1;
   double tmp90_ = (tmp80_)*mLocGL_1_1;
   double tmp91_ = tmp89_+tmp90_;
   double tmp92_ = tmp81_*mLocGL_2_1;
   double tmp93_ = tmp91_+tmp92_;
   double tmp94_ = (tmp93_)*(tmp26_);
   double tmp95_ = tmp88_+tmp94_;
   double tmp96_ = (tmp77_)*mLocGL_0_2;
   double tmp97_ = (tmp80_)*mLocGL_1_2;
   double tmp98_ = tmp96_+tmp97_;
   double tmp99_ = tmp81_*mLocGL_2_2;
   double tmp100_ = tmp98_+tmp99_;
   double tmp101_ = (tmp100_)*(tmp28_);
   double tmp102_ = tmp95_+tmp101_;
   double tmp103_ = (tmp102_)*(tmp70_);
   double tmp104_ = tmp103_+tmp82_;
   double tmp105_ = (tmp104_)-tmp82_;
   double tmp106_ = (tmp74_)*(tmp74_);
   double tmp107_ = (tmp105_)*(tmp105_);
   double tmp108_ = tmp106_+tmp107_;
   double tmp109_ = (tmp108_)*(tmp108_);
   double tmp110_ = tmp109_*(tmp108_);
   double tmp111_ = tmp110_*(tmp108_);
   double tmp112_ = mCompCoord[3];
   double tmp113_ = tmp112_*(tmp108_);
   double tmp114_ = mCompCoord[4];
   double tmp115_ = tmp114_*tmp109_;
   double tmp116_ = tmp113_+tmp115_;
   double tmp117_ = mCompCoord[5];
   double tmp118_ = tmp117_*tmp110_;
   double tmp119_ = tmp116_+tmp118_;
   double tmp120_ = mCompCoord[6];
   double tmp121_ = tmp120_*tmp111_;
   double tmp122_ = tmp119_+tmp121_;
   double tmp123_ = mCompCoord[7];
   double tmp124_ = tmp111_*(tmp108_);
   double tmp125_ = tmp123_*tmp124_;
   double tmp126_ = tmp122_+tmp125_;

  mVal[0] = ((tmp73_+(tmp74_)*(tmp126_))-mLocXIm)*mLocScNorm;

  mVal[1] = ((tmp104_+(tmp105_)*(tmp126_))-mLocYIm)*mLocScNorm;

}


void cEqAppui_GL__TerFix_M2CDRad_PPaEqPPs::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[8];
   double tmp1_ = mCompCoord[9];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = cos(tmp0_);
   double tmp4_ = tmp3_*tmp2_;
   double tmp5_ = sin(tmp0_);
   double tmp6_ = tmp5_*tmp2_;
   double tmp7_ = sin(tmp1_);
   double tmp8_ = mCompCoord[10];
   double tmp9_ = sin(tmp8_);
   double tmp10_ = -(tmp9_);
   double tmp11_ = -(tmp7_);
   double tmp12_ = cos(tmp8_);
   double tmp13_ = mCompCoord[11];
   double tmp14_ = mLocXTer-tmp13_;
   double tmp15_ = -(tmp5_);
   double tmp16_ = tmp15_*tmp10_;
   double tmp17_ = tmp3_*tmp11_;
   double tmp18_ = tmp17_*tmp12_;
   double tmp19_ = tmp16_+tmp18_;
   double tmp20_ = tmp3_*tmp10_;
   double tmp21_ = tmp5_*tmp11_;
   double tmp22_ = tmp21_*tmp12_;
   double tmp23_ = tmp20_+tmp22_;
   double tmp24_ = tmp2_*tmp12_;
   double tmp25_ = mCompCoord[12];
   double tmp26_ = mLocYTer-tmp25_;
   double tmp27_ = mCompCoord[13];
   double tmp28_ = mLocZTer-tmp27_;
   double tmp29_ = tmp4_*mLocGL_0_0;
   double tmp30_ = tmp6_*mLocGL_1_0;
   double tmp31_ = tmp29_+tmp30_;
   double tmp32_ = tmp7_*mLocGL_2_0;
   double tmp33_ = tmp31_+tmp32_;
   double tmp34_ = (tmp33_)*(tmp14_);
   double tmp35_ = tmp4_*mLocGL_0_1;
   double tmp36_ = tmp6_*mLocGL_1_1;
   double tmp37_ = tmp35_+tmp36_;
   double tmp38_ = tmp7_*mLocGL_2_1;
   double tmp39_ = tmp37_+tmp38_;
   double tmp40_ = (tmp39_)*(tmp26_);
   double tmp41_ = tmp34_+tmp40_;
   double tmp42_ = tmp4_*mLocGL_0_2;
   double tmp43_ = tmp6_*mLocGL_1_2;
   double tmp44_ = tmp42_+tmp43_;
   double tmp45_ = tmp7_*mLocGL_2_2;
   double tmp46_ = tmp44_+tmp45_;
   double tmp47_ = (tmp46_)*(tmp28_);
   double tmp48_ = tmp41_+tmp47_;
   double tmp49_ = mCompCoord[0];
   double tmp50_ = (tmp19_)*mLocGL_0_0;
   double tmp51_ = (tmp23_)*mLocGL_1_0;
   double tmp52_ = tmp50_+tmp51_;
   double tmp53_ = tmp24_*mLocGL_2_0;
   double tmp54_ = tmp52_+tmp53_;
   double tmp55_ = (tmp54_)*(tmp14_);
   double tmp56_ = (tmp19_)*mLocGL_0_1;
   double tmp57_ = (tmp23_)*mLocGL_1_1;
   double tmp58_ = tmp56_+tmp57_;
   double tmp59_ = tmp24_*mLocGL_2_1;
   double tmp60_ = tmp58_+tmp59_;
   double tmp61_ = (tmp60_)*(tmp26_);
   double tmp62_ = tmp55_+tmp61_;
   double tmp63_ = (tmp19_)*mLocGL_0_2;
   double tmp64_ = (tmp23_)*mLocGL_1_2;
   double tmp65_ = tmp63_+tmp64_;
   double tmp66_ = tmp24_*mLocGL_2_2;
   double tmp67_ = tmp65_+tmp66_;
   double tmp68_ = (tmp67_)*(tmp28_);
   double tmp69_ = tmp62_+tmp68_;
   double tmp70_ = tmp49_/(tmp69_);
   double tmp71_ = (tmp48_)*(tmp70_);
   double tmp72_ = mCompCoord[1];
   double tmp73_ = tmp71_+tmp72_;
   double tmp74_ = (tmp73_)-tmp72_;
   double tmp75_ = tmp15_*tmp12_;
   double tmp76_ = tmp17_*tmp9_;
   double tmp77_ = tmp75_+tmp76_;
   double tmp78_ = tmp3_*tmp12_;
   double tmp79_ = tmp21_*tmp9_;
   double tmp80_ = tmp78_+tmp79_;
   double tmp81_ = tmp2_*tmp9_;
   double tmp82_ = mCompCoord[2];
   double tmp83_ = (tmp77_)*mLocGL_0_0;
   double tmp84_ = (tmp80_)*mLocGL_1_0;
   double tmp85_ = tmp83_+tmp84_;
   double tmp86_ = tmp81_*mLocGL_2_0;
   double tmp87_ = tmp85_+tmp86_;
   double tmp88_ = (tmp87_)*(tmp14_);
   double tmp89_ = (tmp77_)*mLocGL_0_1;
   double tmp90_ = (tmp80_)*mLocGL_1_1;
   double tmp91_ = tmp89_+tmp90_;
   double tmp92_ = tmp81_*mLocGL_2_1;
   double tmp93_ = tmp91_+tmp92_;
   double tmp94_ = (tmp93_)*(tmp26_);
   double tmp95_ = tmp88_+tmp94_;
   double tmp96_ = (tmp77_)*mLocGL_0_2;
   double tmp97_ = (tmp80_)*mLocGL_1_2;
   double tmp98_ = tmp96_+tmp97_;
   double tmp99_ = tmp81_*mLocGL_2_2;
   double tmp100_ = tmp98_+tmp99_;
   double tmp101_ = (tmp100_)*(tmp28_);
   double tmp102_ = tmp95_+tmp101_;
   double tmp103_ = (tmp102_)*(tmp70_);
   double tmp104_ = tmp103_+tmp82_;
   double tmp105_ = (tmp104_)-tmp82_;
   double tmp106_ = (tmp74_)*(tmp74_);
   double tmp107_ = (tmp105_)*(tmp105_);
   double tmp108_ = tmp106_+tmp107_;
   double tmp109_ = (tmp108_)*(tmp108_);
   double tmp110_ = tmp109_*(tmp108_);
   double tmp111_ = tmp110_*(tmp108_);
   double tmp112_ = ElSquare(tmp69_);
   double tmp113_ = (tmp69_)/tmp112_;
   double tmp114_ = (tmp113_)*(tmp48_);
   double tmp115_ = mCompCoord[3];
   double tmp116_ = tmp115_*(tmp108_);
   double tmp117_ = mCompCoord[4];
   double tmp118_ = tmp117_*tmp109_;
   double tmp119_ = tmp116_+tmp118_;
   double tmp120_ = mCompCoord[5];
   double tmp121_ = tmp120_*tmp110_;
   double tmp122_ = tmp119_+tmp121_;
   double tmp123_ = mCompCoord[6];
   double tmp124_ = tmp123_*tmp111_;
   double tmp125_ = tmp122_+tmp124_;
   double tmp126_ = mCompCoord[7];
   double tmp127_ = tmp111_*(tmp108_);
   double tmp128_ = tmp126_*tmp127_;
   double tmp129_ = tmp125_+tmp128_;
   double tmp130_ = tmp114_*(tmp74_);
   double tmp131_ = (tmp113_)*(tmp102_);
   double tmp132_ = tmp131_*(tmp105_);
   double tmp133_ = tmp130_+tmp130_;
   double tmp134_ = tmp132_+tmp132_;
   double tmp135_ = tmp133_+tmp134_;
   double tmp136_ = (tmp135_)*(tmp108_);
   double tmp137_ = tmp136_+tmp136_;
   double tmp138_ = (tmp137_)*(tmp108_);
   double tmp139_ = (tmp135_)*tmp109_;
   double tmp140_ = tmp138_+tmp139_;
   double tmp141_ = (tmp140_)*(tmp108_);
   double tmp142_ = (tmp135_)*tmp110_;
   double tmp143_ = tmp141_+tmp142_;
   double tmp144_ = -(1);
   double tmp145_ = tmp144_*tmp5_;
   double tmp146_ = tmp145_*tmp2_;
   double tmp147_ = -(tmp3_);
   double tmp148_ = tmp147_*tmp10_;
   double tmp149_ = tmp145_*tmp11_;
   double tmp150_ = tmp149_*tmp12_;
   double tmp151_ = tmp148_+tmp150_;
   double tmp152_ = tmp145_*tmp10_;
   double tmp153_ = tmp152_+tmp18_;
   double tmp154_ = tmp146_*mLocGL_0_0;
   double tmp155_ = tmp4_*mLocGL_1_0;
   double tmp156_ = tmp154_+tmp155_;
   double tmp157_ = (tmp156_)*(tmp14_);
   double tmp158_ = tmp146_*mLocGL_0_1;
   double tmp159_ = tmp4_*mLocGL_1_1;
   double tmp160_ = tmp158_+tmp159_;
   double tmp161_ = (tmp160_)*(tmp26_);
   double tmp162_ = tmp157_+tmp161_;
   double tmp163_ = tmp146_*mLocGL_0_2;
   double tmp164_ = tmp4_*mLocGL_1_2;
   double tmp165_ = tmp163_+tmp164_;
   double tmp166_ = (tmp165_)*(tmp28_);
   double tmp167_ = tmp162_+tmp166_;
   double tmp168_ = (tmp167_)*(tmp70_);
   double tmp169_ = (tmp151_)*mLocGL_0_0;
   double tmp170_ = (tmp153_)*mLocGL_1_0;
   double tmp171_ = tmp169_+tmp170_;
   double tmp172_ = (tmp171_)*(tmp14_);
   double tmp173_ = (tmp151_)*mLocGL_0_1;
   double tmp174_ = (tmp153_)*mLocGL_1_1;
   double tmp175_ = tmp173_+tmp174_;
   double tmp176_ = (tmp175_)*(tmp26_);
   double tmp177_ = tmp172_+tmp176_;
   double tmp178_ = (tmp151_)*mLocGL_0_2;
   double tmp179_ = (tmp153_)*mLocGL_1_2;
   double tmp180_ = tmp178_+tmp179_;
   double tmp181_ = (tmp180_)*(tmp28_);
   double tmp182_ = tmp177_+tmp181_;
   double tmp183_ = tmp49_*(tmp182_);
   double tmp184_ = -(tmp183_);
   double tmp185_ = tmp184_/tmp112_;
   double tmp186_ = (tmp185_)*(tmp48_);
   double tmp187_ = tmp168_+tmp186_;
   double tmp188_ = (tmp187_)*(tmp74_);
   double tmp189_ = tmp147_*tmp12_;
   double tmp190_ = tmp149_*tmp9_;
   double tmp191_ = tmp189_+tmp190_;
   double tmp192_ = tmp145_*tmp12_;
   double tmp193_ = tmp192_+tmp76_;
   double tmp194_ = (tmp191_)*mLocGL_0_0;
   double tmp195_ = (tmp193_)*mLocGL_1_0;
   double tmp196_ = tmp194_+tmp195_;
   double tmp197_ = (tmp196_)*(tmp14_);
   double tmp198_ = (tmp191_)*mLocGL_0_1;
   double tmp199_ = (tmp193_)*mLocGL_1_1;
   double tmp200_ = tmp198_+tmp199_;
   double tmp201_ = (tmp200_)*(tmp26_);
   double tmp202_ = tmp197_+tmp201_;
   double tmp203_ = (tmp191_)*mLocGL_0_2;
   double tmp204_ = (tmp193_)*mLocGL_1_2;
   double tmp205_ = tmp203_+tmp204_;
   double tmp206_ = (tmp205_)*(tmp28_);
   double tmp207_ = tmp202_+tmp206_;
   double tmp208_ = (tmp207_)*(tmp70_);
   double tmp209_ = (tmp185_)*(tmp102_);
   double tmp210_ = tmp208_+tmp209_;
   double tmp211_ = (tmp210_)*(tmp105_);
   double tmp212_ = tmp188_+tmp188_;
   double tmp213_ = tmp211_+tmp211_;
   double tmp214_ = tmp212_+tmp213_;
   double tmp215_ = (tmp214_)*(tmp108_);
   double tmp216_ = tmp215_+tmp215_;
   double tmp217_ = (tmp216_)*(tmp108_);
   double tmp218_ = (tmp214_)*tmp109_;
   double tmp219_ = tmp217_+tmp218_;
   double tmp220_ = (tmp219_)*(tmp108_);
   double tmp221_ = (tmp214_)*tmp110_;
   double tmp222_ = tmp220_+tmp221_;
   double tmp223_ = tmp144_*tmp7_;
   double tmp224_ = tmp223_*tmp3_;
   double tmp225_ = tmp223_*tmp5_;
   double tmp226_ = -(tmp2_);
   double tmp227_ = tmp226_*tmp3_;
   double tmp228_ = tmp227_*tmp12_;
   double tmp229_ = tmp226_*tmp5_;
   double tmp230_ = tmp229_*tmp12_;
   double tmp231_ = tmp223_*tmp12_;
   double tmp232_ = tmp224_*mLocGL_0_0;
   double tmp233_ = tmp225_*mLocGL_1_0;
   double tmp234_ = tmp232_+tmp233_;
   double tmp235_ = tmp2_*mLocGL_2_0;
   double tmp236_ = tmp234_+tmp235_;
   double tmp237_ = (tmp236_)*(tmp14_);
   double tmp238_ = tmp224_*mLocGL_0_1;
   double tmp239_ = tmp225_*mLocGL_1_1;
   double tmp240_ = tmp238_+tmp239_;
   double tmp241_ = tmp2_*mLocGL_2_1;
   double tmp242_ = tmp240_+tmp241_;
   double tmp243_ = (tmp242_)*(tmp26_);
   double tmp244_ = tmp237_+tmp243_;
   double tmp245_ = tmp224_*mLocGL_0_2;
   double tmp246_ = tmp225_*mLocGL_1_2;
   double tmp247_ = tmp245_+tmp246_;
   double tmp248_ = tmp2_*mLocGL_2_2;
   double tmp249_ = tmp247_+tmp248_;
   double tmp250_ = (tmp249_)*(tmp28_);
   double tmp251_ = tmp244_+tmp250_;
   double tmp252_ = (tmp251_)*(tmp70_);
   double tmp253_ = tmp228_*mLocGL_0_0;
   double tmp254_ = tmp230_*mLocGL_1_0;
   double tmp255_ = tmp253_+tmp254_;
   double tmp256_ = tmp231_*mLocGL_2_0;
   double tmp257_ = tmp255_+tmp256_;
   double tmp258_ = (tmp257_)*(tmp14_);
   double tmp259_ = tmp228_*mLocGL_0_1;
   double tmp260_ = tmp230_*mLocGL_1_1;
   double tmp261_ = tmp259_+tmp260_;
   double tmp262_ = tmp231_*mLocGL_2_1;
   double tmp263_ = tmp261_+tmp262_;
   double tmp264_ = (tmp263_)*(tmp26_);
   double tmp265_ = tmp258_+tmp264_;
   double tmp266_ = tmp228_*mLocGL_0_2;
   double tmp267_ = tmp230_*mLocGL_1_2;
   double tmp268_ = tmp266_+tmp267_;
   double tmp269_ = tmp231_*mLocGL_2_2;
   double tmp270_ = tmp268_+tmp269_;
   double tmp271_ = (tmp270_)*(tmp28_);
   double tmp272_ = tmp265_+tmp271_;
   double tmp273_ = tmp49_*(tmp272_);
   double tmp274_ = -(tmp273_);
   double tmp275_ = tmp274_/tmp112_;
   double tmp276_ = (tmp275_)*(tmp48_);
   double tmp277_ = tmp252_+tmp276_;
   double tmp278_ = (tmp277_)*(tmp74_);
   double tmp279_ = tmp227_*tmp9_;
   double tmp280_ = tmp229_*tmp9_;
   double tmp281_ = tmp223_*tmp9_;
   double tmp282_ = tmp279_*mLocGL_0_0;
   double tmp283_ = tmp280_*mLocGL_1_0;
   double tmp284_ = tmp282_+tmp283_;
   double tmp285_ = tmp281_*mLocGL_2_0;
   double tmp286_ = tmp284_+tmp285_;
   double tmp287_ = (tmp286_)*(tmp14_);
   double tmp288_ = tmp279_*mLocGL_0_1;
   double tmp289_ = tmp280_*mLocGL_1_1;
   double tmp290_ = tmp288_+tmp289_;
   double tmp291_ = tmp281_*mLocGL_2_1;
   double tmp292_ = tmp290_+tmp291_;
   double tmp293_ = (tmp292_)*(tmp26_);
   double tmp294_ = tmp287_+tmp293_;
   double tmp295_ = tmp279_*mLocGL_0_2;
   double tmp296_ = tmp280_*mLocGL_1_2;
   double tmp297_ = tmp295_+tmp296_;
   double tmp298_ = tmp281_*mLocGL_2_2;
   double tmp299_ = tmp297_+tmp298_;
   double tmp300_ = (tmp299_)*(tmp28_);
   double tmp301_ = tmp294_+tmp300_;
   double tmp302_ = (tmp301_)*(tmp70_);
   double tmp303_ = (tmp275_)*(tmp102_);
   double tmp304_ = tmp302_+tmp303_;
   double tmp305_ = (tmp304_)*(tmp105_);
   double tmp306_ = tmp278_+tmp278_;
   double tmp307_ = tmp305_+tmp305_;
   double tmp308_ = tmp306_+tmp307_;
   double tmp309_ = (tmp308_)*(tmp108_);
   double tmp310_ = tmp309_+tmp309_;
   double tmp311_ = (tmp310_)*(tmp108_);
   double tmp312_ = (tmp308_)*tmp109_;
   double tmp313_ = tmp311_+tmp312_;
   double tmp314_ = (tmp313_)*(tmp108_);
   double tmp315_ = (tmp308_)*tmp110_;
   double tmp316_ = tmp314_+tmp315_;
   double tmp317_ = -(tmp12_);
   double tmp318_ = tmp144_*tmp9_;
   double tmp319_ = tmp317_*tmp15_;
   double tmp320_ = tmp318_*tmp17_;
   double tmp321_ = tmp319_+tmp320_;
   double tmp322_ = tmp317_*tmp3_;
   double tmp323_ = tmp318_*tmp21_;
   double tmp324_ = tmp322_+tmp323_;
   double tmp325_ = tmp318_*tmp2_;
   double tmp326_ = (tmp321_)*mLocGL_0_0;
   double tmp327_ = (tmp324_)*mLocGL_1_0;
   double tmp328_ = tmp326_+tmp327_;
   double tmp329_ = tmp325_*mLocGL_2_0;
   double tmp330_ = tmp328_+tmp329_;
   double tmp331_ = (tmp330_)*(tmp14_);
   double tmp332_ = (tmp321_)*mLocGL_0_1;
   double tmp333_ = (tmp324_)*mLocGL_1_1;
   double tmp334_ = tmp332_+tmp333_;
   double tmp335_ = tmp325_*mLocGL_2_1;
   double tmp336_ = tmp334_+tmp335_;
   double tmp337_ = (tmp336_)*(tmp26_);
   double tmp338_ = tmp331_+tmp337_;
   double tmp339_ = (tmp321_)*mLocGL_0_2;
   double tmp340_ = (tmp324_)*mLocGL_1_2;
   double tmp341_ = tmp339_+tmp340_;
   double tmp342_ = tmp325_*mLocGL_2_2;
   double tmp343_ = tmp341_+tmp342_;
   double tmp344_ = (tmp343_)*(tmp28_);
   double tmp345_ = tmp338_+tmp344_;
   double tmp346_ = tmp49_*(tmp345_);
   double tmp347_ = -(tmp346_);
   double tmp348_ = tmp347_/tmp112_;
   double tmp349_ = (tmp348_)*(tmp48_);
   double tmp350_ = tmp349_*(tmp74_);
   double tmp351_ = tmp318_*tmp15_;
   double tmp352_ = tmp12_*tmp17_;
   double tmp353_ = tmp351_+tmp352_;
   double tmp354_ = tmp318_*tmp3_;
   double tmp355_ = tmp12_*tmp21_;
   double tmp356_ = tmp354_+tmp355_;
   double tmp357_ = tmp12_*tmp2_;
   double tmp358_ = (tmp353_)*mLocGL_0_0;
   double tmp359_ = (tmp356_)*mLocGL_1_0;
   double tmp360_ = tmp358_+tmp359_;
   double tmp361_ = tmp357_*mLocGL_2_0;
   double tmp362_ = tmp360_+tmp361_;
   double tmp363_ = (tmp362_)*(tmp14_);
   double tmp364_ = (tmp353_)*mLocGL_0_1;
   double tmp365_ = (tmp356_)*mLocGL_1_1;
   double tmp366_ = tmp364_+tmp365_;
   double tmp367_ = tmp357_*mLocGL_2_1;
   double tmp368_ = tmp366_+tmp367_;
   double tmp369_ = (tmp368_)*(tmp26_);
   double tmp370_ = tmp363_+tmp369_;
   double tmp371_ = (tmp353_)*mLocGL_0_2;
   double tmp372_ = (tmp356_)*mLocGL_1_2;
   double tmp373_ = tmp371_+tmp372_;
   double tmp374_ = tmp357_*mLocGL_2_2;
   double tmp375_ = tmp373_+tmp374_;
   double tmp376_ = (tmp375_)*(tmp28_);
   double tmp377_ = tmp370_+tmp376_;
   double tmp378_ = (tmp377_)*(tmp70_);
   double tmp379_ = (tmp348_)*(tmp102_);
   double tmp380_ = tmp378_+tmp379_;
   double tmp381_ = (tmp380_)*(tmp105_);
   double tmp382_ = tmp350_+tmp350_;
   double tmp383_ = tmp381_+tmp381_;
   double tmp384_ = tmp382_+tmp383_;
   double tmp385_ = (tmp384_)*(tmp108_);
   double tmp386_ = tmp385_+tmp385_;
   double tmp387_ = (tmp386_)*(tmp108_);
   double tmp388_ = (tmp384_)*tmp109_;
   double tmp389_ = tmp387_+tmp388_;
   double tmp390_ = (tmp389_)*(tmp108_);
   double tmp391_ = (tmp384_)*tmp110_;
   double tmp392_ = tmp390_+tmp391_;
   double tmp393_ = tmp144_*(tmp33_);
   double tmp394_ = tmp393_*(tmp70_);
   double tmp395_ = tmp144_*(tmp54_);
   double tmp396_ = tmp49_*tmp395_;
   double tmp397_ = -(tmp396_);
   double tmp398_ = tmp397_/tmp112_;
   double tmp399_ = (tmp398_)*(tmp48_);
   double tmp400_ = tmp394_+tmp399_;
   double tmp401_ = (tmp400_)*(tmp74_);
   double tmp402_ = tmp144_*(tmp87_);
   double tmp403_ = tmp402_*(tmp70_);
   double tmp404_ = (tmp398_)*(tmp102_);
   double tmp405_ = tmp403_+tmp404_;
   double tmp406_ = (tmp405_)*(tmp105_);
   double tmp407_ = tmp401_+tmp401_;
   double tmp408_ = tmp406_+tmp406_;
   double tmp409_ = tmp407_+tmp408_;
   double tmp410_ = (tmp409_)*(tmp108_);
   double tmp411_ = tmp410_+tmp410_;
   double tmp412_ = (tmp411_)*(tmp108_);
   double tmp413_ = (tmp409_)*tmp109_;
   double tmp414_ = tmp412_+tmp413_;
   double tmp415_ = (tmp414_)*(tmp108_);
   double tmp416_ = (tmp409_)*tmp110_;
   double tmp417_ = tmp415_+tmp416_;
   double tmp418_ = tmp144_*(tmp39_);
   double tmp419_ = tmp418_*(tmp70_);
   double tmp420_ = tmp144_*(tmp60_);
   double tmp421_ = tmp49_*tmp420_;
   double tmp422_ = -(tmp421_);
   double tmp423_ = tmp422_/tmp112_;
   double tmp424_ = (tmp423_)*(tmp48_);
   double tmp425_ = tmp419_+tmp424_;
   double tmp426_ = (tmp425_)*(tmp74_);
   double tmp427_ = tmp144_*(tmp93_);
   double tmp428_ = tmp427_*(tmp70_);
   double tmp429_ = (tmp423_)*(tmp102_);
   double tmp430_ = tmp428_+tmp429_;
   double tmp431_ = (tmp430_)*(tmp105_);
   double tmp432_ = tmp426_+tmp426_;
   double tmp433_ = tmp431_+tmp431_;
   double tmp434_ = tmp432_+tmp433_;
   double tmp435_ = (tmp434_)*(tmp108_);
   double tmp436_ = tmp435_+tmp435_;
   double tmp437_ = (tmp436_)*(tmp108_);
   double tmp438_ = (tmp434_)*tmp109_;
   double tmp439_ = tmp437_+tmp438_;
   double tmp440_ = (tmp439_)*(tmp108_);
   double tmp441_ = (tmp434_)*tmp110_;
   double tmp442_ = tmp440_+tmp441_;
   double tmp443_ = tmp144_*(tmp46_);
   double tmp444_ = tmp443_*(tmp70_);
   double tmp445_ = tmp144_*(tmp67_);
   double tmp446_ = tmp49_*tmp445_;
   double tmp447_ = -(tmp446_);
   double tmp448_ = tmp447_/tmp112_;
   double tmp449_ = (tmp448_)*(tmp48_);
   double tmp450_ = tmp444_+tmp449_;
   double tmp451_ = (tmp450_)*(tmp74_);
   double tmp452_ = tmp144_*(tmp100_);
   double tmp453_ = tmp452_*(tmp70_);
   double tmp454_ = (tmp448_)*(tmp102_);
   double tmp455_ = tmp453_+tmp454_;
   double tmp456_ = (tmp455_)*(tmp105_);
   double tmp457_ = tmp451_+tmp451_;
   double tmp458_ = tmp456_+tmp456_;
   double tmp459_ = tmp457_+tmp458_;
   double tmp460_ = (tmp459_)*(tmp108_);
   double tmp461_ = tmp460_+tmp460_;
   double tmp462_ = (tmp461_)*(tmp108_);
   double tmp463_ = (tmp459_)*tmp109_;
   double tmp464_ = tmp462_+tmp463_;
   double tmp465_ = (tmp464_)*(tmp108_);
   double tmp466_ = (tmp459_)*tmp110_;
   double tmp467_ = tmp465_+tmp466_;
   double tmp468_ = (tmp135_)*tmp115_;
   double tmp469_ = (tmp137_)*tmp117_;
   double tmp470_ = tmp468_+tmp469_;
   double tmp471_ = (tmp140_)*tmp120_;
   double tmp472_ = tmp470_+tmp471_;
   double tmp473_ = (tmp143_)*tmp123_;
   double tmp474_ = tmp472_+tmp473_;
   double tmp475_ = (tmp143_)*(tmp108_);
   double tmp476_ = (tmp135_)*tmp111_;
   double tmp477_ = tmp475_+tmp476_;
   double tmp478_ = (tmp477_)*tmp126_;
   double tmp479_ = tmp474_+tmp478_;
   double tmp480_ = (tmp214_)*tmp115_;
   double tmp481_ = (tmp216_)*tmp117_;
   double tmp482_ = tmp480_+tmp481_;
   double tmp483_ = (tmp219_)*tmp120_;
   double tmp484_ = tmp482_+tmp483_;
   double tmp485_ = (tmp222_)*tmp123_;
   double tmp486_ = tmp484_+tmp485_;
   double tmp487_ = (tmp222_)*(tmp108_);
   double tmp488_ = (tmp214_)*tmp111_;
   double tmp489_ = tmp487_+tmp488_;
   double tmp490_ = (tmp489_)*tmp126_;
   double tmp491_ = tmp486_+tmp490_;
   double tmp492_ = (tmp308_)*tmp115_;
   double tmp493_ = (tmp310_)*tmp117_;
   double tmp494_ = tmp492_+tmp493_;
   double tmp495_ = (tmp313_)*tmp120_;
   double tmp496_ = tmp494_+tmp495_;
   double tmp497_ = (tmp316_)*tmp123_;
   double tmp498_ = tmp496_+tmp497_;
   double tmp499_ = (tmp316_)*(tmp108_);
   double tmp500_ = (tmp308_)*tmp111_;
   double tmp501_ = tmp499_+tmp500_;
   double tmp502_ = (tmp501_)*tmp126_;
   double tmp503_ = tmp498_+tmp502_;
   double tmp504_ = (tmp384_)*tmp115_;
   double tmp505_ = (tmp386_)*tmp117_;
   double tmp506_ = tmp504_+tmp505_;
   double tmp507_ = (tmp389_)*tmp120_;
   double tmp508_ = tmp506_+tmp507_;
   double tmp509_ = (tmp392_)*tmp123_;
   double tmp510_ = tmp508_+tmp509_;
   double tmp511_ = (tmp392_)*(tmp108_);
   double tmp512_ = (tmp384_)*tmp111_;
   double tmp513_ = tmp511_+tmp512_;
   double tmp514_ = (tmp513_)*tmp126_;
   double tmp515_ = tmp510_+tmp514_;
   double tmp516_ = (tmp409_)*tmp115_;
   double tmp517_ = (tmp411_)*tmp117_;
   double tmp518_ = tmp516_+tmp517_;
   double tmp519_ = (tmp414_)*tmp120_;
   double tmp520_ = tmp518_+tmp519_;
   double tmp521_ = (tmp417_)*tmp123_;
   double tmp522_ = tmp520_+tmp521_;
   double tmp523_ = (tmp417_)*(tmp108_);
   double tmp524_ = (tmp409_)*tmp111_;
   double tmp525_ = tmp523_+tmp524_;
   double tmp526_ = (tmp525_)*tmp126_;
   double tmp527_ = tmp522_+tmp526_;
   double tmp528_ = (tmp434_)*tmp115_;
   double tmp529_ = (tmp436_)*tmp117_;
   double tmp530_ = tmp528_+tmp529_;
   double tmp531_ = (tmp439_)*tmp120_;
   double tmp532_ = tmp530_+tmp531_;
   double tmp533_ = (tmp442_)*tmp123_;
   double tmp534_ = tmp532_+tmp533_;
   double tmp535_ = (tmp442_)*(tmp108_);
   double tmp536_ = (tmp434_)*tmp111_;
   double tmp537_ = tmp535_+tmp536_;
   double tmp538_ = (tmp537_)*tmp126_;
   double tmp539_ = tmp534_+tmp538_;
   double tmp540_ = (tmp459_)*tmp115_;
   double tmp541_ = (tmp461_)*tmp117_;
   double tmp542_ = tmp540_+tmp541_;
   double tmp543_ = (tmp464_)*tmp120_;
   double tmp544_ = tmp542_+tmp543_;
   double tmp545_ = (tmp467_)*tmp123_;
   double tmp546_ = tmp544_+tmp545_;
   double tmp547_ = (tmp467_)*(tmp108_);
   double tmp548_ = (tmp459_)*tmp111_;
   double tmp549_ = tmp547_+tmp548_;
   double tmp550_ = (tmp549_)*tmp126_;
   double tmp551_ = tmp546_+tmp550_;

  mVal[0] = ((tmp73_+(tmp74_)*(tmp129_))-mLocXIm)*mLocScNorm;

  mCompDer[0][0] = (tmp114_+tmp114_*(tmp129_)+(tmp479_)*(tmp74_))*mLocScNorm;
  mCompDer[0][1] = mLocScNorm;
  mCompDer[0][2] = 0;
  mCompDer[0][3] = (tmp108_)*(tmp74_)*mLocScNorm;
  mCompDer[0][4] = tmp109_*(tmp74_)*mLocScNorm;
  mCompDer[0][5] = tmp110_*(tmp74_)*mLocScNorm;
  mCompDer[0][6] = tmp111_*(tmp74_)*mLocScNorm;
  mCompDer[0][7] = tmp127_*(tmp74_)*mLocScNorm;
  mCompDer[0][8] = (tmp187_+(tmp187_)*(tmp129_)+(tmp491_)*(tmp74_))*mLocScNorm;
  mCompDer[0][9] = (tmp277_+(tmp277_)*(tmp129_)+(tmp503_)*(tmp74_))*mLocScNorm;
  mCompDer[0][10] = (tmp349_+tmp349_*(tmp129_)+(tmp515_)*(tmp74_))*mLocScNorm;
  mCompDer[0][11] = (tmp400_+(tmp400_)*(tmp129_)+(tmp527_)*(tmp74_))*mLocScNorm;
  mCompDer[0][12] = (tmp425_+(tmp425_)*(tmp129_)+(tmp539_)*(tmp74_))*mLocScNorm;
  mCompDer[0][13] = (tmp450_+(tmp450_)*(tmp129_)+(tmp551_)*(tmp74_))*mLocScNorm;
  mVal[1] = ((tmp104_+(tmp105_)*(tmp129_))-mLocYIm)*mLocScNorm;

  mCompDer[1][0] = (tmp131_+tmp131_*(tmp129_)+(tmp479_)*(tmp105_))*mLocScNorm;
  mCompDer[1][1] = 0;
  mCompDer[1][2] = mLocScNorm;
  mCompDer[1][3] = (tmp108_)*(tmp105_)*mLocScNorm;
  mCompDer[1][4] = tmp109_*(tmp105_)*mLocScNorm;
  mCompDer[1][5] = tmp110_*(tmp105_)*mLocScNorm;
  mCompDer[1][6] = tmp111_*(tmp105_)*mLocScNorm;
  mCompDer[1][7] = tmp127_*(tmp105_)*mLocScNorm;
  mCompDer[1][8] = (tmp210_+(tmp210_)*(tmp129_)+(tmp491_)*(tmp105_))*mLocScNorm;
  mCompDer[1][9] = (tmp304_+(tmp304_)*(tmp129_)+(tmp503_)*(tmp105_))*mLocScNorm;
  mCompDer[1][10] = (tmp380_+(tmp380_)*(tmp129_)+(tmp515_)*(tmp105_))*mLocScNorm;
  mCompDer[1][11] = (tmp405_+(tmp405_)*(tmp129_)+(tmp527_)*(tmp105_))*mLocScNorm;
  mCompDer[1][12] = (tmp430_+(tmp430_)*(tmp129_)+(tmp539_)*(tmp105_))*mLocScNorm;
  mCompDer[1][13] = (tmp455_+(tmp455_)*(tmp129_)+(tmp551_)*(tmp105_))*mLocScNorm;
}


void cEqAppui_GL__TerFix_M2CDRad_PPaEqPPs::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppui_GL__TerFix_M2CDRad_PPaEqPPs Has no Der Sec");
}

void cEqAppui_GL__TerFix_M2CDRad_PPaEqPPs::SetGL_0_0(double aVal){ mLocGL_0_0 = aVal;}
void cEqAppui_GL__TerFix_M2CDRad_PPaEqPPs::SetGL_0_1(double aVal){ mLocGL_0_1 = aVal;}
void cEqAppui_GL__TerFix_M2CDRad_PPaEqPPs::SetGL_0_2(double aVal){ mLocGL_0_2 = aVal;}
void cEqAppui_GL__TerFix_M2CDRad_PPaEqPPs::SetGL_1_0(double aVal){ mLocGL_1_0 = aVal;}
void cEqAppui_GL__TerFix_M2CDRad_PPaEqPPs::SetGL_1_1(double aVal){ mLocGL_1_1 = aVal;}
void cEqAppui_GL__TerFix_M2CDRad_PPaEqPPs::SetGL_1_2(double aVal){ mLocGL_1_2 = aVal;}
void cEqAppui_GL__TerFix_M2CDRad_PPaEqPPs::SetGL_2_0(double aVal){ mLocGL_2_0 = aVal;}
void cEqAppui_GL__TerFix_M2CDRad_PPaEqPPs::SetGL_2_1(double aVal){ mLocGL_2_1 = aVal;}
void cEqAppui_GL__TerFix_M2CDRad_PPaEqPPs::SetGL_2_2(double aVal){ mLocGL_2_2 = aVal;}
void cEqAppui_GL__TerFix_M2CDRad_PPaEqPPs::SetScNorm(double aVal){ mLocScNorm = aVal;}
void cEqAppui_GL__TerFix_M2CDRad_PPaEqPPs::SetXIm(double aVal){ mLocXIm = aVal;}
void cEqAppui_GL__TerFix_M2CDRad_PPaEqPPs::SetXTer(double aVal){ mLocXTer = aVal;}
void cEqAppui_GL__TerFix_M2CDRad_PPaEqPPs::SetYIm(double aVal){ mLocYIm = aVal;}
void cEqAppui_GL__TerFix_M2CDRad_PPaEqPPs::SetYTer(double aVal){ mLocYTer = aVal;}
void cEqAppui_GL__TerFix_M2CDRad_PPaEqPPs::SetZTer(double aVal){ mLocZTer = aVal;}



double * cEqAppui_GL__TerFix_M2CDRad_PPaEqPPs::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "GL_0_0") return & mLocGL_0_0;
   if (aName == "GL_0_1") return & mLocGL_0_1;
   if (aName == "GL_0_2") return & mLocGL_0_2;
   if (aName == "GL_1_0") return & mLocGL_1_0;
   if (aName == "GL_1_1") return & mLocGL_1_1;
   if (aName == "GL_1_2") return & mLocGL_1_2;
   if (aName == "GL_2_0") return & mLocGL_2_0;
   if (aName == "GL_2_1") return & mLocGL_2_1;
   if (aName == "GL_2_2") return & mLocGL_2_2;
   if (aName == "ScNorm") return & mLocScNorm;
   if (aName == "XIm") return & mLocXIm;
   if (aName == "XTer") return & mLocXTer;
   if (aName == "YIm") return & mLocYIm;
   if (aName == "YTer") return & mLocYTer;
   if (aName == "ZTer") return & mLocZTer;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppui_GL__TerFix_M2CDRad_PPaEqPPs::mTheAuto("cEqAppui_GL__TerFix_M2CDRad_PPaEqPPs",cEqAppui_GL__TerFix_M2CDRad_PPaEqPPs::Alloc);


cElCompiledFonc *  cEqAppui_GL__TerFix_M2CDRad_PPaEqPPs::Alloc()
{  return new cEqAppui_GL__TerFix_M2CDRad_PPaEqPPs();
}


