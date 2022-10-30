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


#include "dc_posix_optional/dc_time.h"


int dc_clock_getcpuclockid(const struct dc_env *env, struct dc_error *err, pid_t pid, clockid_t *clock_id)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = clock_getcpuclockid(pid, clock_id);

    return ret_val;
}
