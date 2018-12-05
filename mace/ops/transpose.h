// Copyright 2018 Xiaomi, Inc.  All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef MACE_OPS_TRANSPOSE_H_
#define MACE_OPS_TRANSPOSE_H_

#include <vector>

#include "mace/public/mace.h"

namespace mace {
namespace ops {

MaceStatus Transpose(const float *input,
                     const std::vector<int64_t> &input_shape,
                     const std::vector<int> &dst_dims,
                     float *output);

}  // namespace ops
}  // namespace mace

#endif  // MACE_OPS_TRANSPOSE_H_