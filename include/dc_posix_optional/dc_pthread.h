#ifndef LIBDC_POSIX_OPTIONAL_DC_PTHREAD_H
#define LIBDC_POSIX_OPTIONAL_DC_PTHREAD_H


/*
 * Copyright 2022-2022 D'Arcy Smith.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#include <dc_env/env.h>
#include <dc_posix/dc_pthread.h>
#include <pthread.h>


#ifdef __cplusplus
extern "C" {
#endif


/**
 *
 * @param env
 * @param err
 * @param attr
 * @param inheritsched
 * @return
 */
int dc_pthread_attr_getinheritsched(const struct dc_env *env, struct dc_error *err, const pthread_attr_t *restrict attr, int *restrict inheritsched);

/**
 *
 * @param env
 * @param err
 * @param attr
 * @param policy
 * @return
 */
int dc_pthread_attr_getschedpolicy(const struct dc_env *env, struct dc_error *err, const pthread_attr_t *restrict attr, int *restrict policy);

/**
 *
 * @param env
 * @param err
 * @param attr
 * @param contentionscope
 * @return
 */
int dc_pthread_attr_getscope(const struct dc_env *env, struct dc_error *err, const pthread_attr_t *restrict attr, int *restrict contentionscope);

/**
 *
 * @param env
 * @param err
 * @param attr
 * @param stackaddr
 * @param stacksize
 * @return
 */
int dc_pthread_attr_getstack(const struct dc_env *env, struct dc_error *err, const pthread_attr_t *restrict attr, void **restrict stackaddr, size_t *restrict stacksize);

/**
 *
 * @param env
 * @param err
 * @param attr
 * @param stacksize
 * @return
 */
int dc_pthread_attr_getstacksize(const struct dc_env *env, struct dc_error *err, const pthread_attr_t *restrict attr, size_t *restrict stacksize);

/**
 *
 * @param env
 * @param err
 * @param attr
 * @param inheritsched
 * @return
 */
int dc_pthread_attr_setinheritsched(const struct dc_env *env, struct dc_error *err, pthread_attr_t *attr, int inheritsched);

/**
 *
 * @param env
 * @param err
 * @param attr
 * @param policy
 * @return
 */
int dc_pthread_attr_setschedpolicy(const struct dc_env *env, struct dc_error *err, pthread_attr_t *attr, int policy);

/**
 *
 * @param env
 * @param err
 * @param attr
 * @param contentionscope
 * @return
 */
int dc_pthread_attr_setscope(const struct dc_env *env, struct dc_error *err, pthread_attr_t *attr, int contentionscope);

/**
 *
 * @param env
 * @param err
 * @param attr
 * @param stackaddr
 * @param stacksize
 * @return
 */
int dc_pthread_attr_setstack(const struct dc_env *env, struct dc_error *err, pthread_attr_t *attr, void *stackaddr, size_t stacksize);

/**
 *
 * @param env
 * @param err
 * @param attr
 * @param stacksize
 * @return
 */
int dc_pthread_attr_setstacksize(const struct dc_env *env, struct dc_error *err, pthread_attr_t *attr, size_t stacksize);

/**
 *
 * @param env
 * @param err
 * @param attr
 * @param pshared
 * @return
 */
int dc_pthread_barrierattr_getpshared(const struct dc_env *env, struct dc_error *err, const pthread_barrierattr_t *restrict attr, int *restrict pshared);

/**
 *
 * @param env
 * @param err
 * @param attr
 * @param pshared
 * @return
 */
int dc_pthread_barrierattr_setpshared(const struct dc_env *env, struct dc_error *err, pthread_barrierattr_t *attr, int pshared);

/**
 *
 * @param env
 * @param err
 * @param attr
 * @param pshared
 * @return
 */
int dc_pthread_condattr_getpshared(const struct dc_env *env, struct dc_error *err, const pthread_condattr_t *restrict attr, int *restrict pshared);

/**
 *
 * @param env
 * @param err
 * @param attr
 * @param pshared
 * @return
 */
int dc_pthread_condattr_setpshared(const struct dc_env *env, struct dc_error *err, pthread_condattr_t *attr, int pshared);

/**
 *
 * @param env
 * @param err
 * @param thread_id
 * @param clock_id
 * @return
 */
int dc_pthread_getcpuclockid(const struct dc_env *env, struct dc_error *err, pthread_t thread_id, clockid_t *clock_id);

/**
 *
 * @param env
 * @param err
 * @param thread
 * @param policy
 * @param param
 * @return
 */
int dc_pthread_getschedparam(const struct dc_env *env, struct dc_error *err, pthread_t thread, int *restrict policy, struct sched_param *restrict param);

/**
 *
 * @param env
 * @param err
 * @param mutex
 * @param prioceiling
 * @return
 */
int dc_pthread_mutex_getprioceiling(const struct dc_env *env, struct dc_error *err, const pthread_mutex_t *restrict mutex, int *restrict prioceiling);

/**
 *
 * @param env
 * @param err
 * @param mutex
 * @param prioceiling
 * @param old_ceiling
 * @return
 */
int dc_pthread_mutex_setprioceiling(const struct dc_env *env, struct dc_error *err, pthread_mutex_t *restrict mutex, int prioceiling, int *restrict old_ceiling);

/**
 *
 * @param env
 * @param err
 * @param attr
 * @param prioceiling
 * @return
 */
int dc_pthread_mutexattr_getprioceiling(const struct dc_env *env, struct dc_error *err, const pthread_mutexattr_t *restrict attr, int *restrict prioceiling);

/**
 *
 * @param env
 * @param err
 * @param attr
 * @param protocol
 * @return
 */
int dc_pthread_mutexattr_getprotocol(const struct dc_env *env, struct dc_error *err, const pthread_mutexattr_t *restrict attr, int *restrict protocol);

/**
 *
 * @param env
 * @param err
 * @param attr
 * @param pshared
 * @return
 */
int dc_pthread_mutexattr_getpshared(const struct dc_env *env, struct dc_error *err, const pthread_mutexattr_t *restrict attr, int *restrict pshared);

/**
 *
 * @param env
 * @param err
 * @param attr
 * @param prioceiling
 * @return
 */
int dc_pthread_mutexattr_setprioceiling(const struct dc_env *env, struct dc_error *err, pthread_mutexattr_t *attr, int prioceiling);

/**
 *
 * @param env
 * @param err
 * @param attr
 * @param protocol
 * @return
 */
int dc_pthread_mutexattr_setprotocol(const struct dc_env *env, struct dc_error *err, pthread_mutexattr_t *attr, int protocol);

/**
 *
 * @param env
 * @param err
 * @param attr
 * @param pshared
 * @return
 */
int dc_pthread_mutexattr_setpshared(const struct dc_env *env, struct dc_error *err, pthread_mutexattr_t *attr, int pshared);

/**
 *
 * @param env
 * @param err
 * @param attr
 * @param pshared
 * @return
 */
int dc_pthread_rwlockattr_getpshared(const struct dc_env *env, struct dc_error *err, const pthread_rwlockattr_t *restrict attr, int *restrict pshared);

/**
 *
 * @param env
 * @param err
 * @param attr
 * @param pshared
 * @return
 */
int dc_pthread_rwlockattr_setpshared(const struct dc_env *env, struct dc_error *err, pthread_rwlockattr_t *attr, int pshared);

/**
 *
 * @param env
 * @param err
 * @param thread
 * @param policy
 * @param param
 * @return
 */
int dc_pthread_setschedparam(const struct dc_env *env, struct dc_error *err, pthread_t thread, int policy, const struct sched_param *param);

/**
 *
 * @param env
 * @param err
 * @param thread
 * @param prio
 * @return
 */
int dc_pthread_setschedprio(const struct dc_env *env, struct dc_error *err, pthread_t thread, int prio);


#ifdef __cplusplus
}
#endif


#endif //LIBDC_POSIX_OPTIONAL_DC_PTHREAD_H
