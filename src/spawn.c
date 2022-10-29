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


#include "dc_posix_optional/dc_spawn.h"


int dc_posix_spawn(const struct dc_env *env, struct dc_error *err, pid_t *restrict pid, const char *restrict path, const posix_spawn_file_actions_t *file_actions, const posix_spawnattr_t *restrict attrp, char *const argv[restrict], char *const envp[restrict])
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = posix_spawn(pid, path, file_actions, attrp, argv, envp);

    return ret_val;
}

int dc_posix_spawn_file_actions_addclose(const struct dc_env *env, struct dc_error *err, posix_spawn_file_actions_t *file_actions, int fildes)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = posix_spawn_file_actions_addclose(file_actions, fildes);

    return ret_val;
}

int dc_posix_spawn_file_actions_adddup2(const struct dc_env *env, struct dc_error *err, posix_spawn_file_actions_t *file_actions, int fildes, int newfildes)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = posix_spawn_file_actions_adddup2(file_actions, fildes, newfildes);

    return ret_val;
}

int dc_posix_spawn_file_actions_addopen(const struct dc_env *env, struct dc_error *err, posix_spawn_file_actions_t *restrict file_actions, int fildes, const char *restrict path, int oflag, mode_t mode)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = posix_spawn_file_actions_addopen(file_actions, fildes, path, oflag, mode);

    return ret_val;
}

int dc_posix_spawn_file_actions_destroy(const struct dc_env *env, struct dc_error *err, posix_spawn_file_actions_t *file_actions)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = posix_spawn_file_actions_destroy(file_actions);

    return ret_val;
}

int dc_posix_spawn_file_actions_init(const struct dc_env *env, struct dc_error *err, posix_spawn_file_actions_t *file_actions)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = posix_spawn_file_actions_init(file_actions);

    return ret_val;
}

int dc_posix_spawnattr_destroy(const struct dc_env *env, struct dc_error *err, posix_spawnattr_t *attr)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = posix_spawnattr_destroy(attr);

    return ret_val;
}

int dc_posix_spawnattr_getflags(const struct dc_env *env, struct dc_error *err, const posix_spawnattr_t *restrict attr, short *restrict flags)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = posix_spawnattr_getflags(attr, flags);

    return ret_val;
}

int dc_posix_spawnattr_getpgroup(const struct dc_env *env, struct dc_error *err, const posix_spawnattr_t *restrict attr, pid_t *restrict pgroup)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = posix_spawnattr_getpgroup(attr, pgroup);

    return ret_val;
}

int dc_posix_spawnattr_getschedparam(const struct dc_env *env, struct dc_error *err, const posix_spawnattr_t *restrict attr, struct sched_param *restrict schedparam)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = posix_spawnattr_getschedparam(attr, schedparam);

    return ret_val;
}

int dc_posix_spawnattr_getschedpolicy(const struct dc_env *env, struct dc_error *err, const posix_spawnattr_t *restrict attr, int *restrict schedpolicy)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = posix_spawnattr_getschedpolicy(attr, schedpolicy);

    return ret_val;
}

int dc_posix_spawnattr_getsigdefault(const struct dc_env *env, struct dc_error *err, const posix_spawnattr_t *restrict attr, sigset_t *restrict sigdefault)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = posix_spawnattr_getsigdefault(attr, sigdefault);

    return ret_val;
}

int dc_posix_spawnattr_getsigmask(const struct dc_env *env, struct dc_error *err, const posix_spawnattr_t *restrict attr, sigset_t *restrict sigmask)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = posix_spawnattr_getsigmask(attr, sigmask);

    return ret_val;
}

int dc_posix_spawnattr_init(const struct dc_env *env, struct dc_error *err, posix_spawnattr_t *attr)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = posix_spawnattr_init(attr);

    return ret_val;
}

int dc_posix_spawnattr_setflags(const struct dc_env *env, struct dc_error *err, posix_spawnattr_t *attr, short flags)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = posix_spawnattr_setflags(attr, flags);

    return ret_val;
}

int dc_posix_spawnattr_setpgroup(const struct dc_env *env, struct dc_error *err, posix_spawnattr_t *attr, pid_t pgroup)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = posix_spawnattr_setpgroup(attr, pgroup);

    return ret_val;
}

int dc_posix_spawnattr_setschedparam(const struct dc_env *env, struct dc_error *err, posix_spawnattr_t *restrict attr, const struct sched_param *restrict schedparam)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = posix_spawnattr_setschedparam(attr, schedparam);

    return ret_val;
}

int dc_posix_spawnattr_setschedpolicy(const struct dc_env *env, struct dc_error *err, posix_spawnattr_t *attr, int schedpolicy)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = posix_spawnattr_setschedpolicy(attr, schedpolicy);

    return ret_val;
}

int dc_posix_spawnattr_setsigdefault(const struct dc_env *env, struct dc_error *err, posix_spawnattr_t *restrict attr, const sigset_t *restrict sigdefault)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = posix_spawnattr_setsigdefault(attr, sigdefault);

    return ret_val;
}

int dc_posix_spawnattr_setsigmask(const struct dc_env *env, struct dc_error *err, posix_spawnattr_t *restrict attr, const sigset_t *restrict sigmask)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = posix_spawnattr_setsigmask(attr, sigmask);

    return ret_val;
}

int dc_posix_spawnp(const struct dc_env *env, struct dc_error *err, pid_t *restrict pid, const char *restrict file, const posix_spawn_file_actions_t *file_actions, const posix_spawnattr_t *restrict attrp, char *const argv[restrict], char *const envp[restrict])
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = posix_spawnp(pid, file, file_actions, attrp, argv, envp);

    return ret_val;
}
