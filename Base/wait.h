/**
 * \file DateTools.h
 * 2011/02/17 KR Initial implementation
 * \copyright
 * Copyright (c) 2020, OpenGeoSys Community (http://www.opengeosys.org)
 *            Distributed under a Modified BSD License.
 *              See accompanying file LICENSE.txt or
 *              http://www.opengeosys.org/project/license
 */

#ifndef WAIT_H
#define WAIT_H

#include <ctime>

namespace BASELIB
{
void wait(int seconds)
{
    time_t start_time, cur_time;

    time(&start_time);
    do
    {
        time(&cur_time);
    } while ((cur_time - start_time) < seconds);
}
}  // end namespace BASELIB

#endif  // WAIT_H
