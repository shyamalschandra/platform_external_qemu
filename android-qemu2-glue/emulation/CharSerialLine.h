// Copyright 2015 The Android Open Source Project
//
// This software is licensed under the terms of the GNU General Public
// License version 2, as published by the Free Software Foundation, and
// may be copied, distributed, and modified under those terms.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

#pragma once

#include "android/base/Compiler.h"
#include "android/emulation/SerialLine.h"
extern "C" {
  #include "qemu/osdep.h"
  #include "sysemu/char.h"
}

// QEMU1-specific implementation of the generic SerialLine interface,
// based on CharDriverState

namespace android {
namespace qemu2 {

class CharSerialLine : public android::SerialLine {
public:
    // takes ownership of |cs|, deletes it in destructor
    CharSerialLine(CharDriverState* cs);

    ~CharSerialLine();

    virtual void addHandlers(void* opaque, CanReadFunc canReadFunc, ReadFunc readFunc);

    virtual int write(const uint8_t* data, int len);

    CharDriverState* state() const { return mBackend.chr; }

    CharDriverState* release() {
        CharDriverState* cs = mBackend.chr;
        mBackend.chr = nullptr;
        return cs;
    }

private:
    DISALLOW_COPY_AND_ASSIGN(CharSerialLine);

private:
    CharBackend mBackend = { 0 };
};

}  // namespace qemu2
}  // namespace android
