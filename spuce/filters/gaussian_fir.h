#pragma once
// Copyright (c) 2015 Tony Kirke. License MIT  (http://www.opensource.org/licenses/mit-license.php)
#include <spuce/filters/fir_coeff.h>
namespace spuce {
//! \file
//! \brief Calculate coefficients for FIR assuming gaussian frequency response
//! \author Tony Kirke,  Copyright(c) 2001
//! \ingroup functions fir
void gaussian_fir(fir_coeff<float_type>& gaussf, float_type bt, float_type spb);
}  // namespace spuce
