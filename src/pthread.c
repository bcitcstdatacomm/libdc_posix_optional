/*
 * Copyright 2021-2022 D'Arcy Smith.
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


#include "dc_posix_optional/dc_pthread.h"


int dc_pthread_attr_getinheritsched(const struct dc_env *env, struct dc_error *err, const pthread_attr_t *restrict attr, int *restrict inheritsched)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = pthread_attr_getinheritsched(attr, inheritsched);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int dc_pthread_attr_getschedpolicy(const struct dc_env *env, struct dc_error *err, const pthread_attr_t *restrict attr, int *restrict policy)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = pthread_attr_getschedpolicy(attr, policy);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int dc_pthread_attr_getscope(const struct dc_env *env, struct dc_error *err, const pthread_attr_t *restrict attr, int *restrict contentionscope)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = pthread_attr_getscope(attr, contentionscope);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int dc_pthread_attr_getstack(const struct dc_env *env, struct dc_error *err, const pthread_attr_t *restrict attr, void **restrict stackaddr, size_t *restrict stacksize)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = pthread_attr_getstack(attr, stackaddr, stacksize);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int dc_pthread_attr_getstacksize(const struct dc_env *env, struct dc_error *err, const pthread_attr_t *restrict attr, size_t *restrict stacksize)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = pthread_attr_getstacksize(attr, stacksize);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int dc_pthread_attr_setinheritsched(const struct dc_env *env, struct dc_error *err, pthread_attr_t *attr, int inheritsched)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = pthread_attr_setinheritsched(attr, inheritsched);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int dc_pthread_attr_setschedpolicy(const struct dc_env *env, struct dc_error *err, pthread_attr_t *attr, int policy)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = pthread_attr_setschedpolicy(attr, policy);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int dc_pthread_attr_setscope(const struct dc_env *env, struct dc_error *err, pthread_attr_t *attr, int contentionscope)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = pthread_attr_setscope(attr, contentionscope);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int dc_pthread_attr_setstack(const struct dc_env *env, struct dc_error *err, pthread_attr_t *attr, void *stackaddr, size_t stacksize)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = pthread_attr_setstack(attr, stackaddr, stacksize);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int dc_pthread_attr_setstacksize(const struct dc_env *env, struct dc_error *err, pthread_attr_t *attr, size_t stacksize)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = pthread_attr_setstacksize(attr, stacksize);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int dc_pthread_condattr_getpshared(const struct dc_env *env, struct dc_error *err, const pthread_condattr_t *restrict attr, int *restrict pshared)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = pthread_condattr_getpshared(attr, pshared);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int dc_pthread_condattr_setpshared(const struct dc_env *env, struct dc_error *err, pthread_condattr_t *attr, int pshared)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = pthread_condattr_setpshared(attr, pshared);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int dc_pthread_getschedparam(const struct dc_env *env, struct dc_error *err, pthread_t thread, int *restrict policy, struct sched_param *restrict param)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = pthread_getschedparam(thread, policy, param);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int dc_pthread_mutex_getprioceiling(const struct dc_env *env, struct dc_error *err, const pthread_mutex_t *restrict mutex, int *restrict prioceiling)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = pthread_mutex_getprioceiling(mutex, prioceiling);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int dc_pthread_mutex_setprioceiling(const struct dc_env *env, struct dc_error *err, pthread_mutex_t *restrict mutex, int prioceiling, int *restrict old_ceiling)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = pthread_mutex_setprioceiling(mutex, prioceiling, old_ceiling);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int dc_pthread_mutexattr_getprioceiling(const struct dc_env *env, struct dc_error *err, const pthread_mutexattr_t *restrict attr, int *restrict prioceiling)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = pthread_mutexattr_getprioceiling(attr, prioceiling);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int dc_pthread_mutexattr_getprotocol(const struct dc_env *env, struct dc_error *err, const pthread_mutexattr_t *restrict attr, int *restrict protocol)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = pthread_mutexattr_getprotocol(attr, protocol);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int dc_pthread_mutexattr_getpshared(const struct dc_env *env, struct dc_error *err, const pthread_mutexattr_t *restrict attr, int *restrict pshared)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = pthread_mutexattr_getpshared(attr, pshared);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int dc_pthread_mutexattr_setprioceiling(const struct dc_env *env, struct dc_error *err, pthread_mutexattr_t *attr, int prioceiling)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = pthread_mutexattr_setprioceiling(attr, prioceiling);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int dc_pthread_mutexattr_setprotocol(const struct dc_env *env, struct dc_error *err, pthread_mutexattr_t *attr, int protocol)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = pthread_mutexattr_setprotocol(attr, protocol);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int dc_pthread_mutexattr_setpshared(const struct dc_env *env, struct dc_error *err, pthread_mutexattr_t *attr, int pshared)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = pthread_mutexattr_setpshared(attr, pshared);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int dc_pthread_rwlockattr_getpshared(const struct dc_env *env, struct dc_error *err, const pthread_rwlockattr_t *restrict attr, int *restrict pshared)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = pthread_rwlockattr_getpshared(attr, pshared);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int dc_pthread_rwlockattr_setpshared(const struct dc_env *env, struct dc_error *err, pthread_rwlockattr_t *attr, int pshared)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = pthread_rwlockattr_setpshared(attr, pshared);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}

int dc_pthread_setschedparam(const struct dc_env *env, struct dc_error *err, pthread_t thread, int policy, const struct sched_param *param)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = pthread_setschedparam(thread, policy, param);

    if(ret_val != 0)
    {
        // TODO: what?
    }

    return ret_val;
}
