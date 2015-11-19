
//
// This source file is part of appleseed.
// Visit http://appleseedhq.net/ for additional information and resources.
//
// This software is released under the MIT license.
//
// Copyright (c) 2014-2015 Francois Beaune, The appleseedhq Organization
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
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#ifndef APPLESEED_FOUNDATION_PLATFORM_EXRHEADERGUARDS_H
#define APPLESEED_FOUNDATION_PLATFORM_EXRHEADERGUARDS_H

#if defined _MSC_VER

    // C4244: conversion from 'std::streamsize' to 'int', possible loss of data
    // C4800: forcing value to bool 'true' or 'false'
    #define BEGIN_EXR_INCLUDES              \
        __pragma(warning(push))             \
        __pragma(warning(disable: 4244))    \
        __pragma(warning(disable: 4800))

    #define END_EXR_INCLUDES                \
        __pragma(warning(pop))

#else

    #define BEGIN_EXR_INCLUDES
    #define END_EXR_INCLUDES

#endif

#endif  // !APPLESEED_FOUNDATION_PLATFORM_EXRHEADERGUARDS_H