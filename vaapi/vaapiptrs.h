/*
 * Copyright (C) 2013 Intel Corporation. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef vaapiptrs_h
#define vaapiptrs_h

#include "interface/VideoCommonDefs.h"

namespace YamiMediaCodec{
class VaapiSurface;
typedef SharedPtr < VaapiSurface > SurfacePtr;

class VaapiCodedBuffer;
typedef SharedPtr < VaapiCodedBuffer > CodedBufferPtr;

class VaapiBuffer;
typedef SharedPtr<VaapiBuffer> BufObjectPtr;

class VaapiDisplay;
typedef SharedPtr < VaapiDisplay > DisplayPtr;

class VaapiConfig;
typedef SharedPtr < VaapiConfig > ConfigPtr;

class VaapiContext;
typedef SharedPtr < VaapiContext > ContextPtr;

class VaapiDecSurfacePool;
typedef SharedPtr < VaapiDecSurfacePool > DecSurfacePoolPtr;

} //namespace YamiMediaCodec

#endif                          /* vaapiptr_h */
