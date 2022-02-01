/* file: explained_variance_result.cpp */
/*******************************************************************************
* Copyright 2014 Intel Corporation
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

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include "daal.h"
#include "com_intel_daal_algorithms_pca_quality_metric_ExplainedVarianceResult.h"
#include "com/intel/daal/common_helpers.h"

USING_COMMON_NAMESPACES();
using namespace daal::algorithms::pca::quality_metric;
using namespace daal::algorithms::pca::quality_metric::explained_variance;

#include "com_intel_daal_algorithms_pca_quality_metric_ExplainedVarianceResultId.h"
#define ExplainedVariances       com_intel_daal_algorithms_pca_quality_metric_ExplainedVarianceResultId_explainedVariancesId
#define ExplainedVariancesRatios com_intel_daal_algorithms_pca_quality_metric_ExplainedVarianceResultId_explainedVariancesRatiosId
#define NoiseVariance            com_intel_daal_algorithms_pca_quality_metric_ExplainedVarianceResultId_noiseVarianceId

/*
* Class:     com_intel_daal_algorithms_pca_quality_metric_ExplainedVarianceResult
* Method:    cSetResultTable
* Signature: (JIJ)V
*/
JNIEXPORT void JNICALL Java_com_intel_daal_algorithms_pca_quality_1metric_ExplainedVarianceResult_cSetResultTable(JNIEnv *, jobject, jlong resAddr,
                                                                                                                  jint id, jlong ntAddr)
{
    jniArgument<explained_variance::Result>::set<explained_variance::ResultId, NumericTable>(resAddr, id, ntAddr);
}

/*
* Class:     com_intel_daal_algorithms_pca_quality_metric_ExplainedVarianceResult
* Method:    cGetResultTable
* Signature: (JI)J
*/
JNIEXPORT jlong JNICALL Java_com_intel_daal_algorithms_pca_quality_1metric_ExplainedVarianceResult_cGetResultTable(JNIEnv *, jobject, jlong resAddr,
                                                                                                                   jint id)
{
    if (id == ExplainedVariances)
        return jniArgument<explained_variance::Result>::get<explained_variance::ResultId, NumericTable>(resAddr, explainedVariances);
    if (id == ExplainedVariancesRatios)
        return jniArgument<explained_variance::Result>::get<explained_variance::ResultId, NumericTable>(resAddr, explainedVariancesRatios);
    if (id == NoiseVariance) return jniArgument<explained_variance::Result>::get<explained_variance::ResultId, NumericTable>(resAddr, noiseVariance);
    return (jlong)0;
}

/*
* Class:     com_intel_daal_algorithms_pca_quality_metric_ExplainedVarianceResult
* Method:    cNewResult
* Signature: ()J
*/
JNIEXPORT jlong JNICALL Java_com_intel_daal_algorithms_pca_quality_1metric_ExplainedVarianceResult_cNewResult(JNIEnv *, jobject)
{
    return jniArgument<explained_variance::Result>::newObj();
}
