#ifndef LIBDC_POSIX_OPTIONAL_SYS_DC_MMAN_H
#define LIBDC_POSIX_OPTIONAL_SYS_DC_MMAN_H


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


#include <dc_env/env.h>
#include <sys/stat.h>


#ifdef __cplusplus
extern "C" {
#endif


int dc_mlock(const struct dc_env *env, struct dc_error *err, const void *addr, size_t len);
int dc_mlockall(const struct dc_env *env, struct dc_error *err, int flags);
int dc_munlock(const struct dc_env *env, struct dc_error *err, const void *addr, size_t len);
int dc_munlockall(const struct dc_env *env, struct dc_error *err);
int dc_posix_madvise(const struct dc_env *env, struct dc_error *err, void *addr, size_t len, int advice);
int dc_shm_open(const struct dc_env *env, struct dc_error *err, const char *name, int oflag, mode_t mode);
int dc_shm_unlink(const struct dc_env *env, struct dc_error *err, const char *name);


#ifdef __cplusplus
}
#endif


// not on macOS
// int    posix_mem_offset(const void *restrict, size_t, off_t *restrict, size_t *restrict, int *restrict);
// int    posix_typed_mem_get_info(int, struct posix_typed_mem_info *);
// int    posix_typed_mem_open(const char *, int, int);


#endif // LIBDC_POSIX_OPTIONAL_SYS_DC_MMAN_H