/*  vim:expandtab:shiftwidth=2:tabstop=2:smarttab:
 * 
 *  LibMemcached
 *
 *  Copyright (C) 2011 Data Differential, http://datadifferential.com/
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are
 *  met:
 *
 *      * Redistributions of source code must retain the above copyright
 *  notice, this list of conditions and the following disclaimer.
 *
 *      * Redistributions in binary form must reproduce the above
 *  copyright notice, this list of conditions and the following disclaimer
 *  in the documentation and/or other materials provided with the
 *  distribution.
 *
 *      * The names of its contributors may not be used to endorse or
 *  promote products derived from this software without specific prior
 *  written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *
 * Portions Copyright (C) 2012-2012 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Amazon Software License (the "License"). You may not use this
 * file except in compliance with the License. A copy of the License is located at
 *  http://aws.amazon.com/asl/
 * or in the "license" file accompanying this file. This file is distributed on
 * an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, express or
 * implied. See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

/* These are private */ 
#define memcached_is_dynamic_client_mode(__object) ((__object)->flags.client_mode == DYNAMIC_MODE)
#define memcached_is_static_client_mode(__object) ((__object)->flags.client_mode == STATIC_MODE)
#define memcached_is_unknown_client_mode(__object) ((__object)->flags.client_mode == UNDEFINED)
#define memcached_is_allocated(__object) ((__object)->options.is_allocated)
#define memcached_is_encrypted(__object) ((__object)->hashkit._key)
#define memcached_is_udp(__object) ((__object)->flags.use_udp)
#define memcached_is_verify_key(__object) ((__object)->flags.verify_key)
#define memcached_is_binary(__object) ((__object)->flags.binary_protocol)
#define memcached_is_initialized(__object) ((__object)->options.is_initialized)
#define memcached_is_purging(__object) ((__object)->state.is_purging)
#define memcached_is_processing_input(__object) ((__object)->state.is_processing_input)

#define memcached_is_buffering(__object) ((__object)->flags.buffer_requests)
#define memcached_is_replying(__object) ((__object)->flags.reply)

#define memcached_has_error(__object) ((__object)->error_messages)

#define memcached_has_replicas(__object) ((__object)->root->number_of_replicas)

#define memcached_set_processing_input(__object, __value) ((__object)->state.is_processing_input= (__value))
#define memcached_set_initialized(__object, __value) ((__object)->options.is_initialized(= (__value))
#define memcached_set_allocated(__object, __value) ((__object)->options.is_allocated= (__value))
