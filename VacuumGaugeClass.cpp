static const char *RcsId     = "$Header: /cvsroot/tango-ds/Vacuum/VacuumController/VacuumGauge/VacuumGaugeClass.cpp,v 1.1.1.1 2007/10/17 16:45:21 sergi_rubio Exp $";
static const char *TagName   = "$Name:  $";
static const char *HttpServer= "http://www.esrf.fr/computing/cs/tango/tango_doc/ds_doc/";
//+=============================================================================
//
// file :        VacuumGaugeClass.cpp
//
// description : C++ source for the VacuumGaugeClass. A singleton
//               class derived from DeviceClass. It implements the
//               command list and all properties and methods required
//               by the VacuumGauge once per process.
//
// project :     TANGO Device Server
//
// $Author: sergi_rubio $
//
// $Revision: 1.1.1.1 $
//
// $Log: VacuumGaugeClass.cpp,v $
// Revision 1.1.1.1  2007/10/17 16:45:21  sergi_rubio
// Gauges, GaugeControllers, IonPump power supplies, ...
//
// $Log:  $
//
// copyleft :   European Synchrotron Radiation Facility
//              BP 220, Grenoble 38043
//              FRANCE
//
//-=============================================================================
//
//  		This file is generated by POGO
//	(Program Obviously used to Generate tango Object)
//
//         (c) - Software Engineering Group - ESRF
//=============================================================================


#include <tango.h>

#include <VacuumGauge.h>
#include <VacuumGaugeClass.h>


//+----------------------------------------------------------------------------
/**
 *	Create VacuumGaugeClass singleton and return it in a C function for Python usage
 */
//+----------------------------------------------------------------------------
extern "C" {
#ifdef WIN32

__declspec(dllexport)

#endif

	Tango::DeviceClass *_create_VacuumGauge_class(const char *name) {
		return VacuumGauge_ns::VacuumGaugeClass::init(name);
	}
}


namespace VacuumGauge_ns
{


//+----------------------------------------------------------------------------
//
// method : 		VacuumGaugeClass::VacuumGaugeClass(string &s)
// 
// description : 	constructor for the VacuumGaugeClass
//
// in : - s : The class name
//
//-----------------------------------------------------------------------------
VacuumGaugeClass::VacuumGaugeClass(string &s):DeviceClass(s)
{

	cout2 << "Entering VacuumGaugeClass constructor" << endl;
	
	cout2 << "Leaving VacuumGaugeClass constructor" << endl;

}
//+----------------------------------------------------------------------------
//
// method : 		VacuumGaugeClass::command_factory
// 
// description : 	Create the command object(s) and store them in the 
//			command list
//
//-----------------------------------------------------------------------------
void VacuumGaugeClass::command_factory()
{

	//	add polling if any
	for (unsigned int i=0 ; i<command_list.size(); i++)
	{
	}
}
//+----------------------------------------------------------------------------
//	Method: VacuumGaugeClass::attribute_factory(vector<Tango::Attr *> &att_list)
//-----------------------------------------------------------------------------
void VacuumGaugeClass::attribute_factory(vector<Tango::Attr *> &att_list)
{
	//	Attribute : Pressure
	PressureAttrib	*pressure = new PressureAttrib();
	Tango::UserDefaultAttrProp	pressure_prop;
	pressure_prop.set_standard_unit("mbar");
	pressure->set_default_properties(pressure_prop);
	att_list.push_back(pressure);

	//	End of Automatic code generation
	//-------------------------------------------------------------
}

}	// namespace
