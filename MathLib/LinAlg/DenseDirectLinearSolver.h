/**
 * \copyright
 * Copyright (c) 2020, OpenGeoSys Community (http://www.opengeosys.org)
 *            Distributed under a Modified BSD License.
 *              See accompanying file LICENSE.txt or
 *              http://www.opengeosys.org/project/license
 *
 */

/*
 * DenseDirectLinearSolver.h
 *
 *  Created on: Jan 7, 2011
 *      Author: TF
 */

#ifndef DENSEDIRECTLINEARSOLVER_H_
#define DENSEDIRECTLINEARSOLVER_H_

#include "DirectLinearSolver.h"

namespace MathLib
{
class DenseDirectLinearSolver : public MathLib::DirectLinearSolver
{
public:
	DenseDirectLinearSolver() {}
	virtual ~DenseDirectLinearSolver() {}
};
}

#endif /* DENSEDIRECTLINEARSOLVER_H_ */
