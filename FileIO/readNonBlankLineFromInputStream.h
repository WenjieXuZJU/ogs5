/**
 * \copyright
 * Copyright (c) 2020, OpenGeoSys Community (http://www.opengeosys.org)
 *            Distributed under a Modified BSD License.
 *              See accompanying file LICENSE.txt or
 *              http://www.opengeosys.org/project/license
 *
 */

/*
 * readNonBlankLineFromInputStream.h
 *
 *  Created on: Apr 19, 2011
 *      Author: TF
 */

#ifndef READNONBLANKLINEFROMINPUTSTREAM_H_
#define READNONBLANKLINEFROMINPUTSTREAM_H_

#include <istream>
#include <string>

/**
 * read a non blank line from given input stream
 * @param in the input stream
 * @return read line into a string
 */
std::string readNonBlankLineFromInputStream(std::istream & in);

#endif /* READNONBLANKLINEFROMINPUTSTREAM_H_ */
