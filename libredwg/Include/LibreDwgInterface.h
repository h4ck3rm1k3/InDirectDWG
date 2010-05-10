#ifndef INC_LIBREDWGINTERFACE_H
#define INC_LIBREDWGINTERFACE_H

#define DD_T(X) OdString(X)

template <class T> class OdRxObjectImpl
{

};

class OdStreamBuf
{
};
class OdChar{};
class OdCharPtr{};
class OdString
{
 public:
  OdString();
  OdString(const char *);
  operator const OdChar* () const;
  operator const char* () const;
  bool isEmpty() const;
  const OdChar* operator [] (int x) const;
  const OdChar* operator = (const OdChar*);
  void formatV(const OdChar*&, char*&);
};

class OdCodePageId{};

extern OdCodePageId CP_UNDEFINED; // global



class OdGsDevice{};
class OdGsDevicePtr{
 public:
  OdGsDevice * operator -> ();
};
class OdInt32{
 public:
  OdInt32(long int);
};
class OdInt64{
 public:
  OdInt64(long int);

};
//class OdRdFileBufPtr{};
//class OdResult{};
class OdUInt32{};
class OdUInt64{};
class OdUInt8{};
//class OdWrFileBufPtr{};

class  OdDb 
 { 
 public:
   class FilerSeekType{}; 

   typedef enum _filetype {
     kDwg,
     kDxf,
   } SaveType ;

   typedef enum _access {
    kForWrite,
   } ACCESS;

   typedef enum autocadversion{
     vAC12,
     vAC13,
     vAC14,
     vAC15,
     vAC16,
     vAC17,
     vAC18
     
   } DwgVersion;

 };

/* typedef enum test  */
/*   { */

/*    , */
/*   } somthing; */


#define ODRX_USING_HEAP_OPERATORS(X)

class OdTtfDescriptor {};
class OdHatchPatternManager{};

class OdPassword {};
namespace Oda 
{ 
     typedef enum _FileShareMode 
   { 
     kShareDenyNo,
     kOdRxObjAttach
   } FileShareMode; 
  
   typedef enum _FileAccessMode { 
    kFileWrite,
    kFileRead,

    
  } FileAccessMode;

  typedef enum _FileCreationDisposition{
    kCreateAlways,
    kOpenExisting,

  } FileCreationDisposition;

  typedef enum _Errors{
    eNoFileName,
    eNotImplemented
  } OdError_;

  class OdError
  {
  public:
    OdError( Oda::_Errors);
    const char * description();
  };



  typedef OdError OdResult;
 
 }; 

using namespace Oda;
template <class T> class OdSmartPtr
{
 public:
  //  OdSmartPtr(T *, Oda::_FileCreationDisposition);
  //  OdSmartPtr(T *, Oda::_FileShareMode);
  T * operator -> ();
};

class OdBaseFileBuf
{
 public :
  OdBaseFileBuf(OdString&);
  void open(const OdString&, Oda::FileShareMode&, Oda::FileAccessMode&, Oda::FileCreationDisposition&);
};
class OdRdFileBuf
{
 public:
  OdRdFileBuf(OdString&);
static  OdSmartPtr<OdBaseFileBuf> createObject();
};
class OdWrFileBuf 
{
 public:
  OdWrFileBuf(OdString&);
  static OdSmartPtr<OdBaseFileBuf> createObject();
};

class OdStreamBufPtr{
 public :
  OdStreamBufPtr(OdSmartPtr<OdBaseFileBuf>&);
};


class OdDbHostAppServices2
{};
class OdDbSystemServices
{};

// wrapper for the coordinates
class CoordVal
{
 public:
  CoordVal & operator = (CoordVal &);
  template <class T> CoordVal operator = (T *);
  //  template <class T> CoordVal operator = (T &);
  template <class T> CoordVal operator = (T );

};

class OdGePoint3d {
 public:
  CoordVal  x;
  CoordVal  y;
  CoordVal  z;
  OdGePoint3d( );
  OdGePoint3d( int, int, int);
  
};

class OdGeVector3d {
 public:
  OdGeVector3d( );
  OdGeVector3d( int, int, int);
};

class OdGePoint2d 
{
 public:
  OdGePoint2d ();
  OdGePoint2d (double, double );

};

class OdDbDate {
 public:

  void setDate(int, int, int);
  void setTime(int, int, int, int);

};
class date{
 public:
};

class OdGeVector2d{

 public:
  OdGeVector2d(  double, double);

};
class OdUInt16{
 public:
  OdUInt16(int);
};


class OdDbViewport;
class OdDbViewportPtr{
 public:
  OdDbViewportPtr(OdDbViewport*);
  OdDbViewportPtr();
  OdDbViewport * operator -> ();
};


class OdDbViewport{
 public:
  static OdDbViewportPtr createObject();
  void release();
  void setCenterPoint(OdGePoint3d);
  void setCircleSides(OdUInt16);
  void setGridIncrement(OdGeVector2d);
  void setHeight(double);
  void setHeight(int);
  void setLensLength(double);
  void setSnapIncrement(OdGeVector2d);
  void setViewCenter(OdGePoint2d);
  void setViewDirection(OdGeVector3d);
  void setViewHeight(double);
  void setViewTarget(OdGePoint3d);
  void setWidth(double);
  void setWidth(int);
  void zoomExtents();
};

class OdDbBlockTableRecord{
 public:
  template <class T>void appendOdDbEntity(T&);
  void setName();
  void release();
};

class OdDbBlockTableRecordPtr{
 public:
  OdDbBlockTableRecord * operator -> ();
  template <class T> CoordVal operator = (T *);
  template <class T> CoordVal operator = (T &);
  template <class T> CoordVal operator = (T );

};

class OdDbLayerTableRecord;

class OdDbLayerTableRecordPtr{
 public:
  OdDbLayerTableRecord * operator -> ();
  OdDbLayerTableRecordPtr operator = (OdDbLayerTableRecordPtr);
  //  OdDbLayerTableRecordPtr operator = (OdDbLayerTableRecordPtr &);
  //    OdDbLayerTableRecordPtr operator = (OdDbLayerTableRecord *);
};


//paper and modelspace
class Space
{
 public:
  //  OdDbBlockTableRecordPtr safeOpenObject(OdDb::ACCESS);
  OdDbLayerTableRecordPtr safeOpenObject(OdDb::ACCESS);
  //template <class T> T safeOpenObject(OdDb::ACCESS);
};

class  OdDbDatabase
{
 public:
  

  void setEXTMAX(OdGePoint3d);
  void setEXTMIN(OdGePoint3d);
  void setTILEMODE(int);
  
  Space getPaperSpaceId();
  void writeFile(OdWrFileBuf*, OdDb::_filetype&, OdDb::autocadversion&, bool);

  Space getModelSpaceId();
  Space getLayerTableId();

};

class  OdDbDatabasePtr
{
 public:
  OdDbDatabase * operator -> ();
  OdDbDatabase & operator * ();
  //template <class T> operator = (T);
};


class OdDbHostAppServices
{
 public :
  //void readFile();
  static OdDbDatabasePtr  readFile(const OdChar*&, bool&, bool&, Oda::FileShareMode&, const OdPassword&);
 
};

class OdStaticRxBase
{
 public:
  virtual void vinit();
  static OdDbDatabasePtr vcreateDatabase ();
};

template <class T> class OdStaticRxObject  : public OdStaticRxBase
{
 public: 
  OdDbDatabasePtr createDatabase ();
  void init();
};


// global functions 
template <class T> void odInitialize(T *);
void odDbSetTDUCREATE(OdDbDatabase&, OdDbDate&);
void odDbSetTDUUPDATE(OdDbDatabase&, OdDbDate&);

class OdCmColor{
 public:
  void setRGB(int,int,int);
};

class OdDb2dVertex;
class OdDb2dVertexPtr{
 public:
  template <class T> OdDb2dVertexPtr operator = (T *);
  //template <class T> OdDb2dVertexPtr = (T &);
  template <class T> OdDb2dVertexPtr operator = (T );

  OdDb2dVertex * operator -> ();
};

class OdDb2dVertex {
 public:
  static OdDb2dVertexPtr createObject();
  void setPosition(OdGePoint3d&);

};





//class newRB{};
/* class oColor{}; */
/* class p2dPl{}; */
/* class pLayer{}; */
/* class pLayers{}; */
/* class pPoint{}; */
/* class pV{}; */
/* class temp{}; */
/* class xIter{}; */



class OdResBuf;

class OdResBufPtr
{
 public:
  OdResBufPtr (OdResBuf *);
  OdResBuf * operator -> ();
  OdResBuf & operator * ();
};

class OdResBuf
{
 public:
  static OdResBuf * newRb(int );

  void setString(const char*);
  void setNext(OdResBufPtr&);
  OdResBufPtr next();

};

class OdDbPoint;
class OdDbPointPtr{
 public:
  OdDbPointPtr();
  OdDbPointPtr(OdDbPoint *);
  OdDbPoint * operator -> ();
};


class OdDbLayerTable;

class OdDbLayerTablePtr{
 public:
  OdDbLayerTable * operator -> ();
  //OdDbLayerTablePtr & operator = (OdDbBlockTableRecordPtr &);
    OdDbLayerTablePtr & operator = (OdDbLayerTableRecordPtr);
  //  OdDbLayerTablePtr & operator = (OdDbLayerTablePtr &);
  //  OdDbLayerTablePtr & operator = (OdDbLayerTable* );
  //OdDbLayerTablePtr & operator = (OdDbLayerTablePtr );

};

class OdDb2dPolyline;
class OdDb2dPolylinePtr{
 public:
  OdDb2dPolylinePtr();
  OdDb2dPolylinePtr(OdDb2dPolyline*);
  OdDb2dPolyline * operator -> ();
};
class OdDbObject
{
 public:
  void setXData(OdResBufPtr&);

};
class OdDbObjectPtr {
 public:
  OdDbObject * operator -> ();
  template <class T> OdDbObjectPtr operator = (T *);
  //  template <class T> OdDbObjectPtroperator = (T &);
  template <class T> OdDbObjectPtr operator = (T );
  OdDbObjectPtr operator = (OdDbObject *);
  OdDbObjectPtr operator = (OdDbPoint *);
  OdDbObjectPtr operator = (OdDbObjectPtr);
  

  operator OdDbObject * ();
  bool operator == (const void *);
  bool operator != (const void *);
};

class OdDbObjectId
{
 public:
  //OdDbLayerTableRecordPtr
  OdDbObjectId & operator = (OdDbBlockTableRecordPtr &);
  OdDbObjectId & operator = (OdDbLayerTableRecordPtr);
  OdDbObjectId  & operator = (OdDbLayerTablePtr &);
  OdDbObjectId  & operator = (OdDbLayerTable* );
  OdDbObjectId  & operator = (OdDbLayerTablePtr );
};

class OdDbLayerTable
{
 public:
  OdDbObjectId add(OdDbLayerTableRecordPtr&);
};


class OdDbLayerTableRecord
{
 public:
  static OdDbLayerTableRecordPtr createObject();
  void setColor(OdCmColor&);
  void setName(const char*);
  OdDbObjectId add(OdDbLayerTableRecordPtr&);

};

class OdDb2dPolyline {
 public:
  static OdDb2dPolylinePtr createObject();
  void appendVertex(OdDb2dVertexPtr&);
  void setLayer(OdDbObjectId&, bool);
};

class OdDbPoint{
 public:
  static OdDbPointPtr createObject();
  void setPosition(OdGePoint3d);
  void   setLayer(OdDbObjectId&, bool);
};



#endif
