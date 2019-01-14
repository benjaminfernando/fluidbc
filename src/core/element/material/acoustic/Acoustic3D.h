// Acoustic3D.h
// created by Kuangdai on 23-Apr-2016
// 3D acoustic

#pragma once

#include "Acoustic.h"
#include "eigenc.h"

class Acoustic3D: public Acoustic {
public:
    // constructor
    Acoustic3D(const RMatXN &KFluid, const RDMatXN Rho): mKFlat(KFluid), mRho(Rho) {};


    RDMatXN getRho() const {return mRho;};
    void strainToStress(FluidResponse &response) const;
    
    // verbose
    std::string verbose() const {return "Acoustic3D";};

    // 1D or Fourier space
    bool is1D() const {return false;};

    // check compatibility
    void checkCompatibility(int Nr) const;
private:
    RMatXN mKFlat;
    RDMatXN mRho;

};
