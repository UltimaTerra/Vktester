#ifndef _VKTSYNCHRONIZATIONBASICFENCETESTS_HPP
#define _VKTSYNCHRONIZATIONBASICFENCETESTS_HPP
/*------------------------------------------------------------------------
 * Vulkan Conformance Tests
 * ------------------------
 *
 * Copyright (c) 2016 The Khronos Group Inc.
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
 * \brief Synchronization fence basic tests
 *//*--------------------------------------------------------------------*/

#include "vkDefs.hpp"
#include "tcuTestCase.hpp"
#include "vktSynchronizationDefs.hpp"

namespace vkt
{
namespace synchronization
{

tcu::TestCaseGroup *createBasicFenceTests(tcu::TestContext &testCtx,
                                          VideoCodecOperationFlags VideoCodecOperationFlags = 0);

} // namespace synchronization
} // namespace vkt

#endif // _VKTSYNCHRONIZATIONBASICFENCETESTS_HPP
