/*******************************************************************************
* Copyright 2020 Intel Corporation
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
*******************************************************************************/

#pragma once

#include "oneapi/dal/algo/knn/common.hpp"

namespace oneapi::dal::knn {

class detail::model_impl : public base {
public:
    class interop_model;
    model_impl() : interop_(nullptr) {}
    model_impl(interop_model* interop) : interop_(interop) {}
    interop_model* get_interop() {
        return interop_;
    }

private:
    interop_model* interop_;
};

} // namespace oneapi::dal::knn
