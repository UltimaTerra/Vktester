#ifndef _VKTSHADERRENDERINVARIANCETESTS_HPP
#define _VKTSHADERRENDERINVARIANCETESTS_HPP
/*------------------------------------------------------------------------
 * Vulkan Conformance Tests
 * ------------------------
 *
 * Copyright (c) 2019 The Khronos Group Inc.
 * Copyright (c) 2018 Google Inc.
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
 * \brief Invariant and precise decoration tests.
 *//*--------------------------------------------------------------------*/

#include "tcuDefs.hpp"
#include "tcuTestCase.hpp"

namespace vkt::sr
{

tcu::TestCaseGroup *createShaderInvarianceTests(tcu::TestContext &testCtx);
tcu::TestCaseGroup *createShaderPreciseTests(tcu::TestContext &testCtx);

} // namespace vkt::sr

#endif // _VKTSHADERRENDERINVARIANCETESTS_HPP
