#ifndef _SGLRCONTEXTUTIL_HPP
#define _SGLRCONTEXTUTIL_HPP
/*-------------------------------------------------------------------------
 * drawElements Quality Program OpenGL ES Utilities
 * ------------------------------------------------
 *
 * Copyright 2014 The Android Open Source Project
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
 *
 *//*!
 * \file
 * \brief SGLR Context utilities.
 *//*--------------------------------------------------------------------*/

#include "tcuDefs.hpp"
#include "tcuVector.hpp"

namespace sglr
{

class Context;

void drawQuad(sglr::Context &ctx, uint32_t program, const tcu::Vec3 &p0, const tcu::Vec3 &p1);

void drawQuadWithVaoBuffers(sglr::Context &ctx, uint32_t program, const tcu::Vec3 &p0, const tcu::Vec3 &p1);
void drawQuadWithClientPointers(sglr::Context &ctx, uint32_t program, const tcu::Vec3 &p0, const tcu::Vec3 &p1);

} // namespace sglr

#endif // _SGLRCONTEXTUTIL_HPP
