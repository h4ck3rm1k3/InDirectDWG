

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


class  OdDbDatabase
{
 public:
  void setEXTMIN();
  void setEXTMAX();
  void setTILEMODE();
  void getPaperSpaceId();
};

class  OdDbDatabasePtr
{
 public:
  OdDbDatabase * operator -> ();
  //template <class T> operator = (T);
};
class OdDbObjectId{};
class OdDbViewport{
 public:
  static void createObject();
  void release();
  void setWidth();
  void setHeight();
  void setViewCenter();
  void setViewTarget();
  void setCenterPoint();
  void setCircleSides();
  void setGridIncrement();
  void setLensLength();
  void setSnapIncrement();
  void setViewDirection();
  void setViewHeight();
  void zoomExtents();
 
};

class OdDbViewportPtr{
 public:
  OdDbViewport * operator -> ();
};

class OdDbBlockTableRecord{
 public:
  void appendOdDbEntity(OdDbViewportPtr&);
  void release();

};

class OdDbBlockTableRecordPtr{
 public:
  OdDbBlockTableRecord * operator -> ();

};

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
class OdDbHostAppServices
{
 public :
  //void readFile();
  static OdDbDatabasePtr  readFile(const OdChar*&, bool&, bool&, Oda::FileShareMode&, const OdPassword&);
  

};

template <class T> class OdStaticRxObject {};

class OdGePoint3d {
 public:
  OdGePoint3d( int, int, int);
};
class OdGeVector3d {
 public:
};

class OdGePoint2d {
 public:
};
class odInitialize{
 public:
};
class OdDbDate {
 public:
  void setDate();
  void setTime();
};
class date{
 public:
};
class odDbSetTDUCREATE{
 public:
};
class odDbSetTDUUPDATE{
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
