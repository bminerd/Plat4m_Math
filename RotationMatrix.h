//------------------------------------------------------------------------------
//       _______    __                           ___
//      ||  ___ \  || |             __          //  |
//      || |  || | || |   _______  || |__      //   |    _____  ___
//      || |__|| | || |  // ___  | ||  __|    // _  |   ||  _ \/ _ \
//      ||  ____/  || | || |  || | || |      // /|| |   || |\\  /\\ \
//      || |       || | || |__|| | || |     // /_|| |_  || | || | || |
//      || |       || |  \\____  | || |__  //_____   _| || | || | || |
//      ||_|       ||_|       ||_|  \\___|       ||_|   ||_| ||_| ||_|
//
//
// The MIT License (MIT)
//
// Copyright (c) 2017 Benjamin Minerd
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//------------------------------------------------------------------------------

///
/// @file RotationMatrix.h
/// @author Ben Minerd
/// @date 5/10/2017
/// @brief RotationMatrix class header file.
///

#ifndef PLAT4M_MATH_ROTATION_MATRIX_H
#define PLAT4M_MATH_ROTATION_MATRIX_H

//------------------------------------------------------------------------------
// Include files
//------------------------------------------------------------------------------

#include <Plat4m_Math/MatrixBase.h>

//------------------------------------------------------------------------------
// Namespaces
//------------------------------------------------------------------------------

namespace Plat4m
{

namespace Math
{

//------------------------------------------------------------------------------
// Classes
//------------------------------------------------------------------------------

///
/// @brief Class that inherits from RotationMatrixBase to provide a general N x M matrix
/// implementation.
/// @tparam ValueType Type of value to be stored in this matrix (ex. double,
/// float, uint32_t, etc.).
/// @tparam N Number of matrix rows.
/// @tparam M Number of matrix columns.
///
template <typename ValueType>
class RotationMatrix : public MatrixBase<ValueType, 3, 3>
{
public:

    //--------------------------------------------------------------------------
    // Public constructors
    //--------------------------------------------------------------------------

    //--------------------------------------------------------------------------
    RotationMatrix() :
        MatrixBase<ValueType, 3, 3>()
    {
    	MatrixBase<ValueType, 3, 3>::setValue(0, 0, 1.0);
    	MatrixBase<ValueType, 3, 3>::setValue(1, 1, 1.0);
    	MatrixBase<ValueType, 3, 3>::setValue(2, 2, 1.0);
    }

    //--------------------------------------------------------------------------
    RotationMatrix(const ValueType values[3][3]) :
        MatrixBase<ValueType, 3, 3>(values)
    {
    }

    //--------------------------------------------------------------------------
    // Public overloaded operators
    //--------------------------------------------------------------------------

    // Assignment operator
    //--------------------------------------------------------------------------
    RotationMatrix<ValueType>& operator=(
                              const MatrixBase<ValueType, 3, 3>& rotationMatrix)
    {
        MatrixBase<ValueType, 3, 3>::operator=(rotationMatrix);

        return (*this);
    }
};

}; // namespace Math

}; // namespace Plat4m

#endif // PLAT4M_MATH_ROTATION_MATRIX_H
