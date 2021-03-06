/* file: adaboost_predict_dense_default_batch_fpt_dispatcher_v1.cpp */
/*******************************************************************************
* Copyright 2014-2020 Intel Corporation
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

/*
//++
//  Implementation of Ada Boost prediction algorithm container --
//  a class that contains Fast Ada Boost kernels for supported architectures.
//--
*/

#include "algorithms/boosting/adaboost_predict.h"
#include "src/algorithms/adaboost/inner/adaboost_predict_batch_container_v1.h"

namespace daal
{
namespace algorithms
{
__DAAL_INSTANTIATE_DISPATCH_CONTAINER(adaboost::prediction::interface1::BatchContainer, batch, DAAL_FPTYPE, adaboost::prediction::defaultDense)
} // namespace algorithms
} // namespace daal
