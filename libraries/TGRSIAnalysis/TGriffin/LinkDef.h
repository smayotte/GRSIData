//TGriffin.h TGriffinHit.h TGriffinBgo.h TGriffinBgoHit.h TGriffinAngles.h
#ifdef __CINT__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;
#pragma link off     nestedclasses;

//#pragma link C++ class std::vector<Short_t>+;

#pragma link C++ class TGriffinHit + ;
#pragma link C++ class std::vector < TGriffinHit> + ;
#pragma link C++ class std::vector < TGriffinHit*> + ;
#pragma link C++ class TGriffin + ;
#pragma link C++ class TGriffinBgoHit + ;
#pragma link C++ class TGriffinBgo + ;
#pragma link C++ class TGriffinAngles + ;

#endif
