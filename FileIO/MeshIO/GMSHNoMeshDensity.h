/**
 * \copyright
 * Copyright (c) 2020, OpenGeoSys Community (http://www.opengeosys.org)
 *            Distributed under a Modified BSD License.
 *              See accompanying file LICENSE.txt or
 *              http://www.opengeosys.org/project/license
 *
 */

/*
 * GMSHNoMeshDensity.h
 *
 *  Created on: Mar 5, 2012
 *      Author: fischeth
 */

#ifndef GMSHNOMESHDENSITY_H_
#define GMSHNOMESHDENSITY_H_

#include "GMSHMeshDensityStrategy.h"

namespace FileIO {

class GMSHNoMeshDensity: public FileIO::GMSHMeshDensityStrategy {
public:
	GMSHNoMeshDensity() {};
	void init(std::vector<GEOLIB::Point const*> const& vec)
	{
		// to avoid a warning here:
		(void)(vec);
	}

	double getMeshDensityAtPoint(GEOLIB::Point const*const pnt) const
	{
		// to avoid a warning here:
		(void)(pnt);
		return 0.0;
	}
};

}

#endif /* GMSHNOMESHDENSITY_H_ */
