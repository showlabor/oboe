/*
 * Copyright 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#include "FifoControllerIndirect.h"

FifoControllerIndirect::FifoControllerIndirect(uint32_t numFrames,
                                               uint32_t threshold,
                                               int64_t * readCounterAddress,
                                               int64_t * writeCounterAddress)
        : FifoControllerBase(numFrames, threshold)
        , mReadCounterAddress((std::atomic<uint64_t> *) readCounterAddress)
        , mWriteCounterAddress((std::atomic<uint64_t> *) writeCounterAddress)
{
}

FifoControllerIndirect::~FifoControllerIndirect() {
}
