/**
 * \copyright
 * Copyright (c) 2020, OpenGeoSys Community (http://www.opengeosys.org)
 *            Distributed under a Modified BSD License.
 *              See accompanying file LICENSE.txt or
 *              http://www.opengeosys.org/project/license
 *
 */

/**
 * \file NetCDFInterface.h
 * 29/07/2010 YW Initial implementation
 */

#ifndef NetCDFInterface_H
#define NetCDFInterface_H

#include "GEOObjects.h"
#include "msh_mesh.h"
#include <string>
#include <vector>

namespace GEOLIB
{
class GEOObjects;
}

namespace MeshLib
{
class CFEMesh;
}

namespace FileIO
{
class NetCDFInterface
{
public:
	/// Import climate data from a NetCDF file.
	static void readNetCDFData(std::string &fname,
	                           std::vector<GEOLIB::Point*>* points_vec,
	                           GEOLIB::GEOObjects* geo_obj,
	                           size_t &NRLAT,
	                           size_t &NRLON);
	/// Convert imported point data to an CFEMesh.
	static MeshLib::CFEMesh* createMeshFromPoints(std::vector<GEOLIB::Point*>* points_vec,
	                                              size_t &NRLAT,
	                                              size_t &NRLON);

private:
};
} // end namespace

#endif /* NetCDFInterface_H */
