#include "../Include/LibreDwgInterface.h"

//void PaperSpaceId::safeOpenObject(OdDb::_access){}

void OdDbLayerTableRecord::setColor(OdCmColor&)
{
}

void OdDbViewport::setWidth(double){}
void OdDbViewport::setViewHeight(double){}
void OdDbViewport::setLensLength(double){}

OdDbObjectId OdDbLayerTable::add(OdDbLayerTableRecordPtr&){
  OdDbObjectId ret;
  return ret;
}

const char*  Oda::OdError::description(){
  return "todo";
}
void OdDbBlockTableRecord::release(){}

template <> CoordVal CoordVal::operator=<double>(double){}
template <> OdDb2dVertexPtr OdDb2dVertexPtr::operator=<OdDb2dVertex>(OdDb2dVertex*){}
template <> void OdDbBlockTableRecord::appendOdDbEntity<OdDb2dPolylinePtr>(OdDb2dPolylinePtr&){}
template <> void OdDbBlockTableRecord::appendOdDbEntity<OdDbPointPtr>(OdDbPointPtr&){}
template <>  OdDbObjectPtr OdDbObjectPtr::operator=<OdDb2dPolylinePtr>(OdDb2dPolylinePtr){}
template <>  OdDbObjectPtr OdDbObjectPtr::operator=<OdDbPointPtr>(OdDbPointPtr){}
// depends on ogr template <> void OdStaticRxObject<OGRServices>::createDatabase(){} 
//template <> void odInitialize<OdStaticRxObject<OGRServices> >(OdStaticRxObject<OGRServices>*){}

OdUInt16::OdUInt16(int){}
void OdDbPoint::setLayer(OdDbObjectId&, bool){}
void OdDbViewport::setGridIncrement(OdGeVector2d){}
OdDbViewportPtr::OdDbViewportPtr(OdDbViewport*){}

OdDb2dVertex* OdDb2dVertexPtr::operator->(){}
OdDbLayerTableRecord * OdDbLayerTableRecord::createObject(){}
void OdDbDate::setTime(int, int, int, int){}
OdDbDatabase& OdDbDatabasePtr::operator*(){}
void OdDbViewport::setWidth(int){}
void OdDbViewport::setSnapIncrement(OdGeVector2d){}
Space OdDbDatabase::getPaperSpaceId(){}
void OdDbDatabase::writeFile(OdWrFileBuf*, OdDb::_filetype&, OdDb::autocadversion&, bool){}
void OdDbViewport::setHeight(double){}
void OdResBuf::setNext(OdResBufPtr&){}
void odDbSetTDUUPDATE(OdDbDatabase&, OdDbDate&){}
OdDbDatabase* OdDbDatabasePtr::operator->(){}
void OdDbViewport::setViewDirection(OdGeVector3d){}
void OdDb2dPolyline::setLayer(OdDbObjectId&, bool){}
Space OdDbDatabase::getModelSpaceId(){}
void OdDb2dPolyline::appendVertex(OdDb2dVertexPtr&){}
OdWrFileBuf::OdWrFileBuf(OdString&){}
void OdDbLayerTableRecord::setName(char const*){}
OdDbObject* OdDbObjectPtr::operator->(){}
void OdDbViewport::zoomExtents(){}
OdGePoint3d::OdGePoint3d(){}
void OdDbDatabase::setEXTMAX(OdGePoint3d){}

void OdDbPoint::setPosition(OdGePoint3d){}
void OdDbDate::setDate(int, int, int){}

void OdDbDatabase::setTILEMODE(int){}
OdGeVector2d::OdGeVector2d(double, double){}
void OdDb2dVertex::setPosition(OdGePoint3d&){}
OdDb2dPolyline* OdDb2dPolylinePtr::operator->(){}
OdResBufPtr OdResBuf::next(){}
void OdDbViewport::setCenterPoint(OdGePoint3d){}

OdGeVector3d::OdGeVector3d(int, int, int){}
void OdDbViewport::setViewCenter(OdGePoint2d){}
OdDbLayerTableRecordPtr OdDbLayerTableRecordPtr::operator=(OdDbLayerTableRecord*){}
OdDbViewportPtr::OdDbViewportPtr(){}
OdDbPoint* OdDbPointPtr::operator->(){}
OdDbViewport* OdDbViewport::createObject(){}
void OdDbViewport::release(){}
OdResBuf*  OdResBuf::newRb(int){}
void OdDbDatabase::setEXTMIN(OdGePoint3d){}
OdGePoint2d::OdGePoint2d(double, double){}
void OdDbViewport::setCircleSides(OdUInt16){}
OdResBufPtr::OdResBufPtr(OdResBuf*){}
void OdCmColor::setRGB(int, int, int){}
 OdDbLayerTableRecord* OdDbLayerTableRecordPtr::operator->(){}

OdDbPointPtr::OdDbPointPtr(OdDbPoint*){}
OdDbLayerTableRecordPtr Space::safeOpenObject(OdDb::_access){}
void OdDbViewport::setViewTarget(OdGePoint3d){}

OdDbLayerTable* OdDbLayerTablePtr::operator->(){}
bool OdDbObjectPtr::operator!=(void const*){}
 OdDbViewport* OdDbViewportPtr::operator->(){}
OdResBuf* OdResBufPtr::operator->(){}
template<>  void OdDbBlockTableRecord::appendOdDbEntity(OdDbViewportPtr&){}
OdGePoint3d::OdGePoint3d(int, int, int){}

void odDbSetTDUCREATE(OdDbDatabase&, OdDbDate&){}
OdDb2dPolylinePtr OdDb2dPolyline::createObject(){}
OdString::OdString(char const*){}
OdDbPoint*  OdDbPoint::createObject(){}
Space OdDbDatabase::getLayerTableId(){}
OdDb2dVertex* OdDb2dVertex::createObject(){}
OdDbLayerTablePtr& OdDbLayerTablePtr::operator=(OdDbLayerTableRecordPtr){}
OdDbBlockTableRecord* OdDbBlockTableRecordPtr::operator->(){}
void OdDbObject::setXData(OdResBufPtr&){}
void OdDbViewport::setHeight(int){}
void OdResBuf::setString(char const*){}
