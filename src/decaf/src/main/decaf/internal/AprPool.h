/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _DECAF_INTERNAL_APRPOOL_H_
#define _DECAF_INTERNAL_APRPOOL_H_

#include <decaf/util/Config.h>
#include <apr_pools.h>

namespace decaf{
namespace internal{

    /**
     * Wraps an APR pool object so that classes in decaf can create a static
     * member for use in static methods where apr function calls that need a pool
     * are made.
     */
    class AprPool {
    private:

        apr_pool_t* aprPool;

    public:

        AprPool();
        virtual ~AprPool();

        /**
         * Gets the internal APR Pool.
         * @returns the internal APR pool
         */
        apr_pool_t* getAprPool() const {
            return aprPool;
        }

    };

}}

#endif /*_DECAF_INTERNAL_APRPOOL_H_*/
