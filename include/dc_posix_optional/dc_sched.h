#ifndef LIBDC_POSIX_OPTIONAL_DC_SCHED_H
#define LIBDC_POSIX_OPTIONAL_DC_SCHED_H


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


#ifdef __cplusplus
extern "C" {
#endif


/**
 *
 * @param env
 * @param err
 * @param policy
 * @return
 */
int dc_sched_get_priority_max(const struct dc_env *env, struct dc_error *err, int policy);

/**
 *
 * @param env
 * @param err
 * @param policy
 * @return
 */
int dc_sched_get_priority_min(const struct dc_env *env, struct dc_error *err, int policy);


#ifdef __cplusplus
}
#endif


// Not on macOS
// int dc_sched_getparam(const struct dc_env *env, struct dc_error *err, pid_t pid, struct sched_param *param);
// int dc_sched_getscheduler(const struct dc_env *env, struct dc_error *err, pid_t pid);
// int dc_sched_rr_get_interval(const struct dc_env *env, struct dc_error *err, pid_t pid, struct timespec *interval);
// int dc_sched_setparam(const struct dc_env *env, struct dc_error *err, pid_t pid, const struct sched_param *param);
// int dc_sched_setscheduler(const struct dc_env *env, struct dc_error *err, pid_t pid, int policy, const struct sched_param *param);


#endif // LIBDC_POSIX_OPTIONAL_DC_SCHED_H
