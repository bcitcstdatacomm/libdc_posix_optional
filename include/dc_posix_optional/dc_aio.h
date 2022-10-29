#ifndef LIBDC_POSIX_OPTIONAL_DC_AIO_H
#define LIBDC_POSIX_OPTIONAL_DC_AIO_H


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
#include <dc_posix/dc_aio.h>
#include <aio.h>


#ifdef __cplusplus
extern "C" {
#endif


/**
 *
 * @param env
 * @param err
 * @param op
 * @param aiocbp
 * @return
 */
int dc_aio_fsync(const struct dc_env *env, struct dc_error *err, int op, struct aiocb *aiocbp);


#ifdef __cplusplus
}
#endif


#endif // LIBDC_POSIX_OPTIONAL_DC_AIO_H
