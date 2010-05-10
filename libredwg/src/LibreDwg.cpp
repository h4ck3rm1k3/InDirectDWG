#include "../Include/LibreDwgInterface.h"
#include <iostream>
using namespace std;
//void PaperSpaceId::safeOpenObject(OdDb::_access){}

void OdDbLayerTableRecord::setColor(OdCmColor&)
{
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

void OdDbViewport::setWidth(double){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

void OdDbViewport::setViewHeight(double h) // called 4 times
{
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
  cerr  << "view height " << h << endl;
}

void OdDbViewport::setLensLength(double){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}


OdDbObjectId OdDbLayerTable::add(OdDbLayerTableRecordPtr&){
  OdDbObjectId ret;
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
  return ret;
}

const char*  Oda::OdError::description(){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
  return "todo";
}
void OdDbBlockTableRecord::release(){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}


template <> CoordVal CoordVal::operator=<double>(double val){
  cerr << "CoordVal" <<val << endl;
  cerr << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
  return *this;
}

template <> OdDb2dVertexPtr OdDb2dVertexPtr::operator=<OdDb2dVertex>(OdDb2dVertex*){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
  return *this;

}

template <> void OdDbBlockTableRecord::appendOdDbEntity<OdDb2dPolylinePtr>(OdDb2dPolylinePtr&){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

template <> void OdDbBlockTableRecord::appendOdDbEntity<OdDbPointPtr>(OdDbPointPtr&){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

template <>  OdDbObjectPtr OdDbObjectPtr::operator=<OdDb2dPolylinePtr>(OdDb2dPolylinePtr){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
  return *this;
}

template <>  OdDbObjectPtr OdDbObjectPtr::operator=<OdDbPointPtr>(OdDbPointPtr){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
  return *this;
}


OdUInt16::OdUInt16(int){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

void OdDbPoint::setLayer(OdDbObjectId&, bool){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

void OdDbViewport::setGridIncrement(OdGeVector2d)
{
cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

OdDbViewportPtr::OdDbViewportPtr(OdDbViewport*)
{
cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

OdDb2dVertex* OdDb2dVertexPtr::operator->()
{
cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}


void OdDbDate::setTime(int, int, int, int){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

OdDbDatabase& OdDbDatabasePtr::operator*(){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

// used twice
void OdDbViewport::setWidth(int x){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << "width:" << x << endl;
}

// used twice
void OdDbViewport::setSnapIncrement(OdGeVector2d v){
  v.print();
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

// used 1 
Space OdDbDatabase::getPaperSpaceId(){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

// used 1
void OdDbDatabase::writeFile(OdWrFileBuf*, OdDb::_filetype&, OdDb::autocadversion&, bool){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

// used 2
void OdDbViewport::setHeight(double h){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
  cerr  << "height:"  << h  << endl;
}

// called N times..
void OdResBuf::setNext(OdResBufPtr& next)
{
  
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

void odDbSetTDUUPDATE(OdDbDatabase&, OdDbDate&){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

OdDbDatabase* OdDbDatabasePtr::operator->(){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

void OdDbViewport::setViewDirection(OdGeVector3d){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

void OdDb2dPolyline::setLayer(OdDbObjectId&, bool){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

// used 1
Space OdDbDatabase::getModelSpaceId(){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}


// called N times
void OdDb2dPolyline::appendVertex(OdDb2dVertexPtr& v){
  v.print();
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

OdWrFileBuf::OdWrFileBuf(OdString&)
{
  //called 1
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

void OdDbLayerTableRecord::setName(char const*)
{
  // called 1
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

OdDbObject* OdDbObjectPtr::operator->(){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

void OdDbViewport::zoomExtents()
{// called 1
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

OdGePoint3d::OdGePoint3d()
{// called N
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

// called twisch
void OdDbDatabase::setEXTMAX(OdGePoint3d v)
{
  v.print();
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}


void OdDbPoint::setPosition(OdGePoint3d)
{
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

// called 1 
void OdDbDate::setDate(int, int, int)
{
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

// called 1 
void OdDbDatabase::setTILEMODE(int){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

// called 4 times
OdGeVector2d::OdGeVector2d(double, double){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

// called N time
void OdDb2dVertex::setPosition(OdGePoint3d& p)
{
  p.print();
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

// called n times
OdDb2dPolyline* OdDb2dPolylinePtr::operator->(){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ": OdDb2dPolylinePtr::" <<  __PRETTY_FUNCTION__ << endl;
}

OdResBufPtr OdResBuf::next(){ // N
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ": OdResBuf::" <<  __PRETTY_FUNCTION__ << endl;
}

void OdDbViewport::setCenterPoint(OdGePoint3d){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}


OdGeVector3d::OdGeVector3d(int, int, int){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

void OdDbViewport::setViewCenter(OdGePoint2d){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

OdDbLayerTableRecordPtr OdDbLayerTableRecordPtr::operator=(OdDbLayerTableRecordPtr)
{
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
  return *this;
}
//OdDbLayerTableRecordPtr OdDbLayerTableRecordPtr::operator=(OdDbLayerTableRecord*){
//  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
//}

OdDbViewportPtr::OdDbViewportPtr(){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

OdDbPoint* OdDbPointPtr::operator->(){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}


void OdDbViewport::release(){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

OdResBuf*  OdResBuf::newRb(int x)
{ // called N
  cerr << x; 
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

void OdDbDatabase::setEXTMIN(OdGePoint3d){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

OdGePoint2d::OdGePoint2d(double, double){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

void OdDbViewport::setCircleSides(OdUInt16){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

//called N times
OdResBufPtr::OdResBufPtr(OdResBuf* other)
{
  cerr <<  other;
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

void OdCmColor::setRGB(int, int, int){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

 OdDbLayerTableRecord* OdDbLayerTableRecordPtr::operator->(){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ": OdDbLayerTableRecordPtr::" <<  __PRETTY_FUNCTION__ << endl;
}


OdDbPointPtr::OdDbPointPtr(OdDbPoint* p)
{
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

OdDbLayerTableRecordPtr Space::safeOpenObject(OdDb::_access)
{ //3
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

void OdDbViewport::setViewTarget(OdGePoint3d)
{ // 4
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}


OdDbLayerTable* OdDbLayerTablePtr::operator->()
{
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" << __PRETTY_FUNCTION__<< endl;
}

bool OdDbObjectPtr::operator!=(void const*){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

 OdDbViewport* OdDbViewportPtr::operator->(){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

OdResBuf* OdResBufPtr::operator->(){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

template<>  void OdDbBlockTableRecord::appendOdDbEntity(OdDbViewportPtr&){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

OdGePoint3d::OdGePoint3d(int, int, int){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}


void odDbSetTDUCREATE(OdDbDatabase&, OdDbDate&){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}


OdString::OdString(char const*){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}


Space OdDbDatabase::getLayerTableId(){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}


OdDbLayerTablePtr& OdDbLayerTablePtr::operator=(OdDbLayerTableRecordPtr){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
  return *this;
}

OdDbBlockTableRecord* OdDbBlockTableRecordPtr::operator->(){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

void OdDbObject::setXData(OdResBufPtr&){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

void OdDbViewport::setHeight(int){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

void OdResBuf::setString(char const*){
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}


template <>
CoordVal OdDbBlockTableRecordPtr::operator=<OdDbLayerTableRecordPtr>(OdDbLayerTableRecordPtr)
{
  //TODO 
  CoordVal ret;
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
  return ret;
}

void OdStaticRxBase::vinit()
{

}

// template <> CoordVal OdDbBlockTableRecordPtr::operator=<OdDbLayerTableRecordPtr>(OdDbLayerTableRecordPtr)
// {
//   cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
//   return *this;
// }
///media/sdc1/homemdupont/experiments/gdal/gdal/.libs/libgdal.so: undefined reference to `OdStaticRxObject<OGRServices>::createDatabase()'
///media/sdc1/homemdupont/experiments/gdal/gdal/.libs/libgdal.so: undefined reference to `void odInitialize<OdStaticRxObject<OGRServices> >(OdStaticRxObject<OGRServices>*)'

OdDbDatabasePtr OdStaticRxBase::vcreateDatabase()
{
  OdDbDatabasePtr db;
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
  return db;
}


OdDbLayerTableRecordPtr OdDbLayerTableRecord::createObject()
{
  OdDbLayerTableRecordPtr ret;
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
  return ret;
}

OdDbViewportPtr OdDbViewport::createObject(){
  OdDbViewportPtr ret;
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
  return ret;
}


OdDb2dPolylinePtr OdDb2dPolyline::createObject()
{
  OdDb2dPolylinePtr ret;
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
  return ret;
}


OdDbPointPtr  OdDbPoint::createObject()
{
  OdDbPointPtr ret;
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
  return ret;
}

OdDb2dVertexPtr OdDb2dVertex::createObject()
{
  OdDb2dVertexPtr ret;
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
  return ret;
}

OdDb2dPolylinePtr::OdDb2dPolylinePtr()
{
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

OdDbPointPtr::OdDbPointPtr()
{
  cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

void OdDb2dVertexPtr::print()
{
    cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

void OdGePoint3d::print()
{
    cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}

void OdGeVector2d::print()
{
    cerr  << "TRACE" << __FILE__<< ":" << __LINE__ << ":" <<  __PRETTY_FUNCTION__ << endl;
}
