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

class OdDbObjectId{};


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
class OdDbObjectPtr {};
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





class OdGePoint3d {
 public:
  OdGePoint3d( int, int, int);
};
class OdGeVector3d {
 public:
  OdGeVector3d( int, int, int);
};

class OdGePoint2d 
{
 public:
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


class OdDbViewport{
 public:
  static OdDbViewport* createObject();

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

class OdDbViewportPtr{
 public:
  OdDbViewportPtr(OdDbViewport*);
  OdDbViewportPtr();
  OdDbViewport * operator -> ();
};

class OdDbBlockTableRecord{
 public:
  void appendOdDbEntity(OdDbViewportPtr&);
  //  void appendOdDbEntity(OdDbViewportPtr&);

  void release();

};

class OdDbBlockTableRecordPtr{
 public:
  OdDbBlockTableRecord * operator -> ();

};
//paper and modelspace
class Space
{
 public:
  OdDbBlockTableRecordPtr safeOpenObject(OdDb::ACCESS);
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

template <class T> class OdStaticRxObject 
{
 public: 
  OdDbDatabasePtr createDatabase ();
};


// global functions 
template <class T> void odInitialize(T *);
void odDbSetTDUCREATE(OdDbDatabase&, OdDbDate&);
void odDbSetTDUUPDATE(OdDbDatabase&, OdDbDate&);

#endif
