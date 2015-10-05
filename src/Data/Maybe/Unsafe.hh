///////////////////////////////////////////////////////////////////////////////
//
// Module      :  Unsafe.hh
// Copyright   :  (c) Andy Arvanitis 2015
// License     :  MIT
//
// Maintainer  :  Andy Arvanitis <andy.arvanitis@gmail.com>
// Stability   :  experimental
// Portability :
//
// Data.Maybe.Unsafe FFI functions
//
///////////////////////////////////////////////////////////////////////////////
//
#ifndef Data_Maybe_Unsafe_FFI_HH
#define Data_Maybe_Unsafe_FFI_HH

#include "PureScript/PureScript.hh"

namespace Data_Maybe_Unsafe {
  using namespace PureScript;

  inline auto unsafeThrow(const any& message) -> any {
    throw runtime_error(message);
  }

}

#endif // Data_Maybe_Unsafe_FFI_HH
