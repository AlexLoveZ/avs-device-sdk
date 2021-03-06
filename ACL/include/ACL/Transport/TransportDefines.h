/*
 * TransportDefines.h
 *
 * Copyright 2016-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *     http://aws.amazon.com/apache2.0/
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#ifndef ALEXA_CLIENT_SDK_ACL_INCLUDE_ACL_TRANSPORT_TRANSPORT_DEFINES_H_
#define ALEXA_CLIENT_SDK_ACL_INCLUDE_ACL_TRANSPORT_TRANSPORT_DEFINES_H_

#include "AVSCommon/Utils/RetryTimer.h"

namespace alexaClientSDK {
namespace acl {

class TransportDefines {
public:
    /// Table with the retry times on subsequent retries.
    static int RETRY_TABLE[];

    /// Size of the retry table.
    static int RETRY_TABLE_SIZE;

    /// Randomization used in the computation of retry times.
    static double RETRY_RANDOMIZATION_FACTOR;

    /// Lower bound of the interval to distribute the retry duration.
    static double RETRY_DECREASE_FACTOR;

    /// Upper bound of the interval to distribute the retry duration.
    static double RETRY_INCREASE_FACTOR;

    /// Retry Timer Object for transport.
    static avsCommon::utils::RetryTimer RETRY_TIMER;
};

}  // namespace acl
}  // namespace alexaClientSDK

#endif  // end ALEXA_CLIENT_SDK_ACL_INCLUDE_ACL_TRANSPORT_TRANSPORT_DEFINES_H_
