# 1 "AES_decrypt.cpp"
# 1 "AES_decrypt.cpp" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 155 "<built-in>" 3
# 1 "<command line>" 1






# 1 "/tools/Xilinx/Vivado/2019.1/common/technology/autopilot/etc/autopilot_ssdm_op.h" 1
# 157 "/tools/Xilinx/Vivado/2019.1/common/technology/autopilot/etc/autopilot_ssdm_op.h"
extern "C" {






    void _ssdm_op_IfRead(...) __attribute__ ((nothrow));
    void _ssdm_op_IfWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanWrite(...) __attribute__ ((nothrow));


    void _ssdm_StreamRead(...) __attribute__ ((nothrow));
    void _ssdm_StreamWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanWrite(...) __attribute__ ((nothrow));
    unsigned _ssdm_StreamSize(...) __attribute__ ((nothrow));




    void _ssdm_op_MemShiftRead(...) __attribute__ ((nothrow));

    void _ssdm_op_Wait(...) __attribute__ ((nothrow));
    void _ssdm_op_Poll(...) __attribute__ ((nothrow));

    void _ssdm_op_Return(...) __attribute__ ((nothrow));


    void _ssdm_op_SpecSynModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPort(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecReset(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPlatform(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecRegionBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopName(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopTripCount(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecStateBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecInterface(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPipeline(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline(...) __attribute__ ((nothrow));


    void _ssdm_op_SpecLatency(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecResource(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecKeepValue(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecExt(...) __attribute__ ((nothrow));




    void _ssdm_SpecArrayDimSize(...) __attribute__ ((nothrow));

    void _ssdm_RegionBegin(...) __attribute__ ((nothrow));
    void _ssdm_RegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_Unroll(...) __attribute__ ((nothrow));
    void _ssdm_UnrollRegion(...) __attribute__ ((nothrow));

    void _ssdm_InlineAll(...) __attribute__ ((nothrow));
    void _ssdm_InlineLoop(...) __attribute__ ((nothrow));
    void _ssdm_Inline(...) __attribute__ ((nothrow));
    void _ssdm_InlineSelf(...) __attribute__ ((nothrow));
    void _ssdm_InlineRegion(...) __attribute__ ((nothrow));

    void _ssdm_SpecArrayMap(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape(...) __attribute__ ((nothrow));

    void _ssdm_SpecStream(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecStable(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecStableContent(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPipoDepth(...) __attribute__ ((nothrow));

    void _ssdm_SpecExpr(...) __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance(...) __attribute__ ((nothrow));

    void _ssdm_SpecDependence(...) __attribute__ ((nothrow));

    void _ssdm_SpecLoopMerge(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind(...) __attribute__ ((nothrow));

    void _ssdm_SpecFuncInstantiation(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract(...) __attribute__ ((nothrow));
    void _ssdm_SpecConstant(...) __attribute__ ((nothrow));

    void _ssdm_DataPack(...) __attribute__ ((nothrow));
    void _ssdm_SpecDataPack(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecBitsMap(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense(...) __attribute__ ((nothrow));

    void __xilinx_ip_top(...) __attribute__ ((nothrow));


}
# 8 "<command line>" 2
# 1 "<built-in>" 2
# 1 "AES_decrypt.cpp" 2
const unsigned char SBox[256] = {

 0x63, 0x7c, 0x77, 0x7b, 0xf2, 0x6b, 0x6f, 0xc5, 0x30, 0x01, 0x67, 0x2b, 0xfe, 0xd7, 0xab, 0x76,
 0xca, 0x82, 0xc9, 0x7d, 0xfa, 0x59, 0x47, 0xf0, 0xad, 0xd4, 0xa2, 0xaf, 0x9c, 0xa4, 0x72, 0xc0,
 0xb7, 0xfd, 0x93, 0x26, 0x36, 0x3f, 0xf7, 0xcc, 0x34, 0xa5, 0xe5, 0xf1, 0x71, 0xd8, 0x31, 0x15,
 0x04, 0xc7, 0x23, 0xc3, 0x18, 0x96, 0x05, 0x9a, 0x07, 0x12, 0x80, 0xe2, 0xeb, 0x27, 0xb2, 0x75,
 0x09, 0x83, 0x2c, 0x1a, 0x1b, 0x6e, 0x5a, 0xa0, 0x52, 0x3b, 0xd6, 0xb3, 0x29, 0xe3, 0x2f, 0x84,
 0x53, 0xd1, 0x00, 0xed, 0x20, 0xfc, 0xb1, 0x5b, 0x6a, 0xcb, 0xbe, 0x39, 0x4a, 0x4c, 0x58, 0xcf,
 0xd0, 0xef, 0xaa, 0xfb, 0x43, 0x4d, 0x33, 0x85, 0x45, 0xf9, 0x02, 0x7f, 0x50, 0x3c, 0x9f, 0xa8,
 0x51, 0xa3, 0x40, 0x8f, 0x92, 0x9d, 0x38, 0xf5, 0xbc, 0xb6, 0xda, 0x21, 0x10, 0xff, 0xf3, 0xd2,
 0xcd, 0x0c, 0x13, 0xec, 0x5f, 0x97, 0x44, 0x17, 0xc4, 0xa7, 0x7e, 0x3d, 0x64, 0x5d, 0x19, 0x73,
 0x60, 0x81, 0x4f, 0xdc, 0x22, 0x2a, 0x90, 0x88, 0x46, 0xee, 0xb8, 0x14, 0xde, 0x5e, 0x0b, 0xdb,
 0xe0, 0x32, 0x3a, 0x0a, 0x49, 0x06, 0x24, 0x5c, 0xc2, 0xd3, 0xac, 0x62, 0x91, 0x95, 0xe4, 0x79,
 0xe7, 0xc8, 0x37, 0x6d, 0x8d, 0xd5, 0x4e, 0xa9, 0x6c, 0x56, 0xf4, 0xea, 0x65, 0x7a, 0xae, 0x08,
 0xba, 0x78, 0x25, 0x2e, 0x1c, 0xa6, 0xb4, 0xc6, 0xe8, 0xdd, 0x74, 0x1f, 0x4b, 0xbd, 0x8b, 0x8a,
 0x70, 0x3e, 0xb5, 0x66, 0x48, 0x03, 0xf6, 0x0e, 0x61, 0x35, 0x57, 0xb9, 0x86, 0xc1, 0x1d, 0x9e,
 0xe1, 0xf8, 0x98, 0x11, 0x69, 0xd9, 0x8e, 0x94, 0x9b, 0x1e, 0x87, 0xe9, 0xce, 0x55, 0x28, 0xdf,
 0x8c, 0xa1, 0x89, 0x0d, 0xbf, 0xe6, 0x42, 0x68, 0x41, 0x99, 0x2d, 0x0f, 0xb0, 0x54, 0xbb, 0x16 };


const unsigned char InvSBox[256]={
0x52 ,0x09 ,0x6a ,0xd5 ,0x30 ,0x36 ,0xa5 ,0x38 ,0xbf ,0x40 ,0xa3 ,0x9e ,0x81 ,0xf3 ,0xd7 ,0xfb,
0x7c ,0xe3 ,0x39 ,0x82 ,0x9b ,0x2f ,0xff ,0x87 ,0x34 ,0x8e ,0x43 ,0x44 ,0xc4 ,0xde ,0xe9 ,0xcb,
0x54 ,0x7b ,0x94 ,0x32 ,0xa6 ,0xc2 ,0x23 ,0x3d ,0xee ,0x4c ,0x95 ,0x0b ,0x42 ,0xfa ,0xc3 ,0x4e,
0x08 ,0x2e ,0xa1 ,0x66 ,0x28 ,0xd9 ,0x24 ,0xb2 ,0x76 ,0x5b ,0xa2 ,0x49 ,0x6d ,0x8b ,0xd1 ,0x25,
0x72 ,0xf8 ,0xf6 ,0x64 ,0x86 ,0x68 ,0x98 ,0x16 ,0xd4 ,0xa4 ,0x5c ,0xcc ,0x5d ,0x65 ,0xb6 ,0x92,
0x6c ,0x70 ,0x48 ,0x50 ,0xfd ,0xed ,0xb9 ,0xda ,0x5e ,0x15 ,0x46 ,0x57 ,0xa7 ,0x8d ,0x9d ,0x84,
0x90 ,0xd8 ,0xab ,0x00 ,0x8c ,0xbc ,0xd3 ,0x0a ,0xf7 ,0xe4 ,0x58 ,0x05 ,0xb8 ,0xb3 ,0x45 ,0x06,
0xd0 ,0x2c ,0x1e ,0x8f ,0xca ,0x3f ,0x0f ,0x02 ,0xc1 ,0xaf ,0xbd ,0x03 ,0x01 ,0x13 ,0x8a ,0x6b,
0x3a ,0x91 ,0x11 ,0x41 ,0x4f ,0x67 ,0xdc ,0xea ,0x97 ,0xf2 ,0xcf ,0xce ,0xf0 ,0xb4 ,0xe6 ,0x73,
0x96 ,0xac ,0x74 ,0x22 ,0xe7 ,0xad ,0x35 ,0x85 ,0xe2 ,0xf9 ,0x37 ,0xe8 ,0x1c ,0x75 ,0xdf ,0x6e,
0x47 ,0xf1 ,0x1a ,0x71 ,0x1d ,0x29 ,0xc5 ,0x89 ,0x6f ,0xb7 ,0x62 ,0x0e ,0xaa ,0x18 ,0xbe ,0x1b,
0xfc ,0x56 ,0x3e ,0x4b ,0xc6 ,0xd2 ,0x79 ,0x20 ,0x9a ,0xdb ,0xc0 ,0xfe ,0x78 ,0xcd ,0x5a ,0xf4,
0x1f ,0xdd ,0xa8 ,0x33 ,0x88 ,0x07 ,0xc7 ,0x31 ,0xb1 ,0x12 ,0x10 ,0x59 ,0x27 ,0x80 ,0xec ,0x5f,
0x60 ,0x51 ,0x7f ,0xa9 ,0x19 ,0xb5 ,0x4a ,0x0d ,0x2d ,0xe5 ,0x7a ,0x9f ,0x93 ,0xc9 ,0x9c ,0xef,
0xa0 ,0xe0 ,0x3b ,0x4d ,0xae ,0x2a ,0xf5 ,0xb0 ,0xc8 ,0xeb ,0xbb ,0x3c ,0x83 ,0x53 ,0x99 ,0x61,
0x17 ,0x2b ,0x04 ,0x7e ,0xba ,0x77 ,0xd6 ,0x26 ,0xe1 ,0x69 ,0x14 ,0x63 ,0x55 ,0x21 ,0x0c ,0x7d};


const unsigned char RCon[10] = {0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x1b, 0x36};



unsigned char mult14(char value){
 return (((((((value<<1) ^ ((value & 0x080) ? 0x1b : 0x00))<<1) ^ ((((value<<1) ^ ((value & 0x080) ? 0x1b : 0x00)) & 0x080) ? 0x1b : 0x00))<<1) ^ ((((((value<<1) ^ ((value & 0x080) ? 0x1b : 0x00))<<1) ^ ((((value<<1) ^ ((value & 0x080) ? 0x1b : 0x00)) & 0x080) ? 0x1b : 0x00)) & 0x080) ? 0x1b : 0x00)) ^ ((((value<<1) ^ ((value & 0x080) ? 0x1b : 0x00))<<1) ^ ((((value<<1) ^ ((value & 0x080) ? 0x1b : 0x00)) & 0x080) ? 0x1b : 0x00)) ^ ((value<<1) ^ ((value & 0x080) ? 0x1b : 0x00)));
}

unsigned char mult13(char value){
 return (((((((value<<1) ^ ((value & 0x080) ? 0x1b : 0x00))<<1) ^ ((((value<<1) ^ ((value & 0x080) ? 0x1b : 0x00)) & 0x080) ? 0x1b : 0x00))<<1) ^ ((((((value<<1) ^ ((value & 0x080) ? 0x1b : 0x00))<<1) ^ ((((value<<1) ^ ((value & 0x080) ? 0x1b : 0x00)) & 0x080) ? 0x1b : 0x00)) & 0x080) ? 0x1b : 0x00)) ^ ((((value<<1) ^ ((value & 0x080) ? 0x1b : 0x00))<<1) ^ ((((value<<1) ^ ((value & 0x080) ? 0x1b : 0x00)) & 0x080) ? 0x1b : 0x00)) ^ value);
}

unsigned char mult11(char value){
 return (((((((value<<1) ^ ((value & 0x080) ? 0x1b : 0x00))<<1) ^ ((((value<<1) ^ ((value & 0x080) ? 0x1b : 0x00)) & 0x080) ? 0x1b : 0x00))<<1) ^ ((((((value<<1) ^ ((value & 0x080) ? 0x1b : 0x00))<<1) ^ ((((value<<1) ^ ((value & 0x080) ? 0x1b : 0x00)) & 0x080) ? 0x1b : 0x00)) & 0x080) ? 0x1b : 0x00)) ^ ((value<<1) ^ ((value & 0x080) ? 0x1b : 0x00)) ^ value);
}

unsigned char mult9(char value){
 return (((((((value<<1) ^ ((value & 0x080) ? 0x1b : 0x00))<<1) ^ ((((value<<1) ^ ((value & 0x080) ? 0x1b : 0x00)) & 0x080) ? 0x1b : 0x00))<<1) ^ ((((((value<<1) ^ ((value & 0x080) ? 0x1b : 0x00))<<1) ^ ((((value<<1) ^ ((value & 0x080) ? 0x1b : 0x00)) & 0x080) ? 0x1b : 0x00)) & 0x080) ? 0x1b : 0x00)) ^ value);
}


void decrypt(unsigned char CipherText[4][4], unsigned char PlainText[4][4]) {_ssdm_SpecArrayDimSize(CipherText, 4);_ssdm_SpecArrayDimSize(PlainText, 4);




_ssdm_op_SpecInterface(0, "s_axilite", 0, 0, "", 0, 0, "AES_bus;", "", "", 0, 0, 0, 0, "", "");
_ssdm_op_SpecInterface(CipherText, "s_axilite", 0, 0, "", 0, 0, "AES_bus;", "", "", 0, 0, 0, 0, "", "");
_ssdm_op_SpecInterface(PlainText, "s_axilite", 0, 0, "", 0, 0, "AES_bus;", "", "", 0, 0, 0, 0, "", "");





 unsigned char StateArray [4][4];
 unsigned char ExpandedKey[11][4][4];
 unsigned char TempKeyCol[4];
 unsigned char Key[4][4] = {
   {0x2b, 0x28, 0xab, 0x09},
   {0x7e, 0xae, 0xf7, 0xcf},
   {0x15, 0xd2, 0x15, 0x4f},
   {0x16, 0xa6, 0x88, 0x3c}};



 for(int i=0; i<4; i++) {
  for(int j=0; j<4; j++) {
   ExpandedKey[0][i][j] = Key[i][j];
  }
 }


 for (int i=1; i<11; i++){

  TempKeyCol[0]=ExpandedKey[i-1][1][3];
  TempKeyCol[1]=ExpandedKey[i-1][2][3];
  TempKeyCol[2]=ExpandedKey[i-1][3][3];
  TempKeyCol[3]=ExpandedKey[i-1][0][3];


  TempKeyCol[0]=SBox[ TempKeyCol[0] ];
  TempKeyCol[1]=SBox[ TempKeyCol[1] ];
  TempKeyCol[2]=SBox[ TempKeyCol[2] ];
  TempKeyCol[3]=SBox[ TempKeyCol[3] ];


  TempKeyCol[0]^=RCon[i-1];


  for(int j=0; j<4; j++){
   TempKeyCol[0] = TempKeyCol[0]^ExpandedKey[i-1][0][j];
   TempKeyCol[1] = TempKeyCol[1]^ExpandedKey[i-1][1][j];
   TempKeyCol[2] = TempKeyCol[2]^ExpandedKey[i-1][2][j];
   TempKeyCol[3] = TempKeyCol[3]^ExpandedKey[i-1][3][j];

   ExpandedKey[i][0][j] = TempKeyCol[0];
   ExpandedKey[i][1][j] = TempKeyCol[1];
   ExpandedKey[i][2][j] = TempKeyCol[2];
   ExpandedKey[i][3][j] = TempKeyCol[3];
  }
 }



 for(int i=0; i<4; i++) {
  for(int j=0; j<4; j++) {
   StateArray[i][j] = CipherText[i][j];
  }
 }





 for(int r=10; r>=1; r--){

  for(int i=0; i<4; i++)
   for(int j=0; j<4; j++)
    StateArray[i][j] ^= ExpandedKey[r][i][j];


  if(r!=10){

   unsigned char StateArrayTmp[4][4];

   for(int i=0;i<4;i++){
    StateArrayTmp[0][i] =
      mult14(StateArray[0][i])^mult11(StateArray[1][i])^mult13(StateArray[2][i])^mult9(StateArray[3][i]);
    StateArrayTmp[1][i] =
      mult9(StateArray[0][i])^mult14(StateArray[1][i])^mult11(StateArray[2][i])^mult13(StateArray[3][i]);
    StateArrayTmp[2][i] =
      mult13(StateArray[0][i])^mult9(StateArray[1][i])^mult14(StateArray[2][i])^mult11(StateArray[3][i]);
    StateArrayTmp[3][i] =
      mult11(StateArray[0][i])^mult13(StateArray[1][i])^mult9(StateArray[2][i])^mult14(StateArray[3][i]);
   }


   for(int i=0; i<4; i++) {
    for(int j=0; j<4; j++) {
     StateArray[i][j] = StateArrayTmp[i][j];
    }
   }

  }


  unsigned char x;

  x = StateArray[1][3];
  StateArray[1][3] = StateArray[1][2];
  StateArray[1][2] = StateArray[1][1];
  StateArray[1][1] = StateArray[1][0];
  StateArray[1][0] = x;

  x = StateArray[2][2];
  StateArray[2][2] = StateArray[2][0];
  StateArray[2][0] = x;
  x = StateArray[2][3];
  StateArray[2][3] = StateArray[2][1];
  StateArray[2][1] = x;

  x = StateArray[3][0];
  StateArray[3][0] = StateArray[3][1];
  StateArray[3][1] = StateArray[3][2];
  StateArray[3][2] = StateArray[3][3];
  StateArray[3][3] = x;




  for(int i=0; i<4; i++)
   for(int j=0; j<4; j++)
    StateArray[i][j] = InvSBox[StateArray[i][j]];


 }

 for(int i=0; i<4; i++)
  for(int j=0; j<4; j++)
   StateArray[i][j] ^= ExpandedKey[0][i][j];



 for(int i=0; i<4; i++) {
  for(int j=0; j<4; j++) {
   PlainText[i][j] = StateArray[i][j];
  }
 }

}
